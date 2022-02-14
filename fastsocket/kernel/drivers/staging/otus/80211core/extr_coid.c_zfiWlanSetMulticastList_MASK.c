
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
struct TYPE_7__ {size_t size; TYPE_1__* macAddr; } ;
struct TYPE_6__ {int osRxFilter; TYPE_3__ multicastList; } ;
struct TYPE_8__ {TYPE_2__ sta; } ;
struct TYPE_5__ {int addr; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int *,size_t,size_t*,size_t) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_2, u8_t VAR_3, u8_t* VAR_4)
{
    struct zsMulticastAddr* VAR_5 = (struct zsMulticastAddr*) VAR_4;
    u8_t VAR_6;
    u8_t VAR_7 = 0;


    FUNC_2(VAR_2);

    VAR_1->sta.multicastList.size = VAR_3;
    for(VAR_6=0; VAR_6<VAR_3; VAR_6++)
    {
        FUNC_1(VAR_1->sta.multicastList.macAddr[VAR_6].addr,
                     VAR_5[VAR_6].addr, 6);
    }

    if ( VAR_1->sta.osRxFilter & VAR_0 )
        VAR_7 = 1;
    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7);

}
