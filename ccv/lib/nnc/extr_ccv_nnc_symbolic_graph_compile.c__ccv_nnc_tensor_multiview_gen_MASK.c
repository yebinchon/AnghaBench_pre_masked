
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_tensor_arena_t ;
struct TYPE_5__ {struct TYPE_5__* p; int dup_tensor_block_ref; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_prep_t ;
typedef int ccv_array_t ;


 int FUNC_0 (int * const,int const,int const,int const,TYPE_1__ const**,TYPE_1__ const* const,int const,int*,int ,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int FUNC_3(ccv_array_t* const VAR_0, const int VAR_1, const int VAR_2, const ccv_nnc_tensor_param_t VAR_3, const ccv_nnc_symbolic_graph_prep_t* const VAR_4, const ccv_nnc_tensor_arena_t* const VAR_5, const int VAR_6)
{

 const ccv_nnc_symbolic_graph_prep_t* VAR_7 = VAR_4;
 int VAR_8;
 for (VAR_8 = 1; VAR_7->p; VAR_8++)
  VAR_7 = VAR_7->p;

 FUNC_1(!VAR_7->dup_tensor_block_ref);
 const int VAR_9 = VAR_8;
 const ccv_nnc_symbolic_graph_prep_t* VAR_10[VAR_9];
 VAR_7 = VAR_4;
 VAR_10[VAR_9 - 1] = VAR_7;
 for (VAR_8 = 0; VAR_7->p; VAR_8++)
  VAR_10[VAR_9 - 2 - VAR_8] = VAR_7 = VAR_7->p;
 int VAR_11[VAR_9];
 FUNC_2(VAR_11, 0, sizeof(int) * VAR_9);
 int VAR_12 = 0;
 FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2, VAR_10, VAR_4, VAR_6, VAR_11, 0, &VAR_12);
 FUNC_1(VAR_11[VAR_9 - 1] == 0);
 FUNC_1(VAR_12 > 0);
 return VAR_12;
}
