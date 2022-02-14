
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ledctl_mode1; } ;
struct TYPE_3__ {int media_type; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int VAR_0 ;

 int FUNC_0 (int ,int ) ;

s32 FUNC_1(struct e1000_hw *VAR_1)
{
 switch (VAR_1->phy.media_type) {
 case 128:
  FUNC_0(VAR_0, VAR_1->mac.ledctl_mode1);
  break;
 default:
  break;
 }

 return 0;
}
