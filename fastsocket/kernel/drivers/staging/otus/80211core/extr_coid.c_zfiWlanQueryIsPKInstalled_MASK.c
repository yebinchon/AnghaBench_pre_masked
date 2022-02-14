
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct TYPE_5__ {TYPE_1__* oppositeInfo; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;
struct TYPE_4__ {scalar_t__ pkInstalled; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,scalar_t__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

u8_t FUNC_5(zdev_t *VAR_1, u8_t *VAR_2)
{
    u8_t VAR_3 = 0;



    u8_t VAR_4, VAR_5;

    FUNC_3(VAR_1);

    FUNC_1();

    FUNC_2(VAR_1);
    VAR_4 = FUNC_0(VAR_1, (u16_t *)VAR_2, &VAR_5);
    if( VAR_4 == 0 )
    {
        VAR_3 = VAR_0->sta.oppositeInfo[VAR_5].pkInstalled;
    }
    FUNC_4(VAR_1);



    return VAR_3;
}
