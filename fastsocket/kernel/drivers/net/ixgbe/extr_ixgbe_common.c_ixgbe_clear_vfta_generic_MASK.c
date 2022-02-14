
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vft_size; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->mac.vft_size; VAR_2++)
  FUNC_3(VAR_1, FUNC_0(VAR_2), 0);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_3(VAR_1, FUNC_1(VAR_2), 0);
  FUNC_3(VAR_1, FUNC_2(VAR_2*2), 0);
  FUNC_3(VAR_1, FUNC_2((VAR_2*2)+1), 0);
 }

 return 0;
}
