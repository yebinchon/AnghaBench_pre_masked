
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int palette_has_changed; int** data; int * linesize; } ;
struct TYPE_15__ {int width; int bits_per_coded_sample; int height; int pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int* data; int size; } ;
struct TYPE_13__ {int* pal; TYPE_7__* frame; int gb; } ;
typedef TYPE_1__ MsrleContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (void*,TYPE_7__*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_3__*,int ,char*,int) ;
 int* FUNC_4 (TYPE_2__*,int ,int*) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_7__*,int,int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_7__*,int ) ;
 int FUNC_8 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_4,
                              void *VAR_5, int *VAR_6,
                              AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    int VAR_9 = VAR_7->size;
    MsrleContext *VAR_10 = VAR_4->priv_data;
    int VAR_11 = FUNC_0(VAR_4->width*VAR_4->bits_per_coded_sample, 32) / 8;
    int VAR_12;

    if (VAR_9 < 2)
        return VAR_0;

    if ((VAR_12 = FUNC_7(VAR_4, VAR_10->frame, 0)) < 0)
        return VAR_12;

    if (VAR_4->bits_per_coded_sample > 1 && VAR_4->bits_per_coded_sample <= 8) {
        int VAR_13;
        const uint8_t *VAR_14 = FUNC_4(VAR_7, VAR_3, &VAR_13);

        if (VAR_14 && VAR_13 == VAR_1) {
            VAR_10->frame->palette_has_changed = 1;
            FUNC_8(VAR_10->pal, VAR_14, VAR_1);
        } else if (VAR_14) {
            FUNC_3(VAR_4, VAR_2, "Palette size %d is wrong\n", VAR_13);
        }

        FUNC_8(VAR_10->frame->data[1], VAR_10->pal, VAR_1);
    }


    if (VAR_4->height * VAR_11 == VAR_7->size) {
        int VAR_15 = FUNC_2(VAR_4->pix_fmt, VAR_4->width, 0);
        uint8_t *VAR_16 = VAR_10->frame->data[0];
        uint8_t *VAR_17 = VAR_7->data + (VAR_4->height-1)*VAR_11;
        int VAR_18, VAR_19;

        if (VAR_15 < 0)
            return VAR_15;

        for (VAR_18 = 0; VAR_18 < VAR_4->height; VAR_18++) {
            if (VAR_4->bits_per_coded_sample == 4) {
                for (VAR_19 = 0; VAR_19 < VAR_4->width - 1; VAR_19 += 2) {
                    VAR_16[VAR_19+0] = VAR_17[VAR_19>>1] >> 4;
                    VAR_16[VAR_19+1] = VAR_17[VAR_19>>1] & 0xF;
                }
                if (VAR_4->width & 1)
                    VAR_16[VAR_19+0] = VAR_17[VAR_19>>1] >> 4;
            } else {
                FUNC_8(VAR_16, VAR_17, VAR_15);
            }
            VAR_17 -= VAR_11;
            VAR_16 += VAR_10->frame->linesize[0];
        }
    } else {
        FUNC_5(&VAR_10->gb, VAR_8, VAR_9);
        FUNC_6(VAR_4, VAR_10->frame, VAR_4->bits_per_coded_sample, &VAR_10->gb);
    }

    if ((VAR_12 = FUNC_1(VAR_5, VAR_10->frame)) < 0)
        return VAR_12;

    *VAR_6 = 1;


    return VAR_9;
}
