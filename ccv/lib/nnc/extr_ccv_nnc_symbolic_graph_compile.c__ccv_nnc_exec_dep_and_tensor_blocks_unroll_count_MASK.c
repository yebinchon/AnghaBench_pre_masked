
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ccv_sparse_matrix_t ;
struct TYPE_13__ {int assign_ref; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_14__ {int ref; int companion_ref; } ;
typedef TYPE_3__ ccv_nnc_tensor_block_t ;
struct TYPE_15__ {TYPE_1__* tensor_symbol_info; } ;
typedef TYPE_4__ ccv_nnc_symbolic_graph_t ;
struct TYPE_12__ {int rnum; } ;


 scalar_t__ FUNC_0 (TYPE_3__) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (int const* const,TYPE_3__,TYPE_3__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(const ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_tensor_symbol_info_t* const VAR_1, const ccv_sparse_matrix_t* const VAR_2, ccv_nnc_tensor_block_t* const VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0->tensor_symbol_info->rnum; VAR_4++)
  if (!FUNC_1(VAR_3[VAR_4]) && VAR_1[VAR_4].assign_ref)
  {

   FUNC_3(VAR_3[VAR_4].ref || FUNC_0(VAR_3[VAR_4]));
   const int VAR_7 = VAR_1[VAR_4].assign_ref - 1;

   FUNC_3(VAR_3[VAR_7].ref || FUNC_0(VAR_3[VAR_7]));


   int VAR_8 = VAR_4;
   while (VAR_3[VAR_8].ref)
    VAR_8 = VAR_3[VAR_8].ref - 1;
   int VAR_9 = VAR_7;
   while (VAR_3[VAR_9].ref)
    VAR_9 = VAR_3[VAR_9].ref - 1;
   if (VAR_8 != VAR_9)
   {


    int VAR_10 = FUNC_2(VAR_2, VAR_3[VAR_9], VAR_3[VAR_8]);
    int VAR_11 = FUNC_2(VAR_2, VAR_3[VAR_8], VAR_3[VAR_9]);

    FUNC_3(!(VAR_10 > 0 && VAR_11 > 0));


    if (VAR_10 || VAR_11)
    {
     VAR_3[VAR_8].companion_ref = VAR_9 + 1;
     VAR_3[VAR_9].companion_ref = VAR_8 + 1;
     continue;
    }
    int VAR_12 = VAR_1[VAR_9].assign_ref - 1;
    for (VAR_5 = 0; VAR_12 >= 0; VAR_5++)
    {
     while (VAR_3[VAR_12].ref)
      VAR_12 = VAR_3[VAR_12].ref - 1;
     VAR_12 = VAR_1[VAR_12].assign_ref - 1;
    }
    VAR_6 = FUNC_4(VAR_6, VAR_5 + 1);
   }
  }

 if (VAR_6)
  for (VAR_5 = 0; VAR_5 < VAR_0->tensor_symbol_info->rnum; VAR_5++)
   VAR_3[VAR_5].companion_ref = 0;
 return VAR_6;
}
