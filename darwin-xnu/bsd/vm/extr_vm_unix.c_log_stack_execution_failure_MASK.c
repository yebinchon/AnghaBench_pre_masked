
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t vm_prot_t ;
typedef int addr64_t ;
struct TYPE_2__ {char* p_comm; int p_pid; } ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,char*,int,int ,int ) ;
 int * VAR_1 ;

void
FUNC_2(addr64_t VAR_2, vm_prot_t VAR_3)
{
 FUNC_1("Data/Stack execution not permitted: %s[pid %d] at virtual address 0x%qx, protections were %s\n",
  FUNC_0()->p_comm, FUNC_0()->p_pid, VAR_2, VAR_1[VAR_3 & VAR_0]);
}
