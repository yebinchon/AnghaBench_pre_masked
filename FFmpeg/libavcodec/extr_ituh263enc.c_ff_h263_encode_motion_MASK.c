
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int** VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(PutBitContext *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    if (VAR_2 == 0) {

        VAR_7 = 0;
        FUNC_0(VAR_1, VAR_0[VAR_7][1], VAR_0[VAR_7][0]);
    } else {
        VAR_5 = VAR_3 - 1;
        VAR_4 = 1 << VAR_5;

        VAR_2 = FUNC_1(VAR_2, 6 + VAR_5);
        VAR_6 = VAR_2>>31;
        VAR_2= (VAR_2^VAR_6)-VAR_6;
        VAR_6&=1;

        VAR_2--;
        VAR_7 = (VAR_2 >> VAR_5) + 1;
        VAR_8 = VAR_2 & (VAR_4 - 1);

        FUNC_0(VAR_1, VAR_0[VAR_7][1] + 1, (VAR_0[VAR_7][0] << 1) | VAR_6);
        if (VAR_5 > 0) {
            FUNC_0(VAR_1, VAR_5, VAR_8);
        }
    }
}
