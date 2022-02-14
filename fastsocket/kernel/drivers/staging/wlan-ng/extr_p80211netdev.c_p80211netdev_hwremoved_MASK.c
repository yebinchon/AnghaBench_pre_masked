
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwremoved; scalar_t__ state; int netdev; } ;
typedef TYPE_1__ wlandevice_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(wlandevice_t *VAR_1)
{
 VAR_1->hwremoved = 1;
 if (VAR_1->state == VAR_0)
  FUNC_1(VAR_1->netdev);

 FUNC_0(VAR_1->netdev);
}
