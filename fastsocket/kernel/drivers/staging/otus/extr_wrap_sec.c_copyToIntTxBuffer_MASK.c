
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;



void FUNC_0(zdev_t* VAR_0, zbuf_t* VAR_1, u8_t* VAR_2,
                         u16_t VAR_3, u16_t VAR_4)
{
    u16_t VAR_5;

    for(VAR_5=0; VAR_5<VAR_4;VAR_5++)
    {

        *(u8_t*)((u8_t*)VAR_1->data+VAR_3+VAR_5) = VAR_2[VAR_5];
    }
}
