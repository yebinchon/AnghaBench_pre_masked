
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int cpu_number; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_5__ {void* cpu_data_paddr; TYPE_1__* cpu_data_vaddr; } ;
typedef int SInt32 ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;

kern_return_t
FUNC_2(cpu_data_t *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0((SInt32*)&VAR_4);
 if (VAR_4 > VAR_3) {
  return VAR_1;
 }

 VAR_5->cpu_number = VAR_6;
 VAR_0[VAR_6].cpu_data_vaddr = VAR_5;
 VAR_0[VAR_6].cpu_data_paddr = (void *)FUNC_1( (vm_offset_t)VAR_5);
 return VAR_2;
}
