
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_8__ {int* coeff_index_to_pos; int * coeff_index_to_idct_selector; } ;
typedef TYPE_2__ VP56Model ;
struct TYPE_9__ {size_t* idct_scantable; int dequant_ac; int** block_coeff; int * idct_selector; TYPE_4__*** ract_vlc; int gb; void*** nb_null; TYPE_1__* runv_vlc; TYPE_4__* dccv_vlc; TYPE_2__* modelp; } ;
typedef TYPE_3__ VP56Context ;
struct TYPE_10__ {int table; } ;
typedef TYPE_4__ VLC ;
struct TYPE_7__ {int table; } ;


 int VAR_0 ;
 size_t FUNC_0 (int,int) ;
 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int* VAR_3 ;
 void* FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(VP56Context *VAR_4)
{
    VP56Model *VAR_5 = VAR_4->modelp;
    uint8_t *VAR_6 = VAR_4->idct_scantable;
    VLC *VAR_7;
    int VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13;
    int VAR_14 = 0;

    for (VAR_11=0; VAR_11<6; VAR_11++) {
        int VAR_15 = 0;
        if (VAR_11 > 3) VAR_14 = 1;
        VAR_7 = &VAR_4->dccv_vlc[VAR_14];

        for (VAR_10 = 0;;) {
            int VAR_16 = 1;
            if (VAR_10<2 && VAR_4->nb_null[VAR_10][VAR_14]) {
                VAR_4->nb_null[VAR_10][VAR_14]--;
                if (VAR_10)
                    break;
            } else {
                if (FUNC_3(&VAR_4->gb) <= 0)
                    return VAR_0;
                VAR_8 = FUNC_4(&VAR_4->gb, VAR_7->table, VAR_1, 3);
                if (VAR_8 == 0) {
                    if (VAR_10) {
                        int VAR_17 = (VAR_10 >= 6);
                        VAR_16 += FUNC_4(&VAR_4->gb, VAR_4->runv_vlc[VAR_17].table, VAR_1, 3);
                        if (VAR_16 >= 9)
                            VAR_16 += FUNC_1(&VAR_4->gb, 6);
                    } else
                        VAR_4->nb_null[0][VAR_14] = FUNC_5(VAR_4);
                    VAR_15 = 0;
                } else if (VAR_8 == 11) {
                    if (VAR_10 == 1)
                        VAR_4->nb_null[1][VAR_14] = FUNC_5(VAR_4);
                    break;
                } else {
                    int VAR_18 = VAR_2[VAR_8];
                    if (VAR_8 > 4)
                        VAR_18 += FUNC_1(&VAR_4->gb, VAR_8 <= 9 ? VAR_8 - 4 : 11);
                    VAR_15 = 1 + (VAR_18 > 1);
                    VAR_9 = FUNC_2(&VAR_4->gb);
                    VAR_18 = (VAR_18 ^ -VAR_9) + VAR_9;
                    if (VAR_10)
                        VAR_18 *= VAR_4->dequant_ac;
                    VAR_13 = VAR_5->coeff_index_to_pos[VAR_10];
                    VAR_4->block_coeff[VAR_11][VAR_6[VAR_13]] = VAR_18;
                }
            }
            VAR_10+=VAR_16;
            if (VAR_10 >= 64)
                break;
            VAR_12 = FUNC_0(VAR_3[VAR_10], 3);
            VAR_7 = &VAR_4->ract_vlc[VAR_14][VAR_15][VAR_12];
        }
        VAR_4->idct_selector[VAR_11] = VAR_5->coeff_index_to_idct_selector[FUNC_0(VAR_10, 63)];
    }
    return 0;
}
