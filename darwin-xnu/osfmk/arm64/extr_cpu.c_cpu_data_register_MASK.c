
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


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

kern_return_t
FUNC_3(cpu_data_t *VAR_4)
{
 int VAR_5 = VAR_4->cpu_number;







 VAR_1[VAR_5].cpu_data_vaddr = VAR_4;
 VAR_1[VAR_5].cpu_data_paddr = (void *)FUNC_1( (vm_offset_t)VAR_4);
 return VAR_2;

}
