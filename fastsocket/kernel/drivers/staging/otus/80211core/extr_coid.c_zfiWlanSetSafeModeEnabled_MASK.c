
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
struct TYPE_3__ {scalar_t__ bSafeMode; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_1, u8_t VAR_2)
{
    FUNC_2(VAR_1);

    VAR_0->sta.bSafeMode = VAR_2;

    if ( VAR_2 )
     FUNC_1(VAR_1, 1);
    else
        FUNC_0(VAR_1);
}
