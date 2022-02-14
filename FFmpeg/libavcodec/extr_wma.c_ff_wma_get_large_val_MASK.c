
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 scalar_t__ FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,int) ;

unsigned int FUNC_2(GetBitContext *VAR_0)
{

    int VAR_1 = 8;

    if (FUNC_0(VAR_0)) {
        VAR_1 += 8;
        if (FUNC_0(VAR_0)) {
            VAR_1 += 8;
            if (FUNC_0(VAR_0))
                VAR_1 += 7;
        }
    }
    return FUNC_1(VAR_0, VAR_1);
}
