
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ num_rar_entries; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_4 (struct ixgbe_hw*,char*,scalar_t__) ;

s32 FUNC_5(struct ixgbe_hw *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = VAR_1->mac.num_rar_entries;


 if (VAR_2 >= VAR_5) {
  FUNC_4(VAR_1, "RAR index %d is out of range.\n", VAR_2);
  return VAR_0;
 }

 if (VAR_3 < 32) {
  VAR_4 = FUNC_2(VAR_1, FUNC_1(VAR_2));
  VAR_4 |= 1 << VAR_3;
  FUNC_3(VAR_1, FUNC_1(VAR_2), VAR_4);
 } else {
  VAR_4 = FUNC_2(VAR_1, FUNC_0(VAR_2));
  VAR_4 |= 1 << (VAR_3 - 32);
  FUNC_3(VAR_1, FUNC_0(VAR_2), VAR_4);
 }
 return 0;
}
