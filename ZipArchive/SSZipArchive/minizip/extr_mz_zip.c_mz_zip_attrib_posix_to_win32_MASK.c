
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_0(uint32_t VAR_2, uint32_t *VAR_3)
{
    if (VAR_3 == ((void*)0))
        return VAR_1;

    *VAR_3 = 0;


    if ((VAR_2 & 0000333) == 0 && (VAR_2 & 0000444) != 0)
        *VAR_3 |= 0x01;

    if ((VAR_2 & 0170000) == 0120000)
        *VAR_3 |= 0x400;

    else if ((VAR_2 & 0170000) == 0040000)
        *VAR_3 |= 0x10;

    else
        *VAR_3 |= 0x80;

    return VAR_0;
}
