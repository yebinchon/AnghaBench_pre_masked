
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct paravirt_patch_template {int pv_lock_ops; int pv_mmu_ops; int pv_apic_ops; int pv_irq_ops; int pv_cpu_ops; int pv_time_ops; int pv_init_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void *FUNC_0(u8 VAR_7)
{
 struct paravirt_patch_template VAR_8 = {
  .pv_init_ops = VAR_2,
  .pv_time_ops = VAR_6,
  .pv_cpu_ops = VAR_1,
  .pv_irq_ops = VAR_3,
  .pv_apic_ops = VAR_0,
  .pv_mmu_ops = VAR_5,



 };
 return *((void **)&VAR_8 + VAR_7);
}
