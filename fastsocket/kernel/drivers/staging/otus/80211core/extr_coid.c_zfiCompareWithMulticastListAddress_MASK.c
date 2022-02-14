
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef int u16_t ;
struct TYPE_6__ {size_t size; TYPE_1__* macAddr; } ;
struct TYPE_7__ {TYPE_2__ multicastList; } ;
struct TYPE_8__ {TYPE_3__ sta; } ;
struct TYPE_5__ {scalar_t__ addr; } ;


 TYPE_4__* VAR_0 ;
 scalar_t__ FUNC_0 (size_t*,size_t*,int) ;
 int FUNC_1 (int *) ;

u8_t FUNC_2(zdev_t* VAR_1, u16_t* VAR_2)
{
    u8_t VAR_3;
    u8_t VAR_4 = 0;

    FUNC_1(VAR_1);

    for ( VAR_3=0; VAR_3<VAR_0->sta.multicastList.size; VAR_3++ )
    {
     if ( FUNC_0((u8_t*)VAR_2, (u8_t*)VAR_0->sta.multicastList.macAddr[VAR_3].addr, 6) )
     {
            VAR_4 = 1;
            break;
     }
    }

    return VAR_4;
}
