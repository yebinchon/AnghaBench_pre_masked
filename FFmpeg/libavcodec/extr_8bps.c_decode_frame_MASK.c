
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned char uint8_t ;
struct TYPE_14__ {unsigned int height; scalar_t__ pix_fmt; int bits_per_coded_sample; TYPE_1__* priv_data; } ;
struct TYPE_13__ {unsigned char** data; unsigned int* linesize; int palette_has_changed; } ;
struct TYPE_12__ {unsigned char* data; int size; } ;
struct TYPE_11__ {unsigned int planes; unsigned char* planemap; unsigned char* pal; } ;
typedef TYPE_1__ EightBpsContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned short const) ;
 int FUNC_1 (TYPE_4__*,int ,char*,int) ;
 unsigned char* FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_5, void *VAR_6,
                        int *VAR_7, AVPacket *VAR_8)
{
    AVFrame *VAR_9 = VAR_6;
    const uint8_t *VAR_10 = VAR_8->data;
    int VAR_11 = VAR_8->size;
    EightBpsContext * const VAR_12 = VAR_5->priv_data;
    const unsigned char *VAR_13 = VAR_10;
    unsigned char *VAR_14, *VAR_15;
    unsigned int VAR_16 = VAR_5->height;
    unsigned int VAR_17, VAR_18, VAR_19;
    const unsigned char *VAR_20, *VAR_21, *VAR_22;
    unsigned char VAR_23;
    unsigned int VAR_24;
    unsigned int VAR_25 = VAR_12->planes;
    unsigned char *VAR_26 = VAR_12->planemap;
    int VAR_27;

    if ((VAR_27 = FUNC_3(VAR_5, VAR_9, 0)) < 0)
        return VAR_27;

    VAR_22 = VAR_13 + VAR_11;


    VAR_21 = VAR_13 + VAR_25 * (VAR_16 << 1);

    VAR_24 = VAR_25 + (VAR_5->pix_fmt == VAR_3);

    for (VAR_18 = 0; VAR_18 < VAR_25; VAR_18++) {

        VAR_20 = VAR_13 + VAR_18 * (VAR_16 << 1);


        for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
            VAR_14 = VAR_9->data[0] + VAR_19 * VAR_9->linesize[0] + VAR_26[VAR_18];
            VAR_15 = VAR_14 + VAR_9->linesize[0];
            if (VAR_22 - VAR_20 < VAR_19 * 2 + 2)
                return VAR_0;
            VAR_17 = FUNC_0(*(const unsigned short *)(VAR_20 + VAR_19 * 2));

            while (VAR_17 > 0) {
                if (VAR_22 - VAR_21 <= 1)
                    return VAR_0;
                if ((VAR_23 = *VAR_21++) <= 127) {
                    VAR_23++;
                    VAR_17 -= VAR_23 + 1;
                    if (VAR_15 - VAR_14 < VAR_23 * VAR_24)
                        break;
                    if (VAR_22 - VAR_21 < VAR_23)
                        return VAR_0;
                    while (VAR_23--) {
                        *VAR_14 = *VAR_21++;
                        VAR_14 += VAR_24;
                    }
                } else {
                    VAR_23 = 257 - VAR_23;
                    if (VAR_15 - VAR_14 < VAR_23 * VAR_24)
                        break;
                    while (VAR_23--) {
                        *VAR_14 = *VAR_21;
                        VAR_14 += VAR_24;
                    }
                    VAR_21++;
                    VAR_17 -= 2;
                }
            }
        }
    }

    if (VAR_5->bits_per_coded_sample <= 8) {
        int VAR_28;
        const uint8_t *VAR_29 = FUNC_2(VAR_8,
                                                     VAR_4,
                                                     &VAR_28);
        if (VAR_29 && VAR_28 == VAR_1) {
            VAR_9->palette_has_changed = 1;
            FUNC_4(VAR_12->pal, VAR_29, VAR_1);
        } else if (VAR_29) {
            FUNC_1(VAR_5, VAR_2, "Palette size %d is wrong\n", VAR_28);
        }

        FUNC_4 (VAR_9->data[1], VAR_12->pal, VAR_1);
    }

    *VAR_7 = 1;


    return VAR_11;
}
