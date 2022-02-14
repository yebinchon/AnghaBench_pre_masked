
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ccv_nnc_stream_context_t ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_1__ ccv_nnc_stateful_exec_t ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_2__ ccv_nnc_cmd_t ;
typedef int ccv_cnnp_model_t ;


 int FUNC_0 (int * const,int * const) ;
 int FUNC_1 (int * const,TYPE_2__ const,int ,int ) ;

__attribute__((used)) static void FUNC_2(const ccv_nnc_cmd_t VAR_0, const ccv_nnc_cmd_t VAR_1, ccv_nnc_stream_context_t* const VAR_2)
{
 ccv_nnc_stateful_exec_t* const VAR_3 = (ccv_nnc_stateful_exec_t*)VAR_0.data;
 ccv_cnnp_model_t* const VAR_4 = (ccv_cnnp_model_t*)VAR_3->data;
 FUNC_1(VAR_4, VAR_1, 0, 0);
 FUNC_0(VAR_4, VAR_2);
}
