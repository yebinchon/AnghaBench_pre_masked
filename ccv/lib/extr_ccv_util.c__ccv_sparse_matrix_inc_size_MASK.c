
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int ifbit; int i; } ;
typedef TYPE_1__ ccv_sparse_matrix_vector_t ;
struct TYPE_8__ {int prime_index; int size; TYPE_1__* vector; TYPE_1__* index; } ;
typedef TYPE_2__ ccv_sparse_matrix_t ;
typedef TYPE_1__ ccv_sparse_matrix_index_t ;
typedef int _ccv_sparse_prime ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__* const,int ,int) ;

__attribute__((used)) static void FUNC_6(ccv_sparse_matrix_t* VAR_0)
{
 FUNC_3(VAR_0->prime_index >= 0 && VAR_0->prime_index < sizeof(_ccv_sparse_prime) / sizeof(int));
 const uint32_t VAR_1 = VAR_0->size;
 const int VAR_2 = VAR_0->prime_index = FUNC_1(VAR_1 * 2);
 const uint32_t VAR_3 = VAR_0->size = FUNC_2(VAR_0->prime_index);
 FUNC_3(VAR_0->prime_index >= 0 && VAR_0->prime_index < sizeof(_ccv_sparse_prime) / sizeof(int));
 ccv_sparse_matrix_index_t* const VAR_4 = VAR_0->index = (ccv_sparse_matrix_index_t*)FUNC_4(VAR_0->index, sizeof(ccv_sparse_matrix_index_t) * VAR_3);
 FUNC_5(VAR_4 + VAR_1, 0, sizeof(ccv_sparse_matrix_index_t) * (VAR_3 - VAR_1));
 ccv_sparse_matrix_vector_t* const VAR_5 = VAR_0->vector = (ccv_sparse_matrix_vector_t*)FUNC_4(VAR_0->vector, sizeof(ccv_sparse_matrix_vector_t) * VAR_3);
 uint32_t VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_4[VAR_6].ifbit = !!VAR_4[VAR_6].ifbit;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if (VAR_4[VAR_6].ifbit == 1)
  {
   VAR_4[VAR_6].ifbit = 0;

   uint32_t VAR_7 = VAR_4[VAR_6].i;
   ccv_sparse_matrix_vector_t VAR_8 = VAR_5[VAR_6];
   uint32_t VAR_9 = 2;
   uint32_t VAR_10 = FUNC_0(VAR_7, VAR_2);
   for (; VAR_9 < 255; ++VAR_10, ++VAR_9)
   {
    if (VAR_10 >= VAR_3)
     VAR_10 = 0;
    uint32_t VAR_11 = VAR_4[VAR_10].ifbit;
    if (!VAR_11)
    {
     VAR_4[VAR_10].ifbit = VAR_9;
     VAR_4[VAR_10].i = VAR_7;
     VAR_5[VAR_10] = VAR_8;
     break;
    }
    if (VAR_9 <= VAR_11)
     continue;
    VAR_4[VAR_10].ifbit = VAR_9;
    uint32_t VAR_12 = VAR_4[VAR_10].i;
    VAR_4[VAR_10].i = VAR_7;
    VAR_7 = VAR_12;
    ccv_sparse_matrix_vector_t VAR_13 = VAR_5[VAR_10];
    VAR_5[VAR_10] = VAR_8;
    VAR_8 = VAR_13;
    if (VAR_11 != 1)
     VAR_9 = VAR_11;
    else {
     VAR_10 = FUNC_0(VAR_7, VAR_2) - 1;
     VAR_9 = 1;
    }
   }
   if (VAR_9 < 255)
    continue;
   for (;; ++VAR_10, ++VAR_9)
   {
    if (VAR_10 >= VAR_3)
     VAR_10 = 0;
    uint32_t VAR_14 = VAR_4[VAR_10].ifbit;
    if (!VAR_14)
    {
     VAR_4[VAR_10].ifbit = VAR_9 > 0xff ? 0xff : VAR_9;
     VAR_4[VAR_10].i = VAR_7;
     VAR_5[VAR_10] = VAR_8;
     break;
    }
    if (VAR_14 == 0xff)
     VAR_14 = FUNC_0((VAR_4[VAR_10].i + VAR_3 - VAR_10), VAR_2) + 2;
    if (VAR_9 <= VAR_14)
     continue;
    VAR_4[VAR_10].ifbit = VAR_9 > 0xff ? 0xff : VAR_9;
    uint32_t VAR_15 = VAR_4[VAR_10].i;
    VAR_4[VAR_10].i = VAR_7;
    VAR_7 = VAR_15;
    ccv_sparse_matrix_vector_t VAR_16 = VAR_5[VAR_10];
    VAR_5[VAR_10] = VAR_8;
    VAR_8 = VAR_16;
    if (VAR_14 != 1)
     VAR_9 = VAR_14;
    else {
     VAR_10 = FUNC_0(VAR_7, VAR_2) - 1;
     VAR_9 = 1;
    }
   }
  }
}
