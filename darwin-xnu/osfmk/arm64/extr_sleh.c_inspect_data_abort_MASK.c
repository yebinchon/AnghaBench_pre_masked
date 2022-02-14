
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int uint32_t ;
typedef int fault_status_t ;
struct TYPE_3__ {int data_ex_cnt; } ;
struct TYPE_4__ {TYPE_1__ cpu_stat; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(uint32_t VAR_4, fault_status_t *VAR_5, vm_prot_t *VAR_6)
{
 FUNC_1()->cpu_stat.data_ex_cnt++;
 *VAR_5 = FUNC_0(VAR_4);


 if ((VAR_4 & VAR_1) && !(VAR_4 & VAR_0)) {
  *VAR_6 = (VAR_2 | VAR_3);
 } else {
  *VAR_6 = (VAR_2);
 }
}
