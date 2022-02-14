
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int processor_info_t ;
typedef int processor_flavor_t ;
typedef TYPE_2__* processor_cpu_stat_t ;
typedef int kern_return_t ;
struct TYPE_5__ {int instr_ex_cnt; int data_ex_cnt; int vfp_cnt; int unaligned_cnt; int undef_ex_cnt; int timer_cnt; int ipi_cnt; int irq_ex_cnt; } ;
struct TYPE_7__ {TYPE_1__ cpu_stat; } ;
typedef TYPE_3__ cpu_data_t ;
struct TYPE_8__ {TYPE_3__* cpu_data_vaddr; } ;
struct TYPE_6__ {int instr_ex_cnt; int data_ex_cnt; int vfp_shortv_cnt; int vfp_cnt; int unaligned_cnt; int undef_ex_cnt; int timer_cnt; int ipi_cnt; int irq_ex_cnt; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 unsigned int VAR_3 ;

kern_return_t
FUNC_0(processor_flavor_t VAR_4,
  int VAR_5,
  processor_info_t VAR_6,
  unsigned int *VAR_7)
{
 switch (VAR_4) {
 case 128:
  {
   processor_cpu_stat_t VAR_8;
   cpu_data_t *VAR_9 = VAR_0[VAR_5].cpu_data_vaddr;

   if (*VAR_7 < VAR_3)
    return (VAR_1);

   VAR_8 = (processor_cpu_stat_t) VAR_6;
   VAR_8->irq_ex_cnt = VAR_9->cpu_stat.irq_ex_cnt;
   VAR_8->ipi_cnt = VAR_9->cpu_stat.ipi_cnt;
   VAR_8->timer_cnt = VAR_9->cpu_stat.timer_cnt;
   VAR_8->undef_ex_cnt = VAR_9->cpu_stat.undef_ex_cnt;
   VAR_8->unaligned_cnt = VAR_9->cpu_stat.unaligned_cnt;
   VAR_8->vfp_cnt = VAR_9->cpu_stat.vfp_cnt;
   VAR_8->vfp_shortv_cnt = 0;
   VAR_8->data_ex_cnt = VAR_9->cpu_stat.data_ex_cnt;
   VAR_8->instr_ex_cnt = VAR_9->cpu_stat.instr_ex_cnt;

   *VAR_7 = VAR_3;

   return (VAR_2);
  }

 default:
  return (VAR_1);
 }
}
