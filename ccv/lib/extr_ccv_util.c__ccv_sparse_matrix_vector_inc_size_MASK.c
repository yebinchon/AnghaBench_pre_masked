
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int prime_index; int size; TYPE_3__* index; } ;
typedef TYPE_1__ ccv_sparse_matrix_vector_t ;
struct TYPE_9__ {int type; } ;
typedef TYPE_2__ ccv_sparse_matrix_t ;
struct TYPE_10__ {int ifbit; int i; } ;
typedef TYPE_3__ ccv_sparse_matrix_index_t ;
typedef int _ccv_sparse_prime ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const,int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,size_t const) ;
 int FUNC_7 (TYPE_3__*,int*,size_t const) ;
 int FUNC_8 (int * const,int ,size_t const) ;

__attribute__((used)) static void FUNC_9(const ccv_sparse_matrix_t* const VAR_0, ccv_sparse_matrix_vector_t* const VAR_1)
{
 FUNC_5(VAR_1->prime_index >= 0 && VAR_1->prime_index < sizeof(_ccv_sparse_prime) / sizeof(int));
 const uint32_t VAR_2 = VAR_1->size;
 const int VAR_3 = VAR_1->prime_index = FUNC_3(VAR_2 * 2);
 const uint32_t VAR_4 = VAR_1->size = FUNC_4(VAR_1->prime_index);
 FUNC_5(VAR_1->prime_index >= 0 && VAR_1->prime_index < sizeof(_ccv_sparse_prime) / sizeof(int));
 const size_t VAR_5 = (FUNC_1(VAR_0->type) * FUNC_0(VAR_0->type) + 3) & -4;
 const size_t VAR_6 = sizeof(ccv_sparse_matrix_index_t) + VAR_5;
 const size_t VAR_7 = VAR_5 / sizeof(uint32_t);
 VAR_1->index = (ccv_sparse_matrix_index_t*)FUNC_6(VAR_1->index, VAR_6 * VAR_4);
 uint8_t* const VAR_8 = (uint8_t*)VAR_1->index;
 FUNC_8(VAR_8 + VAR_6 * VAR_2, 0, VAR_6 * (VAR_4 - VAR_2));
 uint32_t VAR_9, VAR_10;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
 {
  ccv_sparse_matrix_index_t* VAR_11 = (ccv_sparse_matrix_index_t*)(VAR_8 + VAR_6 * VAR_9);
  VAR_11->ifbit = !!VAR_11->ifbit;
 }
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
 {
  ccv_sparse_matrix_index_t* VAR_12 = (ccv_sparse_matrix_index_t*)(VAR_8 + VAR_6 * VAR_9);
  if (VAR_12->ifbit == 1)
  {
   VAR_12->ifbit = 0;

   uint32_t VAR_13 = VAR_12->i;
   uint32_t* VAR_14 = (uint32_t*)(VAR_12 + 1);
   uint32_t VAR_15 = 2;
   uint32_t VAR_16 = FUNC_2(VAR_13, VAR_3);
   for (; VAR_15 < 255; ++VAR_16, ++VAR_15)
   {
    if (VAR_16 >= VAR_4)
     VAR_16 = 0;
    ccv_sparse_matrix_index_t* VAR_17 = (ccv_sparse_matrix_index_t*)(VAR_8 + VAR_6 * VAR_16);
    uint32_t VAR_18 = VAR_17->ifbit;
    if (!VAR_18)
    {
     VAR_17->ifbit = VAR_15;
     VAR_17->i = VAR_13;
     FUNC_7(VAR_17 + 1, VAR_14, VAR_5);
     break;
    }
    if (VAR_15 <= VAR_18)
     continue;
    VAR_17->ifbit = VAR_15;
    uint32_t VAR_19 = VAR_17->i;
    VAR_17->i = VAR_13;
    VAR_13 = VAR_19;
    uint32_t* VAR_20 = (uint32_t*)(VAR_17 + 1);
    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
    {
     uint32_t VAR_21 = VAR_20[VAR_10];
     VAR_20[VAR_10] = VAR_14[VAR_10];
     VAR_14[VAR_10] = VAR_21;
    }
    if (VAR_18 != 1)
     VAR_15 = VAR_18;
    else {
     VAR_16 = FUNC_2(VAR_13, VAR_3) - 1;
     VAR_15 = 1;
    }
   }
   if (VAR_15 < 255)
    continue;
   for (;; ++VAR_16, ++VAR_15)
   {
    if (VAR_16 >= VAR_4)
     VAR_16 = 0;
    ccv_sparse_matrix_index_t* VAR_22 = (ccv_sparse_matrix_index_t*)(VAR_8 + VAR_6 * VAR_16);
    uint32_t VAR_23 = VAR_22->ifbit;
    if (!VAR_23)
    {
     VAR_22->ifbit = VAR_15 > 0xff ? 0xff : VAR_15;
     VAR_22->i = VAR_13;
     FUNC_7(VAR_22 + 1, VAR_14, VAR_5);
     break;
    }
    if (VAR_23 == 0xff)
     VAR_23 = FUNC_2((VAR_22->i + VAR_4 - VAR_16), VAR_3) + 2;
    if (VAR_15 <= VAR_23)
     continue;
    VAR_22->ifbit = VAR_15 > 0xff ? 0xff : VAR_15;
    uint32_t VAR_24 = VAR_22->i;
    VAR_22->i = VAR_13;
    VAR_13 = VAR_24;
    uint32_t* VAR_25 = (uint32_t*)(VAR_22 + 1);
    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
    {
     uint32_t VAR_26 = VAR_25[VAR_10];
     VAR_25[VAR_10] = VAR_14[VAR_10];
     VAR_14[VAR_10] = VAR_26;
    }
    if (VAR_23 != 1)
     VAR_15 = VAR_23;
    else {
     VAR_16 = FUNC_2(VAR_13, VAR_3) - 1;
     VAR_15 = 1;
    }
   }
  }
 }
}
