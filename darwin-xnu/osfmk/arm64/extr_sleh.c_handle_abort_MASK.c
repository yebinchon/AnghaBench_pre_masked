
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int fault_status_t ;
typedef int arm_saved_state_t ;
typedef int (* abort_inspector_t ) (int ,int *,int *) ;
typedef int (* abort_handler_t ) (int *,int ,int ,int ,int ,int ) ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(arm_saved_state_t *VAR_0, uint32_t VAR_1, vm_offset_t VAR_2, vm_offset_t VAR_3,
    abort_inspector_t VAR_4, abort_handler_t VAR_5)
{
 fault_status_t VAR_6;
 vm_prot_t VAR_7;

 VAR_4(FUNC_0(VAR_1), &VAR_6, &VAR_7);
 VAR_5(VAR_0, VAR_1, VAR_2, VAR_6, VAR_7, VAR_3);
}
