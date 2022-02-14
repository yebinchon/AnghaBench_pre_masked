
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3(GetBitContext *VAR_1)
{
    if (FUNC_1(VAR_1) <= 0)
        return VAR_0;

    while (FUNC_0(VAR_1)) {
        FUNC_2(VAR_1, 8);
        if (FUNC_1(VAR_1) <= 0)
            return VAR_0;
    }

    return 0;
}
