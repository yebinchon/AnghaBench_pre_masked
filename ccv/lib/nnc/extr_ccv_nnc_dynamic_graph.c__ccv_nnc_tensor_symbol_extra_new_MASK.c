
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* ccv_nnc_tensor_variable_t ;
struct TYPE_11__ {scalar_t__ tensor_view; scalar_t__ destinations; scalar_t__ sources; int index; int type; } ;
typedef TYPE_2__ ccv_nnc_tensor_variable_graph_bind_t ;
struct TYPE_12__ {int d; } ;
typedef TYPE_3__ ccv_nnc_tensor_symbol_t ;
struct TYPE_13__ {TYPE_5__* binds; } ;
typedef TYPE_4__ ccv_nnc_dynamic_graph_t ;
struct TYPE_14__ {int rnum; } ;
struct TYPE_10__ {int index; int type; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_3(ccv_nnc_dynamic_graph_t* const VAR_1, const ccv_nnc_tensor_variable_t VAR_2, const ccv_nnc_tensor_symbol_t VAR_3)
{
 if (VAR_3.d >= VAR_1->binds->rnum)
 {
  const int VAR_4 = VAR_1->binds->rnum;
  FUNC_2(VAR_1->binds, VAR_3.d + 1);
  int VAR_5;
  for (VAR_5 = VAR_4; VAR_5 < VAR_1->binds->rnum; VAR_5++)
   ((ccv_nnc_tensor_variable_graph_bind_t*)FUNC_1(VAR_1->binds, VAR_5))->index = VAR_0;
 }
 ccv_nnc_tensor_variable_graph_bind_t* const VAR_6 = (ccv_nnc_tensor_variable_graph_bind_t*)FUNC_1(VAR_1->binds, VAR_3.d);
 VAR_6->type = VAR_2->type;
 VAR_6->index = VAR_2->index;
 if (VAR_6->sources)
  FUNC_0(VAR_6->sources);
 VAR_6->sources = 0;
 if (VAR_6->destinations)
  FUNC_0(VAR_6->destinations);
 VAR_6->destinations = 0;
 VAR_6->tensor_view = 0;
}
