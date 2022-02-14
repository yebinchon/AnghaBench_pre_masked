
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;

int32_t FUNC_3(uint8_t *VAR_1, int32_t VAR_2)
{
    static unsigned VAR_3 = 0;
    int32_t VAR_4 = 0;


    if (++VAR_3 == 1)
    {

        FUNC_1((unsigned)(FUNC_2(((void*)0)) ^ 3141592654UL));
    }

    while (VAR_4 < VAR_2)
        VAR_1[VAR_4++] = (FUNC_0() >> 7) & 0xff;

    return VAR_2;
}
