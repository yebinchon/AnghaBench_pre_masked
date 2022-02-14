
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int * u8; } ;
struct TYPE_7__ {int size; int prime_index; int * index; scalar_t__ rnum; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_sparse_matrix_vector_t ;
struct TYPE_8__ {int type; scalar_t__ major; int rows; int cols; } ;
typedef TYPE_3__ ccv_sparse_matrix_t ;
typedef int ccv_sparse_matrix_index_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,size_t const) ;

__attribute__((used)) static void FUNC_3(ccv_sparse_matrix_vector_t* VAR_2, const ccv_sparse_matrix_t* const VAR_3)
{
 if (VAR_3->type & VAR_0)
 {
  const int VAR_4 = (VAR_3->major == VAR_1) ? VAR_3->rows : VAR_3->cols;
  const size_t VAR_5 = FUNC_1(VAR_3->type) * FUNC_0(VAR_3->type);
  VAR_2->size = VAR_4;
  VAR_2->data.u8 = (uint8_t*)FUNC_2(1, (VAR_5 * VAR_4 + 15) & -16);
  return;
 }
 VAR_2->prime_index = 1;
 VAR_2->size = 2;
 VAR_2->rnum = 0;
 const size_t VAR_6 = (FUNC_1(VAR_3->type) * FUNC_0(VAR_3->type) + 3) & -4;
 VAR_2->index = (ccv_sparse_matrix_index_t*)FUNC_2(sizeof(ccv_sparse_matrix_index_t) + VAR_6, VAR_2->size);
}
