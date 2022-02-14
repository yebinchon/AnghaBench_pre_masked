
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct iwl_mvm {TYPE_1__ led; } ;
struct TYPE_4__ {scalar_t__ led_mode; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct iwl_mvm *VAR_2)
{
 if (VAR_1.led_mode == VAR_0)
  return;

 FUNC_1(&VAR_2->led);
 FUNC_0(VAR_2->led.name);
}
