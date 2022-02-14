
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int PutBitContext ;


 size_t* VAR_0 ;
 int FUNC_0 (int *,int,int) ;

void FUNC_1(PutBitContext *VAR_1, uint16_t *VAR_2)
{
    int VAR_3;

    if (VAR_2) {
        FUNC_0(VAR_1, 1, 1);
        for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {
            FUNC_0(VAR_1, 8, VAR_2[VAR_0[VAR_3]]);
        }
    } else
        FUNC_0(VAR_1, 1, 0);
}
