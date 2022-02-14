
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ccv_sparse_matrix_vector_t ;
typedef int ccv_sparse_matrix_t ;
struct TYPE_3__ {size_t i; size_t ifbit; } ;
typedef TYPE_1__ ccv_sparse_matrix_index_t ;


 int FUNC_0 (int * const,int const* const) ;
 int FUNC_1 (size_t const,int const) ;

__attribute__((used)) static inline void FUNC_2(ccv_sparse_matrix_index_t* const VAR_0, ccv_sparse_matrix_vector_t* const VAR_1, const ccv_sparse_matrix_t* const VAR_2, uint32_t VAR_3, uint32_t VAR_4, int VAR_5, const uint32_t VAR_6, const int VAR_7)
{
 uint32_t VAR_8 = VAR_0[VAR_4].i;
 VAR_0[VAR_4].i = VAR_5;
 VAR_5 = VAR_8;
 ccv_sparse_matrix_vector_t VAR_9 = VAR_1[VAR_4];
 FUNC_0(VAR_1 + VAR_4, VAR_2);

 ++VAR_3;
 ++VAR_4;
 for (; VAR_3 < 255; ++VAR_4, ++VAR_3)
 {
  if (VAR_4 >= VAR_6)
   VAR_4 = 0;
  if (!VAR_0[VAR_4].ifbit)
  {
   VAR_0[VAR_4].ifbit = VAR_3;
   VAR_0[VAR_4].i = VAR_5;
   VAR_1[VAR_4] = VAR_9;
   return;
  }
  uint32_t VAR_10 = VAR_0[VAR_4].ifbit;
  if (VAR_3 > VAR_10)
  {
   VAR_0[VAR_4].ifbit = VAR_3;
   VAR_3 = VAR_10;
   uint32_t VAR_11 = VAR_0[VAR_4].i;
   VAR_0[VAR_4].i = VAR_5;
   VAR_5 = VAR_11;
   ccv_sparse_matrix_vector_t VAR_12 = VAR_1[VAR_4];
   VAR_1[VAR_4] = VAR_9;
   VAR_9 = VAR_12;
  }
 }
 for (;; ++VAR_4, ++VAR_3)
 {
  if (VAR_4 >= VAR_6)
   VAR_4 = 0;
  if (!VAR_0[VAR_4].ifbit)
  {
   VAR_0[VAR_4].ifbit = VAR_3 > 0xff ? 0xff : VAR_3;
   VAR_0[VAR_4].i = VAR_5;
   VAR_1[VAR_4] = VAR_9;
   return;
  }
  uint32_t VAR_13 = VAR_0[VAR_4].ifbit;
  if (VAR_13 == 0xff)
   VAR_13 = FUNC_1(VAR_0[VAR_4].i + VAR_6 - VAR_4, VAR_7) + 2;
  if (VAR_3 > VAR_13)
  {
   VAR_0[VAR_4].ifbit = VAR_3 > 0xff ? 0xff : VAR_3;
   VAR_3 = VAR_13;
   uint32_t VAR_14 = VAR_0[VAR_4].i;
   VAR_0[VAR_4].i = VAR_5;
   VAR_5 = VAR_14;
   ccv_sparse_matrix_vector_t VAR_15 = VAR_1[VAR_4];
   VAR_1[VAR_4] = VAR_9;
   VAR_9 = VAR_15;
  }
 }
}
