
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_3 (struct ixgbe_hw*,char*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = VAR_3->mac.num_rar_entries;


 if (VAR_4 >= VAR_7) {
  FUNC_3(VAR_3, "RAR index %d is out of range.\n", VAR_4);
  return VAR_0;
 }

 VAR_6 = FUNC_1(VAR_3, FUNC_0(VAR_4));
 VAR_6 &= ~VAR_1;
 VAR_6 |= ((VAR_5 << VAR_2) & VAR_1);
 FUNC_2(VAR_3, FUNC_0(VAR_4), VAR_6);
 return 0;
}
