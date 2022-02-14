
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int def_prob ;
typedef int VP56RangeCoder ;
struct TYPE_8__ {int** coeff_dccv; int** coeff_runv; int**** coeff_ract; int *** coeff_dcct; int * coeff_reorder; } ;
typedef TYPE_2__ VP56Model ;
struct TYPE_9__ {int* nb_null; int *** ract_vlc; int * runv_vlc; int * dccv_vlc; scalar_t__ use_huffman; TYPE_1__** frames; TYPE_2__* modelp; int c; } ;
typedef TYPE_3__ VP56Context ;
struct TYPE_7__ {scalar_t__ key_frame; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int*,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int*,int ,int,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int * VAR_1 ;
 int*** VAR_2 ;
 int ** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int **** VAR_6 ;
 int ** VAR_7 ;

__attribute__((used)) static int FUNC_8(VP56Context *VAR_8)
{
    VP56RangeCoder *VAR_9 = &VAR_8->c;
    VP56Model *VAR_10 = VAR_8->modelp;
    int VAR_11[11];
    int VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16;
    int VAR_17;

    FUNC_1(VAR_11, 0x80, sizeof(VAR_11));

    for (VAR_17=0; VAR_17<2; VAR_17++)
        for (VAR_12=0; VAR_12<11; VAR_12++)
            if (FUNC_3(VAR_9, VAR_3[VAR_17][VAR_12])) {
                VAR_11[VAR_12] = FUNC_5(VAR_9, 7);
                VAR_10->coeff_dccv[VAR_17][VAR_12] = VAR_11[VAR_12];
            } else if (VAR_8->frames[VAR_0]->key_frame) {
                VAR_10->coeff_dccv[VAR_17][VAR_12] = VAR_11[VAR_12];
            }

    if (FUNC_2(VAR_9)) {
        for (VAR_15=1; VAR_15<64; VAR_15++)
            if (FUNC_3(VAR_9, VAR_1[VAR_15]))
                VAR_10->coeff_reorder[VAR_15] = FUNC_4(VAR_9, 4);
        FUNC_7(VAR_8);
    }

    for (VAR_13=0; VAR_13<2; VAR_13++)
        for (VAR_12=0; VAR_12<14; VAR_12++)
            if (FUNC_3(VAR_9, VAR_7[VAR_13][VAR_12]))
                VAR_10->coeff_runv[VAR_13][VAR_12] = FUNC_5(VAR_9, 7);

    for (VAR_16=0; VAR_16<3; VAR_16++)
        for (VAR_17=0; VAR_17<2; VAR_17++)
            for (VAR_13=0; VAR_13<6; VAR_13++)
                for (VAR_12=0; VAR_12<11; VAR_12++)
                    if (FUNC_3(VAR_9, VAR_6[VAR_16][VAR_17][VAR_13][VAR_12])) {
                        VAR_11[VAR_12] = FUNC_5(VAR_9, 7);
                        VAR_10->coeff_ract[VAR_17][VAR_16][VAR_13][VAR_12] = VAR_11[VAR_12];
                    } else if (VAR_8->frames[VAR_0]->key_frame) {
                        VAR_10->coeff_ract[VAR_17][VAR_16][VAR_13][VAR_12] = VAR_11[VAR_12];
                    }

    if (VAR_8->use_huffman) {
        for (VAR_17=0; VAR_17<2; VAR_17++) {
            if (FUNC_6(VAR_8, VAR_10->coeff_dccv[VAR_17],
                                    VAR_4, 12, &VAR_8->dccv_vlc[VAR_17]))
                return -1;
            if (FUNC_6(VAR_8, VAR_10->coeff_runv[VAR_17],
                                    VAR_5, 9, &VAR_8->runv_vlc[VAR_17]))
                return -1;
            for (VAR_16=0; VAR_16<3; VAR_16++)
                for (VAR_13 = 0; VAR_13 < 6; VAR_13++)
                    if (FUNC_6(VAR_8, VAR_10->coeff_ract[VAR_17][VAR_16][VAR_13],
                                            VAR_4, 12,
                                            &VAR_8->ract_vlc[VAR_17][VAR_16][VAR_13]))
                        return -1;
        }
        FUNC_1(VAR_8->nb_null, 0, sizeof(VAR_8->nb_null));
    } else {

    for (VAR_17=0; VAR_17<2; VAR_17++)
        for (VAR_14=0; VAR_14<3; VAR_14++)
            for (VAR_12=0; VAR_12<5; VAR_12++)
                VAR_10->coeff_dcct[VAR_17][VAR_14][VAR_12] = FUNC_0(((VAR_10->coeff_dccv[VAR_17][VAR_12] * VAR_2[VAR_14][VAR_12][0] + 128) >> 8) + VAR_2[VAR_14][VAR_12][1], 1, 255);
    }
    return 0;
}
