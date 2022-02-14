
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_0, int VAR_1)
{
    unsigned int VAR_2 = -1;
    VAR_1 -= FUNC_1(VAR_0);
    while (VAR_1-- > 0) {
        VAR_2 += VAR_2 + FUNC_0(VAR_0);
        if ((VAR_2 & 0xFFF) == 1)
            return 0;
    }
    return -1;
}
