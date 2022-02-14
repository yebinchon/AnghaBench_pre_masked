
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int8_t ;
struct TYPE_9__ {int nb_channels; TYPE_1__* channels; } ;
struct TYPE_8__ {int xsize; int ysize; int channel_line_size; int* uncompressed_data; } ;
struct TYPE_7__ {scalar_t__ pixel_type; } ;
typedef TYPE_2__ EXRThreadData ;
typedef TYPE_3__ EXRContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int const*,int*) ;
 int FUNC_4 (int const*,int*) ;

__attribute__((used)) static int FUNC_5(EXRContext *VAR_3, const uint8_t *VAR_4, int VAR_5,
                          int VAR_6, EXRThreadData *VAR_7) {
    const int8_t *VAR_8 = VAR_4;
    int VAR_9 = VAR_5;
    int VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    uint16_t VAR_16[16];
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    int VAR_22 = 0;


    VAR_10 = VAR_7->xsize / 4;
    if ((VAR_7->xsize % 4) != 0)
        VAR_10++;

    VAR_11 = VAR_7->ysize / 4;
    if ((VAR_7->ysize % 4) != 0)
        VAR_11++;

    for (VAR_17 = 0; VAR_17 < VAR_3->nb_channels; VAR_17++) {
        if (VAR_3->channels[VAR_17].pixel_type == VAR_2) {
            for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
                for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
                    if (VAR_9 < 3) {
                        FUNC_1(VAR_3, VAR_1, "Not enough data for B44A block: %d", VAR_9);
                        return VAR_0;
                    }

                    if (VAR_4[VAR_5 - VAR_9 + 2] == 0xfc) {
                        FUNC_4(VAR_8, VAR_16);
                        VAR_8 += 3;
                        VAR_9 -= 3;
                    } else {
                        if (VAR_9 < 14) {
                            FUNC_1(VAR_3, VAR_1, "Not enough data for B44 block: %d", VAR_9);
                            return VAR_0;
                        }
                        FUNC_3(VAR_8, VAR_16);
                        VAR_8 += 14;
                        VAR_9 -= 14;
                    }


                    VAR_12 = VAR_19 * 4;
                    VAR_13 = VAR_18 * 4;

                    for (VAR_20 = VAR_13; VAR_20 < FUNC_0(VAR_13 + 4, VAR_7->ysize); VAR_20++) {
                        for (VAR_21 = VAR_12; VAR_21 < FUNC_0(VAR_12 + 4, VAR_7->xsize); VAR_21++) {
                            VAR_14 = VAR_22 * VAR_7->xsize + VAR_20 * VAR_7->channel_line_size + 2 * VAR_21;
                            VAR_15 = (VAR_20-VAR_13) * 4 + (VAR_21-VAR_12);
                            VAR_7->uncompressed_data[VAR_14] = VAR_16[VAR_15] & 0xff;
                            VAR_7->uncompressed_data[VAR_14 + 1] = VAR_16[VAR_15] >> 8;
                        }
                    }
                }
            }
            VAR_22 += 2;
        } else {
            if (VAR_9 < VAR_7->ysize * VAR_7->xsize * 4) {
                FUNC_1(VAR_3, VAR_1, "Not enough data for uncompress channel: %d", VAR_9);
                return VAR_0;
            }

            for (VAR_20 = 0; VAR_20 < VAR_7->ysize; VAR_20++) {
                VAR_14 = VAR_22 * VAR_7->xsize + VAR_20 * VAR_7->channel_line_size;
                FUNC_2(&VAR_7->uncompressed_data[VAR_14], VAR_8, VAR_7->xsize * 4);
                VAR_8 += VAR_7->xsize * 4;
            }
            VAR_22 += 4;

            VAR_9 -= VAR_7->ysize * VAR_7->xsize * 4;
        }
    }

    return 0;
}
