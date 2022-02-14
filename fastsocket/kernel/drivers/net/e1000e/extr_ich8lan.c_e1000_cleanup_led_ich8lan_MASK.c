
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ledctl_default; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct e1000_hw*,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_3)
{
 if (VAR_3->phy.type == VAR_2)
  return FUNC_0(VAR_3, VAR_0, 0);

 FUNC_1(VAR_1, VAR_3->mac.ledctl_default);
 return 0;
}
