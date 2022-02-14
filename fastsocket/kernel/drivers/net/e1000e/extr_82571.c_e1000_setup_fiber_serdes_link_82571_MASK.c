
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_2)
{
 switch (VAR_2->mac.type) {
 case 129:
 case 128:






  FUNC_1(VAR_1, VAR_0);
  break;
 default:
  break;
 }

 return FUNC_0(VAR_2);
}
