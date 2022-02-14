
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int (* clear_vmdq ) (struct ixgbe_hw*,scalar_t__,int ) ;} ;
struct TYPE_4__ {scalar_t__ num_rar_entries; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_4 (struct ixgbe_hw*,char*,scalar_t__) ;
 int FUNC_5 (struct ixgbe_hw*,scalar_t__,int ) ;

s32 FUNC_6(struct ixgbe_hw *VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6 = VAR_3->mac.num_rar_entries;


 if (VAR_4 >= VAR_6) {
  FUNC_4(VAR_3, "RAR index %d is out of range.\n", VAR_4);
  return VAR_1;
 }






 VAR_5 = FUNC_2(VAR_3, FUNC_0(VAR_4));
 VAR_5 &= ~(0x0000FFFF | VAR_2);

 FUNC_3(VAR_3, FUNC_1(VAR_4), 0);
 FUNC_3(VAR_3, FUNC_0(VAR_4), VAR_5);


 VAR_3->mac.ops.clear_vmdq(VAR_3, VAR_4, VAR_0);

 return 0;
}
