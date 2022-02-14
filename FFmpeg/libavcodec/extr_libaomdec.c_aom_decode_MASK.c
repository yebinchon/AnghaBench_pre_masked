
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct aom_image {int d_w; int w; scalar_t__ d_h; scalar_t__ h; int fmt; int bit_depth; int stride; scalar_t__ planes; } ;
struct TYPE_16__ {int decoder; } ;
struct TYPE_15__ {int width; int height; int pix_fmt; TYPE_4__* priv_data; } ;
struct TYPE_14__ {int linesize; int data; } ;
struct TYPE_13__ {int size; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ AV1DecodeContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int,int *) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 struct aom_image* FUNC_3 (int *,void const**) ;
 int FUNC_4 (int ,int ,int const**,int ,int ,int,int) ;
 int FUNC_5 (TYPE_3__*,int ,char*,...) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_3__*,int,int) ;
 int FUNC_8 (TYPE_2__*,struct aom_image*) ;
 int FUNC_9 (TYPE_3__*,struct aom_image*) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_6, void *VAR_7, int *VAR_8,
                      AVPacket *VAR_9)
{
    AV1DecodeContext *VAR_10 = VAR_6->priv_data;
    AVFrame *VAR_11 = VAR_7;
    const void *VAR_12 = ((void*)0);
    struct aom_image *VAR_13;
    int VAR_14;

    if (FUNC_0(&VAR_10->decoder, VAR_9->data, VAR_9->size, ((void*)0)) !=
        VAR_0) {
        const char *VAR_15 = FUNC_1(&VAR_10->decoder);
        const char *VAR_16 = FUNC_2(&VAR_10->decoder);

        FUNC_5(VAR_6, VAR_4, "Failed to decode frame: %s\n", VAR_15);
        if (VAR_16)
            FUNC_5(VAR_6, VAR_4, "  Additional information: %s\n",
                   VAR_16);
        return VAR_3;
    }

    if ((VAR_13 = FUNC_3(&VAR_10->decoder, &VAR_12))) {
        if (VAR_13->d_w > VAR_13->w || VAR_13->d_h > VAR_13->h) {
            FUNC_5(VAR_6, VAR_4, "Display dimensions %dx%d exceed storage %dx%d\n",
                   VAR_13->d_w, VAR_13->d_h, VAR_13->w, VAR_13->h);
            return VAR_2;
        }

        if ((VAR_14 = FUNC_9(VAR_6, VAR_13)) < 0) {
            FUNC_5(VAR_6, VAR_4, "Unsupported output colorspace (%d) / bit_depth (%d)\n",
                   VAR_13->fmt, VAR_13->bit_depth);
            return VAR_14;
        }

        if ((int)VAR_13->d_w != VAR_6->width || (int)VAR_13->d_h != VAR_6->height) {
            FUNC_5(VAR_6, VAR_5, "dimension change! %dx%d -> %dx%d\n",
                   VAR_6->width, VAR_6->height, VAR_13->d_w, VAR_13->d_h);
            VAR_14 = FUNC_7(VAR_6, VAR_13->d_w, VAR_13->d_h);
            if (VAR_14 < 0)
                return VAR_14;
        }
        if ((VAR_14 = FUNC_6(VAR_6, VAR_11, 0)) < 0)
            return VAR_14;
        if ((VAR_13->fmt & VAR_1) && VAR_13->bit_depth == 8)
            FUNC_8(VAR_11, VAR_13);
        else
            FUNC_4(VAR_11->data, VAR_11->linesize, (const uint8_t **)VAR_13->planes,
                          VAR_13->stride, VAR_6->pix_fmt, VAR_13->d_w, VAR_13->d_h);
        *VAR_8 = 1;
    }
    return VAR_9->size;
}
