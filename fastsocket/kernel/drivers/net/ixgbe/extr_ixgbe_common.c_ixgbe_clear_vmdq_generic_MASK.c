
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int (* clear_rar ) (struct ixgbe_hw*,scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ num_rar_entries; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_4 (struct ixgbe_hw*,char*,scalar_t__) ;
 int FUNC_5 (struct ixgbe_hw*,scalar_t__) ;

s32 FUNC_6(struct ixgbe_hw *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;
 u32 VAR_7 = VAR_2->mac.num_rar_entries;


 if (VAR_3 >= VAR_7) {
  FUNC_4(VAR_2, "RAR index %d is out of range.\n", VAR_3);
  return VAR_1;
 }

 VAR_5 = FUNC_2(VAR_2, FUNC_1(VAR_3));
 VAR_6 = FUNC_2(VAR_2, FUNC_0(VAR_3));

 if (!VAR_5 && !VAR_6)
  goto done;

 if (VAR_4 == VAR_0) {
  if (VAR_5) {
   FUNC_3(VAR_2, FUNC_1(VAR_3), 0);
   VAR_5 = 0;
  }
  if (VAR_6) {
   FUNC_3(VAR_2, FUNC_0(VAR_3), 0);
   VAR_6 = 0;
  }
 } else if (VAR_4 < 32) {
  VAR_5 &= ~(1 << VAR_4);
  FUNC_3(VAR_2, FUNC_1(VAR_3), VAR_5);
 } else {
  VAR_6 &= ~(1 << (VAR_4 - 32));
  FUNC_3(VAR_2, FUNC_0(VAR_3), VAR_6);
 }


 if (VAR_5 == 0 && VAR_6 == 0 && VAR_3 != 0)
  VAR_2->mac.ops.clear_rar(VAR_2, VAR_3);
done:
 return 0;
}
