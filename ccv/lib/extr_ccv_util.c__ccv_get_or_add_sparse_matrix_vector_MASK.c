
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ccv_sparse_matrix_vector_t ;
struct TYPE_7__ {int size; int prime_index; int rnum; int * vector; TYPE_2__* index; } ;
typedef TYPE_1__ ccv_sparse_matrix_t ;
struct TYPE_8__ {int ifbit; int i; } ;
typedef TYPE_2__ ccv_sparse_matrix_index_t ;


 int FUNC_0 (int * const,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__* const,int * const,TYPE_1__*,int,int,int,int const,int const) ;
 int FUNC_2 (int,int const) ;

__attribute__((used)) static ccv_sparse_matrix_vector_t* FUNC_3(ccv_sparse_matrix_t* VAR_0, int VAR_1)
{
 const uint32_t VAR_2 = VAR_0->size;
 ccv_sparse_matrix_index_t* const VAR_3 = VAR_0->index;
 ccv_sparse_matrix_vector_t* const VAR_4 = VAR_0->vector;
 const int VAR_5 = VAR_0->prime_index;
 uint32_t VAR_6 = FUNC_2(VAR_1, VAR_5);
 uint32_t VAR_7 = 2;
 for (; VAR_7 < 255; ++VAR_6, ++VAR_7)
 {
  if (VAR_6 >= VAR_2)
   VAR_6 = 0;
  uint32_t VAR_8 = VAR_3[VAR_6].ifbit;
  if (VAR_7 > VAR_8)
  {
   ++VAR_0->rnum;
   VAR_3[VAR_6].ifbit = VAR_7;
   if (!VAR_8)
   {
    VAR_3[VAR_6].i = VAR_1;
    FUNC_0(VAR_4 + VAR_6, VAR_0);
   } else
    FUNC_1(VAR_3, VAR_4, VAR_0, VAR_8 , VAR_6, VAR_1, VAR_2, VAR_5);
   return VAR_4 + VAR_6;
  }
  if (VAR_3[VAR_6].i == VAR_1)
   return VAR_4 + VAR_6;
 }

 for (;; ++VAR_6, ++VAR_7)
 {
  if (VAR_6 >= VAR_2)
   VAR_6 = 0;
  uint32_t VAR_9 = VAR_3[VAR_6].ifbit;
  if (VAR_9 == 0xff)
   VAR_9 = FUNC_2(VAR_3[VAR_6].i + VAR_2 - VAR_6, VAR_5) + 2;
  if (VAR_7 > VAR_9)
  {
   ++VAR_0->rnum;
   VAR_3[VAR_6].ifbit = VAR_7 > 0xff ? 0xff : VAR_7;
   if (!VAR_9)
   {
    VAR_3[VAR_6].i = VAR_1;
    FUNC_0(VAR_4 + VAR_6, VAR_0);
   } else
    FUNC_1(VAR_3, VAR_4, VAR_0, VAR_9 , VAR_6, VAR_1, VAR_2, VAR_5);
   return VAR_4 + VAR_6;
  }
  if (VAR_3[VAR_6].i == VAR_1)
   return VAR_4 + VAR_6;
 }
 return 0;
}
