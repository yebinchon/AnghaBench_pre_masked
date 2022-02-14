
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
struct TYPE_5__ {scalar_t__ wepStatus; } ;
struct TYPE_4__ {scalar_t__ wepStatus; } ;
struct TYPE_6__ {TYPE_2__ sta; TYPE_1__ ws; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;

u8_t FUNC_1(zdev_t* VAR_1, u8_t VAR_2)
{
    u8_t VAR_3;

    FUNC_0(VAR_1);

    if ( VAR_2 )
    {
        VAR_3 = VAR_0->ws.wepStatus;
    }
    else
    {
        VAR_3 = VAR_0->sta.wepStatus;
    }

    return VAR_3;
}
