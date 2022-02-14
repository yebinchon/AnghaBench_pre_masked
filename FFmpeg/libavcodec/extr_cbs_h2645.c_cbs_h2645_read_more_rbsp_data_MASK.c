
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(GetBitContext *VAR_0)
{
    int VAR_1 = FUNC_1(VAR_0);
    if (VAR_1 > 8)
        return 1;
    if (VAR_1 == 0)
        return 0;
    if (FUNC_2(VAR_0, VAR_1) & FUNC_0(VAR_1 - 1))
        return 1;
    return 0;
}
