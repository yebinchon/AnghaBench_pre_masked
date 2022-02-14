
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int) ;

int FUNC_1(const uint8_t *VAR_0, const uint8_t *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5=0;

    for(VAR_4=0; VAR_4<VAR_3; VAR_4++){
        int VAR_6 = (*VAR_0++ + *VAR_2++) - 2 * *VAR_1++;
        VAR_5 += FUNC_0(VAR_6);
    }

    return VAR_5;
}
