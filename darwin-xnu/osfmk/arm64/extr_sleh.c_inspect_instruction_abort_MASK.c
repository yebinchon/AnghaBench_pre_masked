
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int uint32_t ;
typedef int fault_status_t ;
struct TYPE_3__ {int instr_ex_cnt; } ;
struct TYPE_4__ {TYPE_1__ cpu_stat; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(uint32_t VAR_2, fault_status_t *VAR_3, vm_prot_t *VAR_4)
{
 FUNC_1()->cpu_stat.instr_ex_cnt++;
 *VAR_3 = FUNC_0(VAR_2);
 *VAR_4 = (VAR_1 | VAR_0);
}
