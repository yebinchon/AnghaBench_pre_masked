
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; scalar_t__ sig; int size; int ifbit; scalar_t__ refcount; struct TYPE_6__* vector; struct TYPE_6__* index; int cols; int rows; } ;
typedef TYPE_1__ ccv_sparse_matrix_t ;
typedef int ccv_matrix_t ;
typedef TYPE_1__ ccv_dense_matrix_t ;
typedef TYPE_1__ ccv_compressed_sparse_matrix_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *,scalar_t__,TYPE_1__*,size_t,int ) ;
 size_t FUNC_4 (int ,int ,int) ;

void FUNC_5(ccv_matrix_t* VAR_14)
{
 int VAR_15 = *(int*)VAR_14;
 FUNC_1(!(VAR_15 & VAR_11));
 if (VAR_15 & VAR_7)
 {
  ccv_dense_matrix_t* VAR_16 = (ccv_dense_matrix_t*)VAR_14;
  VAR_16->refcount = 0;
  if (!VAR_13 ||
   !(VAR_16->type & VAR_10) ||
   VAR_16->sig == 0 ||
   (VAR_16->type & VAR_9))
   FUNC_2(VAR_16);
  else {
   FUNC_1(FUNC_0(VAR_16->type) == VAR_4 ||
       FUNC_0(VAR_16->type) == VAR_1 ||
       FUNC_0(VAR_16->type) == VAR_0 ||
       FUNC_0(VAR_16->type) == VAR_3 ||
       FUNC_0(VAR_16->type) == VAR_2);
   size_t VAR_17 = FUNC_4(VAR_16->rows, VAR_16->cols, VAR_16->type);
   FUNC_3(&VAR_12, VAR_16->sig, VAR_16, VAR_17, 0 );
  }
 } else if (VAR_15 & VAR_8) {
  ccv_sparse_matrix_t* VAR_18 = (ccv_sparse_matrix_t*)VAR_14;
  int VAR_19;
  for (VAR_19 = 0; VAR_19 < VAR_18->size; VAR_19++)
  {
   if (VAR_18->index[VAR_19].ifbit > 1)
    FUNC_2(VAR_18->vector[VAR_19].index);
  }
  FUNC_2(VAR_18->index);
  FUNC_2(VAR_18->vector);
  FUNC_2(VAR_18);
 } else if ((VAR_15 & VAR_6) || (VAR_15 & VAR_5)) {
  ccv_compressed_sparse_matrix_t* VAR_20 = (ccv_compressed_sparse_matrix_t*)VAR_14;
  VAR_20->refcount = 0;
  FUNC_2(VAR_20);
 }
}
