
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
struct zsMulticastAddr {int addr; } ;
struct TYPE_6__ {size_t size; TYPE_1__* macAddr; } ;
struct TYPE_7__ {TYPE_2__ multicastList; } ;
struct TYPE_8__ {TYPE_3__ sta; } ;
struct TYPE_5__ {int addr; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, u8_t* VAR_2)
{
    struct zsMulticastAddr* VAR_3 = (struct zsMulticastAddr*) VAR_2;
    u8_t VAR_4;

    FUNC_1(VAR_1);

    for ( VAR_4=0; VAR_4<VAR_0->sta.multicastList.size; VAR_4++ )
    {
        FUNC_0(VAR_3[VAR_4].addr, VAR_0->sta.multicastList.macAddr[VAR_4].addr, 6);
    }
}
