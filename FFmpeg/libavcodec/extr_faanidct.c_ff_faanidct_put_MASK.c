
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;
typedef int FLOAT ;


 int FUNC_0 () ;
 int FUNC_1 (int*,int*,int *,int ,int,int,int) ;
 int* VAR_0 ;

void FUNC_2(uint8_t *VAR_1, ptrdiff_t VAR_2, int16_t VAR_3[64])
{
    FLOAT VAR_4[64];
    int VAR_5;

    FUNC_0();

    for(VAR_5=0; VAR_5<64; VAR_5++)
        VAR_4[VAR_5] = VAR_3[VAR_5] * VAR_0[VAR_5];

    FUNC_1(VAR_3, VAR_4, ((void*)0), 0, 1, 8, 0);
    FUNC_1(((void*)0) , VAR_4, VAR_1, VAR_2, 8, 1, 3);
}
