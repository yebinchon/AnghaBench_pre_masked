
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int laa_is_present; } ;
struct TYPE_6__ {TYPE_2__ e82571; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ dev_spec; TYPE_1__ mac; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct e1000_hw *VAR_1)
{
 if (VAR_1->mac.type != VAR_0)
  return 0;

 return VAR_1->dev_spec.e82571.laa_is_present;
}
