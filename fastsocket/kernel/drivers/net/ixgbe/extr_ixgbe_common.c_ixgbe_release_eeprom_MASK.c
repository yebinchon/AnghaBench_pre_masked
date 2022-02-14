
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int semaphore_delay; } ;
struct TYPE_5__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_1__ eeprom; TYPE_3__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_hw *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0);

 VAR_6 |= VAR_1;
 VAR_6 &= ~VAR_3;

 FUNC_2(VAR_5, VAR_0, VAR_6);
 FUNC_1(VAR_5);

 FUNC_4(1);


 VAR_6 &= ~VAR_2;
 FUNC_2(VAR_5, VAR_0, VAR_6);

 VAR_5->mac.ops.release_swfw_sync(VAR_5, VAR_4);





 FUNC_5(VAR_5->eeprom.semaphore_delay * 1000,
       VAR_5->eeprom.semaphore_delay * 2000);
}
