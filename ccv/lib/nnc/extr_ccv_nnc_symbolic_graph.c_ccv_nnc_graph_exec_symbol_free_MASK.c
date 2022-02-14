
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int exec; } ;
struct TYPE_11__ {TYPE_1__ reuse; TYPE_7__* exec_symbol_info; TYPE_7__* destinations; TYPE_7__* sources; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_t ;
struct TYPE_12__ {int d; TYPE_2__* const graph; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_symbol_t ;
struct TYPE_13__ {int flags; TYPE_7__* outgoings; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_14__ {int rnum; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__* const,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__*,int) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int) ;

void FUNC_5(ccv_nnc_symbolic_graph_t* const VAR_1, const ccv_nnc_graph_exec_symbol_t VAR_2)
{
 FUNC_2(VAR_1 == VAR_2.graph);
 FUNC_2(VAR_2.d < VAR_1->exec_symbol_info->rnum);

 int VAR_3, VAR_4, VAR_5;
 ccv_nnc_graph_exec_symbol_info_t* const VAR_6 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_4(VAR_1->exec_symbol_info, VAR_2.d);
 for (VAR_3 = 0; VAR_3 < VAR_1->exec_symbol_info->rnum; VAR_3++)
  if (VAR_3 != VAR_2.d)
  {
   ccv_nnc_graph_exec_symbol_info_t* const VAR_7 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_4(VAR_1->exec_symbol_info, VAR_3);
   if (VAR_7->outgoings)
    for (VAR_4 = 0; VAR_4 < VAR_7->outgoings->rnum; VAR_4++)
     if (*(int*)FUNC_4(VAR_7->outgoings, VAR_4) == VAR_2.d)
     {
      if (VAR_4 < VAR_7->outgoings->rnum - 1)
       *(int*)FUNC_4(VAR_7->outgoings, VAR_4) = *(int*)FUNC_4(VAR_7->outgoings, VAR_7->outgoings->rnum - 1);
      --VAR_7->outgoings->rnum;
      if (VAR_6->outgoings)
       for (VAR_5 = 0; VAR_5 < VAR_6->outgoings->rnum; VAR_5++)
        FUNC_3(VAR_7->outgoings, *(int*)FUNC_4(VAR_6->outgoings, VAR_5));
      break;
     }
  }

 FUNC_1(VAR_6, 1);
 VAR_6->flags = VAR_0;

 for (VAR_3 = VAR_1->exec_symbol_info->rnum - 1; VAR_3 >= 0; VAR_3--)
  if (!FUNC_0(((ccv_nnc_graph_exec_symbol_info_t*)FUNC_4(VAR_1->exec_symbol_info, VAR_3))->flags))
  {
   VAR_1->exec_symbol_info->rnum = VAR_3 + 1;
   break;
  }

 if (VAR_1->sources)
  for (VAR_3 = 0; VAR_3 < VAR_1->sources->rnum; VAR_3++)
   if (*(int*)FUNC_4(VAR_1->sources, VAR_3) == VAR_2.d)
   {
    if (VAR_3 < VAR_1->sources->rnum - 1)
     *(int*)FUNC_4(VAR_1->sources, VAR_3) = *(int*)FUNC_4(VAR_1->sources, VAR_1->sources->rnum - 1);
    --VAR_1->sources->rnum;
    break;
   }
 if (VAR_1->destinations)
  for (VAR_3 = 0; VAR_3 < VAR_1->destinations->rnum; VAR_3++)
   if (*(int*)FUNC_4(VAR_1->destinations, VAR_3) == VAR_2.d)
   {
    if (VAR_3 < VAR_1->destinations->rnum - 1)
     *(int*)FUNC_4(VAR_1->destinations, VAR_3) = *(int*)FUNC_4(VAR_1->destinations, VAR_1->destinations->rnum - 1);
    --VAR_1->destinations->rnum;
    break;
   }
 if (VAR_2.d < VAR_1->exec_symbol_info->rnum &&
  (VAR_2.d < VAR_1->reuse.exec || VAR_1->reuse.exec < 0))
  VAR_1->reuse.exec = VAR_2.d;
 else if (VAR_1->reuse.exec >= VAR_1->exec_symbol_info->rnum)
  VAR_1->reuse.exec = -1;
}
