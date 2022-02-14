
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ d; TYPE_2__* graph; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_t ;
struct TYPE_8__ {struct TYPE_8__* p; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__* const,TYPE_1__ const,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(ccv_nnc_symbolic_graph_t* const VAR_2, const ccv_nnc_tensor_symbol_t VAR_3)
{
 if (VAR_3.d >= 0)
  return VAR_3.graph != VAR_2 ? FUNC_1(VAR_2, VAR_3, VAR_1) : VAR_3.d;
 if (VAR_3.graph == VAR_2 || VAR_3.d == VAR_0)
  return VAR_3.d;
 ccv_nnc_symbolic_graph_t* VAR_4 = VAR_2;
 int VAR_5;
 for (VAR_5 = 0; VAR_4 && VAR_4 != VAR_3.graph; VAR_5++)
  VAR_4 = VAR_4->p;
 FUNC_2(VAR_4 == VAR_3.graph);
 return FUNC_0(VAR_5);
}
