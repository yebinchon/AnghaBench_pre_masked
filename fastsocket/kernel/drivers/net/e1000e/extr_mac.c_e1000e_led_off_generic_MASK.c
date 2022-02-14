
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ledctl_mode1; } ;
struct TYPE_3__ {int media_type; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

s32 FUNC_2(struct e1000_hw *VAR_4)
{
 u32 VAR_5;

 switch (VAR_4->phy.media_type) {
 case 128:
  VAR_5 = FUNC_0(VAR_0);
  VAR_5 |= VAR_1;
  VAR_5 |= VAR_2;
  FUNC_1(VAR_0, VAR_5);
  break;
 case 129:
  FUNC_1(VAR_3, VAR_4->mac.ledctl_mode1);
  break;
 default:
  break;
 }

 return 0;
}
