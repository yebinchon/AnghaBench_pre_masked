
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ccv_sparse_matrix_vector_t ;
struct TYPE_3__ {int rows; int cols; int type; int major; int prime_index; int size; int refcount; int * vector; int * index; scalar_t__ rnum; } ;
typedef TYPE_1__ ccv_sparse_matrix_t ;
typedef int ccv_sparse_matrix_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;

ccv_sparse_matrix_t* FUNC_2(int VAR_3, int VAR_4, int VAR_5, int VAR_6, uint64_t VAR_7)
{
 ccv_sparse_matrix_t* VAR_8;
 VAR_8 = (ccv_sparse_matrix_t*)FUNC_1(sizeof(ccv_sparse_matrix_t));
 VAR_8->rows = VAR_3;
 VAR_8->cols = VAR_4;
 VAR_8->type = VAR_5 | VAR_1 | ((VAR_5 & VAR_0) ? VAR_0 : VAR_2);
 VAR_8->major = VAR_6;
 VAR_8->prime_index = 1;
 VAR_8->size = 2;
 VAR_8->rnum = 0;
 VAR_8->refcount = 1;
 VAR_8->index = (ccv_sparse_matrix_index_t*)FUNC_0(sizeof(ccv_sparse_matrix_index_t), VAR_8->size);
 VAR_8->vector = (ccv_sparse_matrix_vector_t*)FUNC_1(sizeof(ccv_sparse_matrix_vector_t) * VAR_8->size);
 return VAR_8;
}
