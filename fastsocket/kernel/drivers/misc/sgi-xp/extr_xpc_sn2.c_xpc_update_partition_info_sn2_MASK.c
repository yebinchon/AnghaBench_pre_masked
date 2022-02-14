
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
struct xpc_vars_sn2 {unsigned long heartbeat; unsigned long vars_part_pa; unsigned long activate_IRQ_nasid; unsigned long activate_IRQ_phys_cpuid; unsigned long amos_page_pa; unsigned long version; } ;
struct xpc_partition_sn2 {unsigned long remote_vars_pa; unsigned long remote_vars_part_pa; unsigned long activate_IRQ_nasid; unsigned long activate_IRQ_phys_cpuid; unsigned long remote_amos_page_pa; unsigned long remote_vars_version; } ;
struct TYPE_2__ {struct xpc_partition_sn2 sn2; } ;
struct xpc_partition {unsigned long remote_rp_version; unsigned long remote_rp_ts_jiffies; unsigned long remote_rp_pa; unsigned long last_heartbeat; TYPE_1__ sn; } ;


 int FUNC_0 (int ,char*,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct xpc_partition *VAR_1, u8 VAR_2,
         unsigned long *VAR_3,
         unsigned long VAR_4,
         unsigned long VAR_5,
         struct xpc_vars_sn2 *VAR_6)
{
 struct xpc_partition_sn2 *VAR_7 = &VAR_1->sn.sn2;

 VAR_1->remote_rp_version = VAR_2;
 FUNC_0(VAR_0, "  remote_rp_version = 0x%016x\n",
  VAR_1->remote_rp_version);

 VAR_1->remote_rp_ts_jiffies = *VAR_3;
 FUNC_0(VAR_0, "  remote_rp_ts_jiffies = 0x%016lx\n",
  VAR_1->remote_rp_ts_jiffies);

 VAR_1->remote_rp_pa = VAR_4;
 FUNC_0(VAR_0, "  remote_rp_pa = 0x%016lx\n", VAR_1->remote_rp_pa);

 VAR_7->remote_vars_pa = VAR_5;
 FUNC_0(VAR_0, "  remote_vars_pa = 0x%016lx\n",
  VAR_7->remote_vars_pa);

 VAR_1->last_heartbeat = VAR_6->heartbeat - 1;
 FUNC_0(VAR_0, "  last_heartbeat = 0x%016llx\n",
  VAR_1->last_heartbeat);

 VAR_7->remote_vars_part_pa = VAR_6->vars_part_pa;
 FUNC_0(VAR_0, "  remote_vars_part_pa = 0x%016lx\n",
  VAR_7->remote_vars_part_pa);

 VAR_7->activate_IRQ_nasid = VAR_6->activate_IRQ_nasid;
 FUNC_0(VAR_0, "  activate_IRQ_nasid = 0x%x\n",
  VAR_7->activate_IRQ_nasid);

 VAR_7->activate_IRQ_phys_cpuid =
     VAR_6->activate_IRQ_phys_cpuid;
 FUNC_0(VAR_0, "  activate_IRQ_phys_cpuid = 0x%x\n",
  VAR_7->activate_IRQ_phys_cpuid);

 VAR_7->remote_amos_page_pa = VAR_6->amos_page_pa;
 FUNC_0(VAR_0, "  remote_amos_page_pa = 0x%lx\n",
  VAR_7->remote_amos_page_pa);

 VAR_7->remote_vars_version = VAR_6->version;
 FUNC_0(VAR_0, "  remote_vars_version = 0x%x\n",
  VAR_7->remote_vars_version);
}
