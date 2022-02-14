
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ d; scalar_t__ graph; } ;
typedef TYPE_1__ ccv_nnc_graph_exec_symbol_t ;



__attribute__((used)) static int FUNC_0(ccv_nnc_graph_exec_symbol_t* const VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  ccv_nnc_graph_exec_symbol_t* const VAR_4 = VAR_0 + VAR_2;

  for (VAR_3 = VAR_2 + 1; VAR_3 < VAR_1;)
  {
   ccv_nnc_graph_exec_symbol_t* const VAR_5 = VAR_0 + VAR_3;

   if (VAR_5->d == VAR_4->d && VAR_5->graph == VAR_4->graph)
   {
    if (VAR_3 + 1 < VAR_1)
     *VAR_5 = VAR_0[VAR_1 - 1];
    --VAR_1;
    continue;
   }
   ++VAR_3;
  }
 }
 return VAR_1;
}
