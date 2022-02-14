
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ rows; scalar_t__ cols; int type; } ;
typedef TYPE_1__ ccv_dense_matrix_t ;
struct TYPE_12__ {scalar_t__ channels; scalar_t__ rows; scalar_t__ cols; int count; TYPE_1__** acts; scalar_t__ denoms; scalar_t__ layers; scalar_t__ use_cwc_accel; } ;
typedef TYPE_2__ ccv_convnet_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,TYPE_1__*,TYPE_1__**,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__**,TYPE_1__**,int) ;

void FUNC_4(ccv_convnet_t* VAR_0, ccv_dense_matrix_t** VAR_1, ccv_dense_matrix_t** VAR_2, int VAR_3)
{





 FUNC_2(VAR_3 == 1);
 FUNC_2(FUNC_0((*VAR_1)->type) == VAR_0->channels);
 FUNC_2((*VAR_1)->rows == VAR_0->rows);
 FUNC_2((*VAR_1)->cols == VAR_0->cols);
 int VAR_4;

 ccv_dense_matrix_t* VAR_5 = VAR_0->acts[VAR_0->count - 1];
 VAR_0->acts[VAR_0->count - 1] = *VAR_2;
 FUNC_1(VAR_0->layers, *VAR_1, VAR_0->acts, VAR_0->denoms);
 for (VAR_4 = 1; VAR_4 < VAR_0->count; VAR_4++)
  FUNC_1(VAR_0->layers + VAR_4, VAR_0->acts[VAR_4 - 1], VAR_0->acts + VAR_4, VAR_0->denoms + VAR_4);
 if (VAR_0->acts + VAR_0->count - 1 != VAR_2)
 {
  *VAR_2 = VAR_0->acts[VAR_0->count - 1];

  VAR_0->acts[VAR_0->count - 1] = VAR_5;
 }



}
