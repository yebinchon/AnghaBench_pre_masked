
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(GetBitContext* VAR_0)
{
    int VAR_1;

    if (FUNC_2(VAR_0) < 1+3)
        return -1;

    VAR_1 = FUNC_1(VAR_0);
    if (VAR_1)
        return 0;

    VAR_1 = FUNC_0(VAR_0, 3);
    if (VAR_1)
        return VAR_1;

    VAR_1 = FUNC_0(VAR_0, 8);
    if (VAR_1)
        return VAR_1 + 7;

    VAR_1 = FUNC_0(VAR_0, 15);
    if (VAR_1)
        return VAR_1 + 262;

    return -1;
}
