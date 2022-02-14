
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int *,int,char const) ;

void FUNC_1(PutBitContext *VAR_0, const char *VAR_1,
                       int VAR_2)
{
    while (*VAR_1) {
        FUNC_0(VAR_0, 8, *VAR_1);
        VAR_1++;
    }
    if (VAR_2)
        FUNC_0(VAR_0, 8, 0);
}
