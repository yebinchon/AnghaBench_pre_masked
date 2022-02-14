
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int16_t ;
struct TYPE_10__ {size_t* permutated; } ;
struct TYPE_9__ {size_t* permutated; } ;
struct TYPE_12__ {int mb_intra; size_t rl_table_index; int rl_chroma_table_index; int msmpeg4_version; int* block_last_index; int esc3_level_length; int esc3_run_length; int qscale; int pb; int ***** ac_stats; TYPE_2__ inter_scantable; TYPE_1__ intra_scantable; } ;
struct TYPE_11__ {int** table_vlc; int n; int** max_level; int** max_run; } ;
typedef TYPE_3__ RLTable ;
typedef TYPE_4__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (TYPE_3__ const*,int,int,int) ;
 int FUNC_1 (TYPE_4__*,int,int,int*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int) ;

void FUNC_4(MpegEncContext * VAR_3, int16_t * VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16, VAR_17;
    const RLTable *VAR_18;
    const uint8_t *VAR_19;

    if (VAR_3->mb_intra) {
        FUNC_1(VAR_3, VAR_4[0], VAR_5, &VAR_17);
        VAR_9 = 1;
        if (VAR_5 < 4) {
            VAR_18 = &VAR_2[VAR_3->rl_table_index];
        } else {
            VAR_18 = &VAR_2[3 + VAR_3->rl_chroma_table_index];
        }
        VAR_16 = VAR_3->msmpeg4_version>=4;
        VAR_19= VAR_3->intra_scantable.permutated;
    } else {
        VAR_9 = 0;
        VAR_18 = &VAR_2[3 + VAR_3->rl_table_index];
        if(VAR_3->msmpeg4_version<=2)
            VAR_16 = 0;
        else
            VAR_16 = 1;
        VAR_19= VAR_3->inter_scantable.permutated;
    }


    if(VAR_3->msmpeg4_version>=4 && VAR_3->msmpeg4_version<6 && VAR_3->block_last_index[VAR_5]>0){
        for(VAR_11=63; VAR_11>=0; VAR_11--){
            if(VAR_4[VAR_19[VAR_11]]) break;
        }
        VAR_3->block_last_index[VAR_5]= VAR_11;
    }else
        VAR_11 = VAR_3->block_last_index[VAR_5];

    VAR_12 = VAR_9 - 1;
    for (; VAR_9 <= VAR_11; VAR_9++) {
        VAR_10 = VAR_19[VAR_9];
        VAR_6 = VAR_4[VAR_10];
        if (VAR_6) {
            VAR_7 = VAR_9 - VAR_12 - 1;
            VAR_8 = (VAR_9 == VAR_11);
            VAR_13 = 0;
            VAR_14 = VAR_6;
            if (VAR_6 < 0) {
                VAR_13 = 1;
                VAR_6 = -VAR_6;
            }

            if(VAR_6<=VAR_0 && VAR_7<=VAR_1){
                VAR_3->ac_stats[VAR_3->mb_intra][VAR_5>3][VAR_6][VAR_7][VAR_8]++;
            }

            VAR_3->ac_stats[VAR_3->mb_intra][VAR_5 > 3][40][63][0]++;

            VAR_15 = FUNC_0(VAR_18, VAR_8, VAR_7, VAR_6);
            FUNC_2(&VAR_3->pb, VAR_18->table_vlc[VAR_15][1], VAR_18->table_vlc[VAR_15][0]);
            if (VAR_15 == VAR_18->n) {
                int VAR_20, VAR_21;

                VAR_20 = VAR_6 - VAR_18->max_level[VAR_8][VAR_7];
                if (VAR_20 < 1)
                    goto esc2;
                VAR_15 = FUNC_0(VAR_18, VAR_8, VAR_7, VAR_20);
                if (VAR_15 == VAR_18->n) {
                esc2:
                    FUNC_2(&VAR_3->pb, 1, 0);
                    if (VAR_6 > VAR_0)
                        goto esc3;
                    VAR_21 = VAR_7 - VAR_18->max_run[VAR_8][VAR_6] - VAR_16;
                    if (VAR_21 < 0)
                        goto esc3;
                    VAR_15 = FUNC_0(VAR_18, VAR_8, VAR_21+1, VAR_6);
                    if (VAR_3->msmpeg4_version == 4 && VAR_15 == VAR_18->n)
                        goto esc3;
                    VAR_15 = FUNC_0(VAR_18, VAR_8, VAR_21, VAR_6);
                    if (VAR_15 == VAR_18->n) {
                    esc3:

                        FUNC_2(&VAR_3->pb, 1, 0);
                        FUNC_2(&VAR_3->pb, 1, VAR_8);
                        if(VAR_3->msmpeg4_version>=4){
                            if(VAR_3->esc3_level_length==0){
                                VAR_3->esc3_level_length=8;
                                VAR_3->esc3_run_length= 6;

                                if(VAR_3->qscale<8)
                                    FUNC_2(&VAR_3->pb, 6 + (VAR_3->msmpeg4_version>=6), 3);
                                else
                                    FUNC_2(&VAR_3->pb, 8, 3);
                            }
                            FUNC_2(&VAR_3->pb, VAR_3->esc3_run_length, VAR_7);
                            FUNC_2(&VAR_3->pb, 1, VAR_13);
                            FUNC_2(&VAR_3->pb, VAR_3->esc3_level_length, VAR_6);
                        }else{
                            FUNC_2(&VAR_3->pb, 6, VAR_7);
                            FUNC_3(&VAR_3->pb, 8, VAR_14);
                        }
                    } else {

                        FUNC_2(&VAR_3->pb, 1, 1);
                        FUNC_2(&VAR_3->pb, VAR_18->table_vlc[VAR_15][1], VAR_18->table_vlc[VAR_15][0]);
                        FUNC_2(&VAR_3->pb, 1, VAR_13);
                    }
                } else {

                    FUNC_2(&VAR_3->pb, 1, 1);
                    FUNC_2(&VAR_3->pb, VAR_18->table_vlc[VAR_15][1], VAR_18->table_vlc[VAR_15][0]);
                    FUNC_2(&VAR_3->pb, 1, VAR_13);
                }
            } else {
                FUNC_2(&VAR_3->pb, 1, VAR_13);
            }
            VAR_12 = VAR_9;
        }
    }
}
