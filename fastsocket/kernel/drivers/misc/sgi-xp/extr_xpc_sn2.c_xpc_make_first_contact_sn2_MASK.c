
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition_sn2 {int activate_IRQ_phys_cpuid; int activate_IRQ_nasid; int remote_amos_page_pa; } ;
struct TYPE_2__ {struct xpc_partition_sn2 sn2; } ;
struct xpc_partition {scalar_t__ act_state; int reason; TYPE_1__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 int FUNC_0 (struct xpc_partition*,int) ;
 int FUNC_1 (struct xpc_partition*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct xpc_partition*) ;
 int FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static enum xp_retval
FUNC_9(struct xpc_partition *VAR_6)
{
 struct xpc_partition_sn2 *VAR_7 = &VAR_6->sn.sn2;
 enum xp_retval VAR_8;
 if (FUNC_6(VAR_7->remote_amos_page_pa,
           VAR_0, 1) < 0) {
  FUNC_4(VAR_5, "xpc_activating(%d) failed to register "
    "xp_addr region\n", FUNC_1(VAR_6));

  VAR_8 = VAR_2;
  FUNC_0(VAR_6, VAR_8);
  return VAR_8;
 }





 FUNC_8(VAR_7->remote_amos_page_pa,
      FUNC_2(0),
      VAR_7->activate_IRQ_nasid,
      VAR_7->activate_IRQ_phys_cpuid);

 while ((VAR_8 = FUNC_7(VAR_6)) != VAR_4) {
  if (VAR_8 != VAR_3) {
   FUNC_0(VAR_6, VAR_8);
   return VAR_8;
  }

  FUNC_3(VAR_5, "waiting to make first contact with "
   "partition %d\n", FUNC_1(VAR_6));


  (void)FUNC_5(250);

  if (VAR_6->act_state == VAR_1)
   return VAR_6->reason;
 }

 return VAR_4;
}
