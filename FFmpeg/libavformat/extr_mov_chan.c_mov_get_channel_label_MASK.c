
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_2)
{
    if (VAR_2 == 0)
        return 0;
    if (VAR_2 <= 18)
        return 1U << (VAR_2 - 1);
    if (VAR_2 == 38)
        return VAR_0;
    if (VAR_2 == 39)
        return VAR_1;
    return 0;
}
