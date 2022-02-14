
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int dwtcoef ;
struct TYPE_7__ {int prefix_bytes; int wavelet_depth; int** qmagic_lut; int num_x; int num_y; int size_scaler; TYPE_1__* plane; scalar_t__** quant; } ;
typedef TYPE_2__ VC2EncContext ;
struct TYPE_9__ {int* cache; int x; int y; TYPE_2__* ctx; } ;
struct TYPE_8__ {int width; int height; int const stride; int * buf; } ;
struct TYPE_6__ {TYPE_3__** band; } ;
typedef TYPE_3__ SubBand ;
typedef TYPE_4__ SliceArgs ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int const,int const,int const) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_6(SliceArgs *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    uint8_t VAR_6[VAR_0][4];
    int VAR_7 = 0, VAR_8, VAR_9, VAR_10;
    VC2EncContext *VAR_11 = VAR_2->ctx;

    if (VAR_2->cache[VAR_3])
        return VAR_2->cache[VAR_3];

    VAR_7 += 8*VAR_11->prefix_bytes;
    VAR_7 += 8;

    for (VAR_9 = 0; VAR_9 < VAR_11->wavelet_depth; VAR_9++)
        for (VAR_10 = !!VAR_9; VAR_10 < 4; VAR_10++)
            VAR_6[VAR_9][VAR_10] = FUNC_2(VAR_3 - VAR_11->quant[VAR_9][VAR_10], 0);

    for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
        int VAR_12, VAR_13, VAR_14, VAR_15;
        VAR_12 = VAR_7 >> 3;
        VAR_7 += 8;
        for (VAR_9 = 0; VAR_9 < VAR_11->wavelet_depth; VAR_9++) {
            for (VAR_10 = !!VAR_9; VAR_10 < 4; VAR_10++) {
                SubBand *VAR_16 = &VAR_11->plane[VAR_8].band[VAR_9][VAR_10];

                const int VAR_17 = VAR_6[VAR_9][VAR_10];
                const uint64_t VAR_18 = ((uint64_t)VAR_11->qmagic_lut[VAR_17][0]) << 2;
                const uint64_t VAR_19 = VAR_11->qmagic_lut[VAR_17][1];
                const int VAR_20 = FUNC_4(VAR_1[VAR_17]) + 32;

                const int VAR_21 = VAR_16->width * VAR_2->x / VAR_11->num_x;
                const int VAR_22 = VAR_16->width *(VAR_2->x+1) / VAR_11->num_x;
                const int VAR_23 = VAR_16->height * VAR_2->y / VAR_11->num_y;
                const int VAR_24 = VAR_16->height *(VAR_2->y+1) / VAR_11->num_y;

                dwtcoef *VAR_25 = VAR_16->buf + VAR_23 * VAR_16->stride;

                for (VAR_5 = VAR_23; VAR_5 < VAR_24; VAR_5++) {
                    for (VAR_4 = VAR_21; VAR_4 < VAR_22; VAR_4++) {
                        uint32_t VAR_26 = FUNC_3(FUNC_0(VAR_25[VAR_4]), VAR_18, VAR_19, VAR_20);
                        VAR_7 += FUNC_5(VAR_26);
                        VAR_7 += !!VAR_26;
                    }
                    VAR_25 += VAR_16->stride;
                }
            }
        }
        VAR_7 += FUNC_1(VAR_7, 8) - VAR_7;
        VAR_13 = (VAR_7 >> 3) - VAR_12 - 1;
        VAR_14 = FUNC_1(VAR_13, VAR_11->size_scaler)/VAR_11->size_scaler;
        VAR_15 = (VAR_14*VAR_11->size_scaler) - VAR_13;
        VAR_7 += VAR_15*8;
    }

    VAR_2->cache[VAR_3] = VAR_7;

    return VAR_7;
}
