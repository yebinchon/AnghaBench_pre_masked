
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,scalar_t__) ;

int FUNC_2(GetBitContext *VAR_3, unsigned int *VAR_4,
                         unsigned int *VAR_5, unsigned int *VAR_6)
{
    if (FUNC_0(VAR_3) < VAR_2)
        return VAR_0;

    *VAR_4 = VAR_1;
    *VAR_5 = 0;
    *VAR_6 = FUNC_1(VAR_3, VAR_2);

    return 0;
}
