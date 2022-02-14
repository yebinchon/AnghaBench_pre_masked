
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int*,int*) ;

void FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1, int16_t *VAR_2)
{
    int VAR_3;
    int16_t VAR_4[64];
    VAR_2[0] += 4;
    for (VAR_3=0; VAR_3<8; VAR_3++)
        FUNC_1(&VAR_4[VAR_3], &VAR_2[VAR_3]);
    for (VAR_3=0; VAR_3<8; VAR_3++)
        FUNC_0( (&VAR_0[VAR_3*VAR_1]), (&VAR_4[8*VAR_3]) );
}
