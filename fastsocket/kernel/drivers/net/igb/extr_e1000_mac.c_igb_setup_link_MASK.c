
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ requested_mode; scalar_t__ current_mode; int pause_time; } ;
struct TYPE_4__ {scalar_t__ (* setup_physical_interface ) (struct e1000_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ fc; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (int ,int ) ;

s32 FUNC_6(struct e1000_hw *VAR_8)
{
 s32 VAR_9 = 0;




 if (FUNC_1(VAR_8))
  goto out;




 if (VAR_8->fc.requested_mode == VAR_7) {
  VAR_9 = FUNC_2(VAR_8);
  if (VAR_9)
   goto out;
 }





 VAR_8->fc.current_mode = VAR_8->fc.requested_mode;

 FUNC_0("After fix-ups FlowControl is now = %x\n", VAR_8->fc.current_mode);


 VAR_9 = VAR_8->mac.ops.setup_physical_interface(VAR_8);
 if (VAR_9)
  goto out;






 FUNC_0("Initializing the Flow Control address, type and timer regs\n");
 FUNC_5(VAR_2, VAR_6);
 FUNC_5(VAR_0, VAR_4);
 FUNC_5(VAR_1, VAR_5);

 FUNC_5(VAR_3, VAR_8->fc.pause_time);

 VAR_9 = FUNC_3(VAR_8);

out:

 return VAR_9;
}
