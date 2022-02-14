
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {int pix_fmt; } ;
struct TYPE_20__ {int height; int * linesize; int data; int format; int width; int * extended_data; } ;
struct TYPE_19__ {int pts; int size; } ;
struct TYPE_18__ {int log2_chroma_h; } ;
struct TYPE_17__ {int frames_per_jpeg; int mjpeg_data_size; int height; TYPE_4__** picture; int width; int pix_fmt; TYPE_9__* avctx; struct TYPE_17__* priv_data; } ;
typedef TYPE_1__ SMVJpegDecodeContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (void*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_9__*,TYPE_4__*,int*,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int ,int ,int *,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_4, void *VAR_5, int *VAR_6,
                            AVPacket *VAR_7)
{
    const AVPixFmtDescriptor *VAR_8;
    SMVJpegDecodeContext *VAR_9 = VAR_4->priv_data;
    AVFrame* VAR_10 = VAR_9->picture[0];
    int VAR_11, VAR_12 = 0, VAR_13 = 0;

    VAR_12 = VAR_7->pts % VAR_9->frames_per_jpeg;


    if (VAR_12 < 0)
        VAR_12 += VAR_9->frames_per_jpeg;


    if (!VAR_12) {
        FUNC_3(VAR_10);
        VAR_13 = FUNC_6(VAR_9->avctx, VAR_10, &VAR_9->mjpeg_data_size, VAR_7);
        if (VAR_13 < 0) {
            VAR_9->mjpeg_data_size = 0;
            return VAR_13;
        }
    } else if (!VAR_9->mjpeg_data_size)
        return FUNC_0(VAR_3);

    VAR_8 = FUNC_5(VAR_9->avctx->pix_fmt);
    FUNC_1(VAR_8);

    if (VAR_10->height % (VAR_9->frames_per_jpeg << VAR_8->log2_chroma_h)) {
        FUNC_4(VAR_4, VAR_1, "Invalid height\n");
        return VAR_0;
    }


    *VAR_6 = VAR_9->mjpeg_data_size;

    VAR_4->pix_fmt = VAR_9->avctx->pix_fmt;



    VAR_13 = FUNC_7(VAR_4, VAR_10->width, VAR_10->height / VAR_9->frames_per_jpeg);
    if (VAR_13 < 0) {
        FUNC_4(VAR_9, VAR_1, "Failed to set dimensions\n");
        return VAR_13;
    }

    if (*VAR_6) {
        VAR_9->picture[1]->extended_data = ((void*)0);
        VAR_9->picture[1]->width = VAR_4->width;
        VAR_9->picture[1]->height = VAR_4->height;
        VAR_9->picture[1]->format = VAR_4->pix_fmt;
        FUNC_8(VAR_9->picture[1]->data, VAR_10->data, VAR_10->linesize,
                    VAR_4->pix_fmt, VAR_4->width, VAR_4->height, VAR_12);
        for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
            VAR_9->picture[1]->linesize[VAR_11] = VAR_10->linesize[VAR_11];

        VAR_13 = FUNC_2(VAR_5, VAR_9->picture[1]);
        if (VAR_13 < 0)
            return VAR_13;
    }

    return VAR_7->size;
}
