
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;



 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_5)
{
 u32 VAR_6;
 s32 VAR_7;

 VAR_6 = FUNC_3(VAR_0);
 VAR_6 |= VAR_3;
 VAR_6 &= ~(VAR_2 | VAR_1);
 FUNC_4(VAR_0, VAR_6);

 switch (VAR_5->phy.type) {
 case 128:
 case 130:
  VAR_7 = FUNC_1(VAR_5);
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_5);
  break;
 default:
  return -VAR_4;
  break;
 }

 if (VAR_7)
  return VAR_7;

 return FUNC_2(VAR_5);
}
