
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
typedef int (* ccv_cnnp_state_initializer_f ) (void* const,int ,int ,int ,int ,int const) ;
struct TYPE_2__ {int flags; int hint; int cmd; } ;
typedef TYPE_1__ ccv_cnnp_cmd_exec_io_set_by_t ;



__attribute__((used)) static void FUNC_0(const ccv_nnc_tensor_symbol_t VAR_0, const ccv_cnnp_state_initializer_f VAR_1, void* const VAR_2, void* const VAR_3)
{
 const ccv_cnnp_cmd_exec_io_set_by_t* const VAR_4 = (ccv_cnnp_cmd_exec_io_set_by_t*)VAR_3;
 VAR_1(VAR_2, VAR_4->cmd, VAR_4->hint, VAR_4->flags, 0, VAR_0);
}
