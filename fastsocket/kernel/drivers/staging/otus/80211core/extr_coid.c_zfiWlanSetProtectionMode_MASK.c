
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
struct TYPE_3__ {scalar_t__ bProtectionMode; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_3, u8_t VAR_4)
{
    FUNC_2(VAR_3);

    VAR_2->sta.bProtectionMode = VAR_4;
    if (VAR_2->sta.bProtectionMode == VAR_0)
    {
        FUNC_0(VAR_3, 0);
    }
    else
    {
        FUNC_0(VAR_3, 1);
    }

    FUNC_1(VAR_1, "wd->protectionMode=", VAR_2->sta.bProtectionMode);
}
