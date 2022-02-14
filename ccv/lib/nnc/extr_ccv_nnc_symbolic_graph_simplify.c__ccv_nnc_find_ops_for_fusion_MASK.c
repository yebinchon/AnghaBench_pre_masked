
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_8__ {scalar_t__* ops_seq; int ops_seq_size; } ;
typedef TYPE_2__ ccv_nnc_ops_fusion_t ;
struct TYPE_7__ {scalar_t__ cmd; } ;
struct TYPE_9__ {TYPE_4__* outgoings; TYPE_1__ cmd; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_10__ {int rnum; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_1(const ccv_nnc_ops_fusion_t* const VAR_0, const int VAR_1, const ccv_nnc_graph_exec_symbol_info_t* const VAR_2, const uint32_t* const VAR_3, const int VAR_4, int* const VAR_5)
{
 if (VAR_3[VAR_4 >> 5] & (1u << (VAR_4 & 0x1f)))
  return 0;
 const ccv_nnc_graph_exec_symbol_info_t* const VAR_6 = VAR_2 + VAR_4;

 if (VAR_0->ops_seq[VAR_1] != VAR_6->cmd.cmd)
  return 0;
 VAR_5[VAR_1] = VAR_4;

 if (VAR_1 == VAR_0->ops_seq_size - 1)
  return 1;

 if (!VAR_6->outgoings || !VAR_6->outgoings->rnum)
  return 0;
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_6->outgoings->rnum; VAR_7++)
  if (FUNC_1(VAR_0, VAR_1 + 1, VAR_2, VAR_3, *(int*)FUNC_0(VAR_6->outgoings, VAR_7), VAR_5))
   return 1;
 return 0;
}
