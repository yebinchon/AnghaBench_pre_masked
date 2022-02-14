
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_10__ {int** table_vlc; } ;
struct TYPE_9__ {int** table_vlc; } ;
struct TYPE_7__ {int* permutated; } ;
struct TYPE_8__ {int* block_last_index; int* last_dc; scalar_t__ codec_id; int pb; TYPE_1__ intra_scantable; scalar_t__ intra_vlc_format; scalar_t__ mb_intra; } ;
typedef TYPE_2__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int** VAR_3 ;
 int** VAR_4 ;
 int FUNC_3 (int *,int const,int const) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void FUNC_5(MpegEncContext *VAR_5, int16_t *VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18, VAR_19;
    const uint16_t (*VAR_20)[2] = VAR_1;

    VAR_16 = VAR_5->block_last_index[VAR_7];


    if (VAR_5->mb_intra) {
        VAR_19 = (VAR_7 <= 3 ? 0 : (VAR_7 & 1) + 1);
        VAR_11 = VAR_6[0];
        VAR_12 = VAR_11 - VAR_5->last_dc[VAR_19];
        FUNC_2(VAR_5, VAR_12, VAR_19);
        VAR_5->last_dc[VAR_19] = VAR_11;
        VAR_13 = 1;
        if (VAR_5->intra_vlc_format)
            VAR_20 = VAR_2;
    } else {


        VAR_9 = VAR_6[0];
        if (FUNC_1(VAR_9) == 1) {
            VAR_18 = ((uint32_t)VAR_9 >> 31);
            FUNC_3(&VAR_5->pb, 2, VAR_18 | 0x02);
            VAR_13 = 1;
        } else {
            VAR_13 = 0;
            VAR_10 = -1;
            goto next_coef;
        }
    }


    VAR_10 = VAR_13 - 1;

    for (; VAR_13 <= VAR_16; VAR_13++) {
        VAR_14 = VAR_5->intra_scantable.permutated[VAR_13];
        VAR_9 = VAR_6[VAR_14];

next_coef:

        if (VAR_9 != 0) {
            VAR_15 = VAR_13 - VAR_10 - 1;

            VAR_8 = VAR_9;
            FUNC_0(VAR_17, VAR_8);
            VAR_17 &= 1;

            if (VAR_8 <= VAR_4[0][VAR_15]) {
                VAR_18 = VAR_3[0][VAR_15] + VAR_8 - 1;

                FUNC_3(&VAR_5->pb, VAR_20[VAR_18][1] + 1,
                         (VAR_20[VAR_18][0] << 1) + VAR_17);
            } else {

                FUNC_3(&VAR_5->pb, VAR_20[111][1], VAR_20[111][0]);

                FUNC_3(&VAR_5->pb, 6, VAR_15);
                if (VAR_5->codec_id == VAR_0) {
                    if (VAR_8 < 128) {
                        FUNC_4(&VAR_5->pb, 8, VAR_9);
                    } else {
                        if (VAR_9 < 0)
                            FUNC_3(&VAR_5->pb, 16, 0x8001 + VAR_9 + 255);
                        else
                            FUNC_4(&VAR_5->pb, 16, VAR_9);
                    }
                } else {
                    FUNC_4(&VAR_5->pb, 12, VAR_9);
                }
            }
            VAR_10 = VAR_13;
        }
    }

    FUNC_3(&VAR_5->pb, VAR_20[112][1], VAR_20[112][0]);
}
