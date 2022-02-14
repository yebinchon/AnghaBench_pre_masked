
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static unsigned FUNC_3(GetBitContext* VAR_0)
{
    unsigned VAR_1;


    if (FUNC_2(VAR_0) < 1)
        return -1;
    VAR_1 = FUNC_1(VAR_0);
    if (!VAR_1)
        return VAR_1;

    VAR_1 += FUNC_0(VAR_0, 3);
    if (VAR_1 != (1 + ((1 << 3) - 1)))
        return VAR_1;

    VAR_1 += FUNC_0(VAR_0, 7);
    if (VAR_1 != (1 + ((1 << 3) - 1)) + ((1 << 7) - 1))
        return VAR_1;

    return VAR_1 + FUNC_0(VAR_0, 12);
}
