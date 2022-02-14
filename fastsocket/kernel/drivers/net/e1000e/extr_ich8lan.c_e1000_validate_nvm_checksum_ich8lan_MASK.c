
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_0 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_4)
{
 s32 VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 u16 VAR_8;






 switch (VAR_4->mac.type) {
 case 128:
  VAR_7 = VAR_0;
  VAR_8 = VAR_1;
  break;
 default:
  VAR_7 = VAR_2;
  VAR_8 = VAR_3;
  break;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_7, 1, &VAR_6);
 if (VAR_5)
  return VAR_5;

 if (!(VAR_6 & VAR_8)) {
  VAR_6 |= VAR_8;
  VAR_5 = FUNC_1(VAR_4, VAR_7, 1, &VAR_6);
  if (VAR_5)
   return VAR_5;
  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_3(VAR_4);
}
