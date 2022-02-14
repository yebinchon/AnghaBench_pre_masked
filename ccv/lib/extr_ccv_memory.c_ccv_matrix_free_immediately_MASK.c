
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* u8; } ;
struct TYPE_9__ {int size; scalar_t__ refcount; struct TYPE_9__* vector; TYPE_2__ data; TYPE_1__* index; } ;
typedef TYPE_3__ ccv_sparse_matrix_t ;
typedef int ccv_matrix_t ;
typedef TYPE_3__ ccv_dense_matrix_t ;
typedef TYPE_3__ ccv_compressed_sparse_matrix_t ;
struct TYPE_7__ {scalar_t__ ifbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(ccv_matrix_t* VAR_5)
{
 int VAR_6 = *(int*)VAR_5;
 FUNC_0(!(VAR_6 & VAR_4));
 if (VAR_6 & VAR_2)
 {
  ccv_dense_matrix_t* VAR_7 = (ccv_dense_matrix_t*)VAR_5;
  VAR_7->refcount = 0;
  FUNC_1(VAR_7);
 } else if (VAR_6 & VAR_3) {
  ccv_sparse_matrix_t* VAR_8 = (ccv_sparse_matrix_t*)VAR_5;
  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_8->size; VAR_9++)
   if (VAR_8->index[VAR_9].ifbit)
    FUNC_1(VAR_8->vector[VAR_9].data.u8);
  FUNC_1(VAR_8->vector);
  FUNC_1(VAR_8);
 } else if ((VAR_6 & VAR_1) || (VAR_6 & VAR_0)) {
  ccv_compressed_sparse_matrix_t* VAR_10 = (ccv_compressed_sparse_matrix_t*)VAR_5;
  VAR_10->refcount = 0;
  FUNC_1(VAR_10);
 }
}
