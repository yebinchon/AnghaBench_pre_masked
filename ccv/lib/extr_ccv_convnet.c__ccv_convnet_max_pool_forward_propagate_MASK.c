
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {float* f32; } ;
struct TYPE_15__ {int rows; int cols; TYPE_3__ data; int type; } ;
typedef TYPE_4__ ccv_dense_matrix_t ;
struct TYPE_12__ {int size; int strides; int border; } ;
struct TYPE_13__ {TYPE_1__ pool; } ;
struct TYPE_16__ {TYPE_2__ net; } ;
typedef TYPE_5__ ccv_convnet_layer_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int,int,int*,int*,int*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*,int,int,int,int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(ccv_convnet_layer_t* VAR_1, ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t** VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 FUNC_3(VAR_1, VAR_2->rows, VAR_2->cols, &VAR_4, &VAR_5, &VAR_6);
 int VAR_7 = VAR_1->net.pool.size;
 int VAR_8 = VAR_1->net.pool.strides;
 int VAR_9 = VAR_1->net.pool.border;
 FUNC_2(FUNC_1(VAR_2->type) == VAR_0);
 int VAR_10 = FUNC_0(VAR_2->type);
 int VAR_11 = VAR_0 | VAR_10;
 ccv_dense_matrix_t* VAR_12 = *VAR_3 = FUNC_4(*VAR_3, VAR_4, VAR_5, VAR_11, VAR_11, 0);
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 float* VAR_18 = VAR_2->data.f32;
 float* VAR_19 = VAR_12->data.f32;
 for (VAR_13 = 0; VAR_13 < VAR_12->rows; VAR_13++)
 {
  const int VAR_20 = FUNC_5(VAR_13 * VAR_8 - VAR_9, 0) - (VAR_13 * VAR_8 - VAR_9);
  const int VAR_21 = VAR_7 + FUNC_6(VAR_13 * VAR_8 + VAR_7 - VAR_9, VAR_2->rows) - (VAR_13 * VAR_8 + VAR_7 - VAR_9);
  for (VAR_14 = 0; VAR_14 < VAR_12->cols; VAR_14++)
  {
   const int VAR_22 = FUNC_5(VAR_14 * VAR_8 - VAR_9, 0) - (VAR_14 * VAR_8 - VAR_9);
   const int VAR_23 = VAR_7 + FUNC_6(VAR_14 * VAR_8 + VAR_7 - VAR_9, VAR_2->cols) - (VAR_14 * VAR_8 + VAR_7 - VAR_9);
   for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
   {
    float VAR_24 = 0;
    for (VAR_17 = VAR_20; VAR_17 < VAR_21; VAR_17++)
     for (VAR_16 = VAR_22; VAR_16 < VAR_23; VAR_16++)
      if (VAR_16 == VAR_22 && VAR_17 == VAR_20)
       VAR_24 = VAR_18[(VAR_14 * VAR_8 - VAR_9 + VAR_16 + (VAR_17 - VAR_9) * VAR_2->cols) * VAR_10 + VAR_15];
      else if (VAR_18[(VAR_14 * VAR_8 - VAR_9 + VAR_16 + (VAR_17 - VAR_9) * VAR_2->cols) * VAR_10 + VAR_15] > VAR_24)
       VAR_24 = VAR_18[(VAR_14 * VAR_8 - VAR_9 + VAR_16 + (VAR_17 - VAR_9) * VAR_2->cols) * VAR_10 + VAR_15];
    VAR_19[VAR_14 * VAR_10 + VAR_15] = VAR_24;
   }
  }
  VAR_18 += VAR_2->cols * VAR_10 * VAR_8;
  VAR_19 += VAR_12->cols * VAR_10;
 }
}
