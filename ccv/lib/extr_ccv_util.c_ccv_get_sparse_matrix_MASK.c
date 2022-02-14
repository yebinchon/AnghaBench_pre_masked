
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_sparse_matrix_t ;
typedef int ccv_matrix_t ;


 int VAR_0 ;

ccv_sparse_matrix_t* FUNC_0(ccv_matrix_t* VAR_1)
{
 int VAR_2 = *(int*)VAR_1;
 if (VAR_2 & VAR_0)
  return (ccv_sparse_matrix_t*)VAR_1;
 return 0;
}
