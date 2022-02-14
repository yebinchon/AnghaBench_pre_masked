
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;

void FUNC_2(PutBitContext *VAR_0, int VAR_1, int VAR_2,
                           int VAR_3, int VAR_4)
{
    if (VAR_2 < 64) {
        FUNC_0(VAR_0, 1, 0);
        FUNC_0(VAR_0, 1, VAR_4);
        FUNC_0(VAR_0, 6, VAR_3);

        FUNC_1(VAR_0, 7, VAR_1);
    } else {

        FUNC_0(VAR_0, 1, 1);
        FUNC_0(VAR_0, 1, VAR_4);
        FUNC_0(VAR_0, 6, VAR_3);

        FUNC_1(VAR_0, 11, VAR_1);
    }
}
