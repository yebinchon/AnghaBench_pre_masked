
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int *,int,int) ;

void FUNC_1(PutBitContext *VAR_0, int VAR_1)
{
    if (VAR_1 == 0) {
        FUNC_0(VAR_0, 1, 0);
    } else {
        FUNC_0(VAR_0, 1, 1);
        FUNC_0(VAR_0, 1, (VAR_1 >= 2));
    }
}
