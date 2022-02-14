
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int FUNC_0 (struct ixgbe_hw*,int *) ;



void FUNC_1(struct ixgbe_hw *VAR_0, u8 *VAR_1)
{
 switch (VAR_0->mac.type) {
 case 129:
 case 128:
  FUNC_0(VAR_0, VAR_1);
  break;
 default:
  break;
 }
}
