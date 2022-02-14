
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int (* check_for_link ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct igbvf_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_2(struct igbvf_adapter *VAR_2, u64 *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_2->hw;
 *VAR_3 = 0;

 VAR_4->mac.ops.check_for_link(VAR_4);

 if (!(FUNC_0(VAR_1) & VAR_0))
  *VAR_3 = 1;

 return *VAR_3;
}
