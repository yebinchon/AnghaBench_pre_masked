
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct xpc_vars_part_sn2 {scalar_t__ magic; scalar_t__ GPs_pa; scalar_t__ openclose_args_pa; scalar_t__ chctl_amo_pa; scalar_t__ nchannels; int notify_IRQ_phys_cpuid; int notify_IRQ_nasid; } ;
struct xpc_partition_sn2 {int remote_vars_part_pa; scalar_t__ remote_GPs_pa; scalar_t__ remote_openclose_args_pa; int notify_IRQ_phys_cpuid; int notify_IRQ_nasid; struct amo* remote_chctl_amo_va; } ;
struct TYPE_3__ {struct xpc_partition_sn2 sn2; } ;
struct xpc_partition {scalar_t__ nchannels; TYPE_1__ sn; } ;
struct amo {int dummy; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_4__ {scalar_t__ magic; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 short FUNC_2 (struct xpc_partition*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,short,int,...) ;
 int FUNC_5 (int ,char*,short,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct xpc_partition*,struct xpc_vars_part_sn2*,unsigned long,int) ;
 TYPE_2__* VAR_9 ;

__attribute__((used)) static enum xp_retval
FUNC_7(struct xpc_partition *VAR_10)
{
 struct xpc_partition_sn2 *VAR_11 = &VAR_10->sn.sn2;
 u8 VAR_12[VAR_0 * 2];
 struct xpc_vars_part_sn2 *VAR_13 =
     (struct xpc_vars_part_sn2 *)FUNC_1((u64)VAR_12);
 struct xpc_vars_part_sn2 *VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16;
 short VAR_17 = FUNC_2(VAR_10);
 enum xp_retval VAR_18;



 FUNC_0(VAR_11->remote_vars_part_pa !=
  FUNC_1(VAR_11->remote_vars_part_pa));
 FUNC_0(sizeof(struct xpc_vars_part_sn2) != VAR_0 / 2);

 VAR_16 = VAR_11->remote_vars_part_pa +
     VAR_3 * sizeof(struct xpc_vars_part_sn2);

 VAR_15 = (VAR_16 & ~(VAR_0 - 1));

 VAR_14 = (struct xpc_vars_part_sn2 *)((u64)VAR_13
          + (VAR_16 &
          (VAR_0 - 1)));

 VAR_18 = FUNC_6(VAR_10, VAR_13,
          VAR_15,
          VAR_0);
 if (VAR_18 != VAR_7) {
  FUNC_4(VAR_8, "failed to pull XPC vars_part from "
   "partition %d, ret=%d\n", VAR_17, VAR_18);
  return VAR_18;
 }



 if (VAR_14->magic != VAR_1 &&
     VAR_14->magic != VAR_2) {

  if (VAR_14->magic != 0) {
   FUNC_4(VAR_8, "partition %d's XPC vars_part for "
    "partition %d has bad magic value (=0x%llx)\n",
    VAR_17, VAR_3, VAR_14->magic);
   return VAR_4;
  }


  return VAR_6;
 }

 if (VAR_9[VAR_17].magic == VAR_1) {



  if (VAR_14->GPs_pa == 0 ||
      VAR_14->openclose_args_pa == 0 ||
      VAR_14->chctl_amo_pa == 0) {

   FUNC_5(VAR_8, "partition %d's XPC vars_part for "
    "partition %d are not valid\n", VAR_17,
    VAR_3);
   return VAR_5;
  }



  VAR_11->remote_GPs_pa = VAR_14->GPs_pa;
  VAR_11->remote_openclose_args_pa =
      VAR_14->openclose_args_pa;
  VAR_11->remote_chctl_amo_va =
      (struct amo *)FUNC_3(VAR_14->chctl_amo_pa);
  VAR_11->notify_IRQ_nasid = VAR_14->notify_IRQ_nasid;
  VAR_11->notify_IRQ_phys_cpuid =
      VAR_14->notify_IRQ_phys_cpuid;

  if (VAR_10->nchannels > VAR_14->nchannels)
   VAR_10->nchannels = VAR_14->nchannels;



  VAR_9[VAR_17].magic = VAR_2;
 }

 if (VAR_14->magic == VAR_1)
  return VAR_6;

 return VAR_7;
}
