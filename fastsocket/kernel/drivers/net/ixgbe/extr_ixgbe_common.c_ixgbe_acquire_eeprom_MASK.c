
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ) ;
 int FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_9)
{
 s32 VAR_10 = 0;
 u32 VAR_11;
 u32 VAR_12;

 if (VAR_9->mac.ops.acquire_swfw_sync(VAR_9, VAR_8) != 0)
  VAR_10 = VAR_7;

 if (VAR_10 == 0) {
  VAR_11 = FUNC_0(VAR_9, VAR_0);


  VAR_11 |= VAR_3;
  FUNC_2(VAR_9, VAR_0, VAR_11);

  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
   VAR_11 = FUNC_0(VAR_9, VAR_0);
   if (VAR_11 & VAR_2)
    break;
   FUNC_6(5);
  }


  if (!(VAR_11 & VAR_2)) {
   VAR_11 &= ~VAR_3;
   FUNC_2(VAR_9, VAR_0, VAR_11);
   FUNC_3(VAR_9, "Could not acquire EEPROM grant\n");

   VAR_9->mac.ops.release_swfw_sync(VAR_9, VAR_8);
   VAR_10 = VAR_6;
  }


  if (VAR_10 == 0) {

   VAR_11 &= ~(VAR_1 | VAR_4);
   FUNC_2(VAR_9, VAR_0, VAR_11);
   FUNC_1(VAR_9);
   FUNC_6(1);
  }
 }
 return VAR_10;
}
