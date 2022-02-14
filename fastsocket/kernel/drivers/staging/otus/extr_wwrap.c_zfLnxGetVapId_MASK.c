
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct TYPE_2__ {int * dev; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

u16_t FUNC_0(zdev_t* VAR_2)
{
    u16_t VAR_3;

    for (VAR_3=0; VAR_3<VAR_0; VAR_3++)
    {
        if (VAR_1[VAR_3].dev == VAR_2)
        {
            return VAR_3;
        }
    }
    return 0xffff;
}
