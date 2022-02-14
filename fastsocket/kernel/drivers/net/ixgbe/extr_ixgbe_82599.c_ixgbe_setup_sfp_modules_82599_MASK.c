
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_11__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_12__ {int orig_autoc; TYPE_5__ ops; int cached_autoc; } ;
struct TYPE_9__ {int (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_10__ {int semaphore_delay; TYPE_3__ ops; } ;
struct TYPE_7__ {int * reset; } ;
struct TYPE_8__ {scalar_t__ sfp_type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_6__ mac; TYPE_4__ eeprom; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ) ;
 int FUNC_9 (struct ixgbe_hw*,int,int*) ;
 int FUNC_10 (struct ixgbe_hw*,int,int*) ;
 int FUNC_11 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*,int ) ;
 int FUNC_13 (struct ixgbe_hw*,int ) ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static s32 FUNC_15(struct ixgbe_hw *VAR_7)
{
 s32 VAR_8 = 0;
 u16 VAR_9, VAR_10, VAR_11;
 bool VAR_12 = 0;

 if (VAR_7->phy.sfp_type != VAR_6) {
  FUNC_5(VAR_7);

  VAR_7->phy.ops.reset = ((void*)0);

  VAR_8 = FUNC_4(VAR_7, &VAR_9,
                                                &VAR_10);
  if (VAR_8 != 0)
   goto setup_sfp_out;


  VAR_8 = VAR_7->mac.ops.acquire_swfw_sync(VAR_7,
                                          VAR_5);
  if (VAR_8 != 0) {
   VAR_8 = VAR_4;
   goto setup_sfp_out;
  }

  VAR_7->eeprom.ops.read(VAR_7, ++VAR_10, &VAR_11);
  while (VAR_11 != 0xffff) {
   FUNC_2(VAR_7, VAR_2, VAR_11);
   FUNC_1(VAR_7);
   VAR_7->eeprom.ops.read(VAR_7, ++VAR_10, &VAR_11);
  }


  VAR_7->mac.ops.release_swfw_sync(VAR_7, VAR_5);




  FUNC_14(VAR_7->eeprom.semaphore_delay * 1000,
        VAR_7->eeprom.semaphore_delay * 2000);





  if (FUNC_7(VAR_7)) {
   VAR_8 = VAR_7->mac.ops.acquire_swfw_sync(VAR_7,
       VAR_5);
   if (VAR_8)
    goto setup_sfp_out;

   VAR_12 = 1;
  }


  FUNC_2(VAR_7, VAR_0, ((VAR_7->mac.orig_autoc) |
    VAR_1));
  VAR_7->mac.cached_autoc = FUNC_0(VAR_7, VAR_0);
  VAR_8 = FUNC_6(VAR_7);

  if (VAR_12) {
   VAR_7->mac.ops.release_swfw_sync(VAR_7,
            VAR_5);
   VAR_12 = 0;
  }

  if (VAR_8) {
   FUNC_3(VAR_7, " sfp module setup not complete\n");
   VAR_8 = VAR_3;
   goto setup_sfp_out;
  }
 }

setup_sfp_out:
 return VAR_8;
}
