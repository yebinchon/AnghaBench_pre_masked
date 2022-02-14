
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct TYPE_3__ {int activescanTickPerChannel; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_2, u16_t VAR_3)
{
    FUNC_1(VAR_2);

    FUNC_0("scan time (ms) = ", VAR_3);

    VAR_1->sta.activescanTickPerChannel = VAR_3 / VAR_0;
}
