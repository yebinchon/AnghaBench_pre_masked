
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int const*,int) ;

void FUNC_2(int16_t *VAR_2, const int16_t *VAR_3, int VAR_4)
{
    VAR_3 += VAR_1 - VAR_4;

    FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0, VAR_4)*sizeof(*VAR_2));
    if (VAR_4 < VAR_0)
        FUNC_1(VAR_2 + VAR_4, VAR_3, (VAR_0 - VAR_4)*sizeof(*VAR_2));
}
