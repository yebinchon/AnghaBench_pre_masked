
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int** lar; size_t lar_idx; int msr; int * ref_buf; } ;
typedef int GetBitContext ;
typedef TYPE_1__ GSMContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int ** VAR_0 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_1, int16_t *VAR_2,
                            GetBitContext *VAR_3, int VAR_4)
{
    GSMContext *VAR_5 = VAR_1->priv_data;
    int VAR_6;
    int16_t *VAR_7 = VAR_5->ref_buf + 120;
    int *VAR_8 = VAR_5->lar[VAR_5->lar_idx];
    VAR_8[0] = FUNC_2(FUNC_3(VAR_3, 6), 13107, 1 << 15);
    VAR_8[1] = FUNC_2(FUNC_3(VAR_3, 6), 13107, 1 << 15);
    VAR_8[2] = FUNC_2(FUNC_3(VAR_3, 5), 13107, (1 << 14) + 2048*2);
    VAR_8[3] = FUNC_2(FUNC_3(VAR_3, 5), 13107, (1 << 14) - 2560*2);
    VAR_8[4] = FUNC_2(FUNC_3(VAR_3, 4), 19223, (1 << 13) + 94*2);
    VAR_8[5] = FUNC_2(FUNC_3(VAR_3, 4), 17476, (1 << 13) - 1792*2);
    VAR_8[6] = FUNC_2(FUNC_3(VAR_3, 3), 31454, (1 << 12) - 341*2);
    VAR_8[7] = FUNC_2(FUNC_3(VAR_3, 3), 29708, (1 << 12) - 1144*2);

    for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
        int VAR_9 = FUNC_3(VAR_3, 7);
        int VAR_10 = FUNC_3(VAR_3, 2);
        int VAR_11 = FUNC_3(VAR_3, 2);
        VAR_9 = FUNC_1(VAR_9, 40, 120);
        FUNC_4(VAR_7, VAR_9, VAR_10);
        FUNC_0(VAR_3, VAR_7 + VAR_11, VAR_0[VAR_4][VAR_6]);
        VAR_7 += 40;
    }
    FUNC_5(VAR_5->ref_buf, VAR_5->ref_buf + 160, 120 * sizeof(*VAR_5->ref_buf));
    FUNC_7(VAR_5, VAR_2, VAR_5->ref_buf + 120);


    VAR_5->msr = FUNC_6(VAR_2, VAR_5->msr);
    return 0;
}
