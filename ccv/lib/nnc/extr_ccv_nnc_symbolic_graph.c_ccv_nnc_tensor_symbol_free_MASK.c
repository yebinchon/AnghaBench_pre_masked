
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int d; TYPE_4__* const graph; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_t ;
struct TYPE_10__ {int flags; scalar_t__ name; scalar_t__ s_ref; } ;
typedef TYPE_3__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_8__ {int tensor; } ;
struct TYPE_11__ {TYPE_1__ reuse; TYPE_7__* tensor_symbol_info; } ;
typedef TYPE_4__ ccv_nnc_symbolic_graph_t ;
struct TYPE_12__ {int rnum; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int) ;

void FUNC_5(ccv_nnc_symbolic_graph_t* const VAR_1, ccv_nnc_tensor_symbol_t VAR_2)
{
 FUNC_1(VAR_1 == VAR_2.graph);
 FUNC_1(VAR_2.d < VAR_1->tensor_symbol_info->rnum);
 ccv_nnc_tensor_symbol_info_t* const VAR_3 = (ccv_nnc_tensor_symbol_info_t*)FUNC_4(VAR_1->tensor_symbol_info, VAR_2.d);
 if (VAR_3->s_ref)
 {
  FUNC_3(VAR_3->s_ref);
  VAR_3->s_ref = 0;
 }
 if (VAR_3->name)
 {
  FUNC_2(VAR_3->name);
  VAR_3->name = 0;
 }
 VAR_3->flags |= VAR_0;
 int VAR_4;
 for (VAR_4 = VAR_1->tensor_symbol_info->rnum - 1; VAR_4 >= 0; VAR_4--)
  if (!FUNC_0(((ccv_nnc_tensor_symbol_info_t*)FUNC_4(VAR_1->tensor_symbol_info, VAR_4))->flags))
  {
   VAR_1->tensor_symbol_info->rnum = VAR_4 + 1;
   break;
  }
 if (VAR_2.d < VAR_1->tensor_symbol_info->rnum &&
  (VAR_2.d < VAR_1->reuse.tensor || VAR_1->reuse.tensor < 0))
  VAR_1->reuse.tensor = VAR_2.d;
 else if (VAR_1->reuse.tensor >= VAR_1->tensor_symbol_info->rnum)
  VAR_1->reuse.tensor = -1;
}
