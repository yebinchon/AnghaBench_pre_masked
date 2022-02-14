
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8_t ;


 int FUNC_0 (char*,...) ;

u8_t FUNC_1(u8_t VAR_0, u8_t* VAR_1, u8_t VAR_2)
{
    u8_t VAR_3;
    VAR_3=VAR_2-2;
    while(1)
    {
        if (VAR_0 >= VAR_1[VAR_3])
        {
            return VAR_3;
        }
        if (VAR_3!=0)
        {
            VAR_3--;
        }
        else
        {
            return 0;
        }
    }
}
