
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ccv_sparse_matrix_vector_t ;
struct TYPE_4__ {int size; int prime_index; int * vector; TYPE_2__* index; } ;
typedef TYPE_1__ ccv_sparse_matrix_t ;
struct TYPE_5__ {int ifbit; int i; } ;
typedef TYPE_2__ ccv_sparse_matrix_index_t ;


 int FUNC_0 (int const,int const) ;

ccv_sparse_matrix_vector_t* FUNC_1(const ccv_sparse_matrix_t* VAR_0, int VAR_1)
{
 const uint32_t VAR_2 = VAR_0->size;
 ccv_sparse_matrix_index_t* VAR_3 = VAR_0->index;
 ccv_sparse_matrix_vector_t* VAR_4 = VAR_0->vector;
 const int VAR_5 = VAR_0->prime_index;
 uint32_t VAR_6 = FUNC_0(VAR_1, VAR_5);
 uint32_t VAR_7 = 2;
 for (; VAR_7 < 255; ++VAR_6, ++VAR_7)
 {
  if (VAR_6 >= VAR_2)
   VAR_6 = 0;
  if (VAR_7 > VAR_3[VAR_6].ifbit)
   return 0;
  if (VAR_3[VAR_6].i == VAR_1)
   return VAR_4 + VAR_6;
 }

 for (;; ++VAR_6, ++VAR_7)
 {
  if (VAR_6 >= VAR_2)
   VAR_6 = 0;
  uint32_t VAR_8 = VAR_3[VAR_6].ifbit;
  if (VAR_8 == 0xff)
   VAR_8 = FUNC_0(VAR_3[VAR_6].i + VAR_2 - VAR_6, VAR_5) + 2;
  if (VAR_7 > VAR_8)
   return 0;
  if (VAR_3[VAR_6].i == VAR_1)
   return VAR_4 + VAR_6;
 }
 return 0;
}
