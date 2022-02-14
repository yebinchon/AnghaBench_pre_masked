
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct attack_option {int key; char* val; } ;



char *FUNC_0(uint8_t VAR_0, struct attack_option *VAR_1, uint8_t VAR_2, char *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
        if (VAR_1[VAR_4].key == VAR_2)
            return VAR_1[VAR_4].val;
    }

    return VAR_3;
}
