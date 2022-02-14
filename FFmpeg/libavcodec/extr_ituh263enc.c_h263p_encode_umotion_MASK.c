
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(PutBitContext *VAR_0, int VAR_1)
{
    short VAR_2 = 0;
    short VAR_3 = 0;
    short VAR_4 = 0;
    short VAR_5;
    int VAR_6 = 0;
    int VAR_7;

    if ( VAR_1 == 0)
        FUNC_0(VAR_0, 1, 1);
    else if (VAR_1 == 1)
        FUNC_0(VAR_0, 3, 0);
    else if (VAR_1 == -1)
        FUNC_0(VAR_0, 3, 2);
    else {

        VAR_2 = ((VAR_1 < 0) ? (short)(-VAR_1):(short)VAR_1);
        VAR_5 = VAR_2;

        while (VAR_5 != 0) {
            VAR_5 = VAR_5 >> 1;
            VAR_4++;
        }

        VAR_3 = VAR_4 - 1;
        while (VAR_3 > 0) {
            VAR_7 = (VAR_2 & (1 << (VAR_3-1))) >> (VAR_3-1);
            VAR_7 = (VAR_7 << 1) | 1;
            VAR_6 = (VAR_6 << 2) | VAR_7;
            VAR_3--;
        }
        VAR_6 = ((VAR_6 << 1) | (VAR_1 < 0)) << 1;
        FUNC_0(VAR_0, (2*VAR_4)+1, VAR_6);
    }
}
