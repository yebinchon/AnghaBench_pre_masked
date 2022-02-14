
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int * u8; } ;
struct TYPE_10__ {int size; int prime_index; scalar_t__ index; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_sparse_matrix_vector_t ;
struct TYPE_11__ {int type; } ;
typedef TYPE_3__ ccv_sparse_matrix_t ;
struct TYPE_12__ {int ifbit; int i; } ;
typedef TYPE_4__ ccv_sparse_matrix_index_t ;
struct TYPE_13__ {int * u8; } ;
typedef TYPE_5__ ccv_numeric_data_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const,int const) ;

ccv_numeric_data_t FUNC_3(const ccv_sparse_matrix_t* VAR_1, ccv_sparse_matrix_vector_t* VAR_2, int VAR_3)
{
 ccv_numeric_data_t VAR_4 = {};
 const size_t VAR_5 = FUNC_1(VAR_1->type) * FUNC_0(VAR_1->type);
 if (VAR_1->type & VAR_0)
 {
  VAR_4.u8 = VAR_2->data.u8 + VAR_5 * VAR_3;
  return VAR_4;
 }
 const size_t VAR_6 = (FUNC_1(VAR_1->type) * FUNC_0(VAR_1->type) + 3) & -4;
 const size_t VAR_7 = sizeof(ccv_sparse_matrix_index_t) + VAR_6;
 const uint32_t VAR_8 = VAR_2->size;
 uint8_t* const VAR_9 = (uint8_t*)VAR_2->index;
 const int VAR_10 = VAR_2->prime_index;
 uint32_t VAR_11 = FUNC_2(VAR_3, VAR_10);
 uint32_t VAR_12 = 2;
 for (; VAR_12 < 255; ++VAR_11, ++VAR_12)
 {
  if (VAR_11 >= VAR_8)
   VAR_11 = 0;
  ccv_sparse_matrix_index_t* const VAR_13 = (ccv_sparse_matrix_index_t*)(VAR_9 + VAR_7 * VAR_11);
  if (VAR_12 > VAR_13->ifbit)
   return VAR_4;
  if (VAR_13->i == VAR_3)
  {
   VAR_4.u8 = (uint8_t*)(VAR_13 + 1);
   return VAR_4;
  }
 }

 for (;; ++VAR_11, ++VAR_12)
 {
  if (VAR_11 >= VAR_8)
   VAR_11 = 0;
  ccv_sparse_matrix_index_t* const VAR_14 = (ccv_sparse_matrix_index_t*)(VAR_9 + VAR_7 * VAR_11);
  uint32_t VAR_15 = VAR_14->ifbit;
  if (VAR_15 == 0xff)
   VAR_15 = FUNC_2(VAR_14->i + VAR_8 - VAR_11, VAR_10) + 2;
  if (VAR_12 > VAR_15)
   return VAR_4;
  if (VAR_14->i == VAR_3)
  {
   VAR_4.u8 = (uint8_t*)(VAR_14 + 1);
   return VAR_4;
  }
 }
}
