
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline void FUNC_3(GetBitContext *VAR_0)
{
    int VAR_1 = 0;

    while (FUNC_1(VAR_0)) {
        if (FUNC_0(VAR_0))
            break;
        VAR_1++;
    }

    if (VAR_1 >= 32)
        return;

    FUNC_2(VAR_0, VAR_1);
}
