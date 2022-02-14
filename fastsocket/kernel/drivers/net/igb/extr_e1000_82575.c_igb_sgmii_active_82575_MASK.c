
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_dev_spec_82575 {int sgmii_active; } ;
struct TYPE_2__ {struct e1000_dev_spec_82575 _82575; } ;
struct e1000_hw {TYPE_1__ dev_spec; } ;



__attribute__((used)) static bool FUNC_0(struct e1000_hw *VAR_0)
{
 struct e1000_dev_spec_82575 *VAR_1 = &VAR_0->dev_spec._82575;
 return VAR_1->sgmii_active;
}
