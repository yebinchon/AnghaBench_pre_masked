
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_15__ {int chroma_sample_location; int color_primaries; int color_trc; int color_range; int colorspace; int bit_rate; int height; int width; int coded_height; int coded_width; int pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int size; int* data; } ;
struct TYPE_13__ {TYPE_3__* hevc_avctx; TYPE_3__* h264_avctx; } ;
struct TYPE_12__ {int len; int bits; } ;
typedef TYPE_1__ IMM5Context ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int*) ;
 TYPE_11__* VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_2, void *VAR_3,
                             int *VAR_4, AVPacket *VAR_5)
{
    IMM5Context *VAR_6 = VAR_2->priv_data;
    AVFrame *VAR_7 = VAR_3;
    AVCodecContext *VAR_8 = VAR_6->h264_avctx;
    int VAR_9;

    if (VAR_5->size > 24 && VAR_5->data[8] <= 1 && FUNC_0(VAR_5->data + 4) + 24ULL <= VAR_5->size) {
        int VAR_10 = VAR_5->data[1];
        int VAR_11 = VAR_5->data[10];
        int VAR_12 = FUNC_0(VAR_5->data + 4);
        int VAR_13, VAR_14;

        if (VAR_10 == 0xA) {
            VAR_8 = VAR_6->hevc_avctx;
        } else if (VAR_11 == 17) {
            VAR_11 = 4;
        } else if (VAR_11 == 18) {
            VAR_11 = 5;
        }

        if (VAR_11 >= 1 && VAR_11 <= 12) {
            VAR_9 = FUNC_2(VAR_5);
            if (VAR_9 < 0)
                return VAR_9;

            VAR_11 -= 1;
            VAR_14 = VAR_13 = VAR_1[VAR_11].len;
            if (VAR_10 == 2) {
                VAR_13 += VAR_1[12].len;
            } else {
                VAR_13 += VAR_1[13].len;
            }

            VAR_5->data += 24 - VAR_13;
            VAR_5->size = VAR_12 + VAR_13;

            FUNC_5(VAR_5->data, VAR_1[VAR_11].bits, VAR_1[VAR_11].len);
            if (VAR_10 == 2) {
                FUNC_5(VAR_5->data + VAR_14, VAR_1[12].bits, VAR_1[12].len);
            } else {
                FUNC_5(VAR_5->data + VAR_14, VAR_1[13].bits, VAR_1[13].len);
            }
        } else {
            VAR_5->data += 24;
            VAR_5->size -= 24;
        }
    }

    VAR_9 = FUNC_4(VAR_8, VAR_5);
    if (VAR_9 < 0) {
        FUNC_1(VAR_2, VAR_0, "Error submitting a packet for decoding\n");
        return VAR_9;
    }

    VAR_9 = FUNC_3(VAR_8, VAR_7);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_2->pix_fmt = VAR_8->pix_fmt;
    VAR_2->coded_width = VAR_8->coded_width;
    VAR_2->coded_height = VAR_8->coded_height;
    VAR_2->width = VAR_8->width;
    VAR_2->height = VAR_8->height;
    VAR_2->bit_rate = VAR_8->bit_rate;
    VAR_2->colorspace = VAR_8->colorspace;
    VAR_2->color_range = VAR_8->color_range;
    VAR_2->color_trc = VAR_8->color_trc;
    VAR_2->color_primaries = VAR_8->color_primaries;
    VAR_2->chroma_sample_location = VAR_8->chroma_sample_location;

    *VAR_4 = 1;

    return VAR_5->size;
}
