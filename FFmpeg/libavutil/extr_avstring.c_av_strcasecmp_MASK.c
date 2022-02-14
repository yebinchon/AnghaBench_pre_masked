
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(const char *VAR_0, const char *VAR_1)
{
    uint8_t VAR_2, VAR_3;
    do {
        VAR_2 = FUNC_0(*VAR_0++);
        VAR_3 = FUNC_0(*VAR_1++);
    } while (VAR_2 && VAR_2 == VAR_3);
    return VAR_2 - VAR_3;
}
