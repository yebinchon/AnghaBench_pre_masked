
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const ccv_nnc_symbolic_graph_t ;
struct TYPE_4__ {int rnum; } ;
typedef TYPE_1__ ccv_array_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const* const,int) ;

__attribute__((used)) static int FUNC_1(const ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_array_t* const VAR_1)
{
 if (!VAR_0)
  return -1;
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->rnum; VAR_2++)
  if (*(ccv_nnc_symbolic_graph_t**)FUNC_0(VAR_1, VAR_2) == VAR_0)
   return VAR_2;
 return -1;
}
