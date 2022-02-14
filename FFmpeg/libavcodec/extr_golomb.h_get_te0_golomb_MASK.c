
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(GetBitContext *VAR_0, int VAR_1)
{
    FUNC_0(VAR_1 >= 1);

    if (VAR_1 == 1)
        return 0;
    else if (VAR_1 == 2)
        return FUNC_1(VAR_0) ^ 1;
    else
        return FUNC_2(VAR_0);
}
