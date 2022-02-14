
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_8__ {int* permutated; } ;
struct TYPE_10__ {int* block_last_index; int h263_flv; int pb; TYPE_1__ intra_scantable; scalar_t__ mb_intra; scalar_t__ alt_inter_vlc; scalar_t__ h263_aic; } ;
struct TYPE_9__ {int** table_vlc; int n; } ;
typedef TYPE_2__ RLTable ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,int,int) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (TYPE_2__*,int,int,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void FUNC_5(MpegEncContext * VAR_4, int16_t * VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    RLTable *VAR_17;

    VAR_17 = &VAR_1;
    if (VAR_4->mb_intra && !VAR_4->h263_aic) {

        VAR_7 = VAR_5[0];

        if (VAR_7 > 254) {
            VAR_7 = 254;
            VAR_5[0] = 254;
        }

        else if (VAR_7 < 1) {
            VAR_7 = 1;
            VAR_5[0] = 1;
        }
        if (VAR_7 == 128)
            FUNC_3(&VAR_4->pb, 8, 0xff);
        else
            FUNC_3(&VAR_4->pb, 8, VAR_7);
        VAR_10 = 1;
    } else {
        VAR_10 = 0;
        if (VAR_4->h263_aic && VAR_4->mb_intra)
            VAR_17 = &VAR_2;

        if(VAR_4->alt_inter_vlc && !VAR_4->mb_intra){
            int VAR_18=0;
            int VAR_19=0;
            int VAR_20=-1;
            int VAR_21;

            VAR_12 = VAR_4->block_last_index[VAR_6];
            VAR_13 = VAR_10 - 1;
            for (; VAR_10 <= VAR_12; VAR_10++) {
                VAR_11 = VAR_4->intra_scantable.permutated[VAR_10];
                VAR_7 = VAR_5[VAR_11];
                if (VAR_7) {
                    VAR_8 = VAR_10 - VAR_13 - 1;
                    VAR_9 = (VAR_10 == VAR_12);

                    if(VAR_7<0) VAR_7= -VAR_7;

                    VAR_16 = FUNC_2(VAR_17, VAR_9, VAR_8, VAR_7);
                    VAR_21 = FUNC_2(&VAR_2, VAR_9, VAR_8, VAR_7);
                    VAR_19 += VAR_17->table_vlc[VAR_16][1]+1;
                    VAR_18 += VAR_2.table_vlc[VAR_21][1]+1;

                    if (VAR_16 == VAR_17->n) {
                        VAR_19 += 1+6+8-1;
                    }
                    if (VAR_21 == VAR_2.n) {
                        VAR_18 += 1+6+8-1;
                        VAR_20 += VAR_8 + 1;
                    }else
                        VAR_20 += VAR_3[VAR_21];
                    VAR_13 = VAR_10;
                }
            }
            VAR_10 = 0;
            if(VAR_18 < VAR_19 && VAR_20 > 63)
                VAR_17 = &VAR_2;
        }
    }


    VAR_12 = VAR_4->block_last_index[VAR_6];
    VAR_13 = VAR_10 - 1;
    for (; VAR_10 <= VAR_12; VAR_10++) {
        VAR_11 = VAR_4->intra_scantable.permutated[VAR_10];
        VAR_7 = VAR_5[VAR_11];
        if (VAR_7) {
            VAR_8 = VAR_10 - VAR_13 - 1;
            VAR_9 = (VAR_10 == VAR_12);
            VAR_14 = 0;
            VAR_15 = VAR_7;
            if (VAR_7 < 0) {
                VAR_14 = 1;
                VAR_7 = -VAR_7;
            }
            VAR_16 = FUNC_2(VAR_17, VAR_9, VAR_8, VAR_7);
            FUNC_3(&VAR_4->pb, VAR_17->table_vlc[VAR_16][1], VAR_17->table_vlc[VAR_16][0]);
            if (VAR_16 == VAR_17->n) {
              if(!VAR_0 || VAR_4->h263_flv <= 1){
                FUNC_3(&VAR_4->pb, 1, VAR_9);
                FUNC_3(&VAR_4->pb, 6, VAR_8);

                FUNC_0(VAR_15 != 0);

                if(VAR_7 < 128)
                    FUNC_4(&VAR_4->pb, 8, VAR_15);
                else{
                    FUNC_3(&VAR_4->pb, 8, 128);
                    FUNC_4(&VAR_4->pb, 5, VAR_15);
                    FUNC_4(&VAR_4->pb, 6, VAR_15>>5);
                }
              }else{
                    FUNC_1(&VAR_4->pb, VAR_15, VAR_7, VAR_8, VAR_9);
              }
            } else {
                FUNC_3(&VAR_4->pb, 1, VAR_14);
            }
            VAR_13 = VAR_10;
        }
    }
}
