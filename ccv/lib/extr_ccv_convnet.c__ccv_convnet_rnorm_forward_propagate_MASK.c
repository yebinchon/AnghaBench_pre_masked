
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {float* f32; } ;
struct TYPE_16__ {int rows; int cols; TYPE_3__ data; int type; } ;
typedef TYPE_4__ ccv_dense_matrix_t ;
struct TYPE_13__ {int size; float kappa; float alpha; float beta; } ;
struct TYPE_14__ {TYPE_1__ rnorm; } ;
struct TYPE_17__ {TYPE_2__ net; } ;
typedef TYPE_5__ ccv_convnet_layer_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int,int,int*,int*,int*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*,int,int,int,int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;
 float FUNC_7 (float,float) ;

__attribute__((used)) static void FUNC_8(ccv_convnet_layer_t* VAR_1, ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t** VAR_3, ccv_dense_matrix_t** VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 FUNC_3(VAR_1, VAR_2->rows, VAR_2->cols, &VAR_5, &VAR_6, &VAR_7);
 int VAR_8 = VAR_1->net.rnorm.size;
 float VAR_9 = VAR_1->net.rnorm.kappa;
 float VAR_10 = VAR_1->net.rnorm.alpha;
 float VAR_11 = VAR_1->net.rnorm.beta;
 int VAR_12 = VAR_8 / 2;
 FUNC_2(FUNC_1(VAR_2->type) == VAR_0);
 int VAR_13 = FUNC_0(VAR_2->type);
 int VAR_14 = VAR_0 | VAR_13;
 ccv_dense_matrix_t* VAR_15 = *VAR_3 = FUNC_4(*VAR_3, VAR_5, VAR_6, VAR_14, VAR_14, 0);
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 float* VAR_21 = VAR_2->data.f32;
 float* VAR_22 = VAR_15->data.f32;
 int VAR_23 = VAR_13 / VAR_7;
 if (VAR_4)
 {
  ccv_dense_matrix_t* VAR_24 = *VAR_4 = FUNC_4(*VAR_4, VAR_5, VAR_6, VAR_14, VAR_14, 0);
  float* VAR_25 = VAR_24->data.f32;
  for (VAR_16 = 0; VAR_16 < VAR_15->rows; VAR_16++)
  {
   for (VAR_17 = 0; VAR_17 < VAR_15->cols; VAR_17++)
    for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++)
     for (VAR_18 = 0; VAR_18 < VAR_23; VAR_18++)
     {
      float VAR_26 = VAR_21[VAR_17 * VAR_13 + VAR_20 * VAR_23 + VAR_18];
      float VAR_27 = 0;
      for (VAR_19 = FUNC_5(VAR_18 - VAR_12, 0); VAR_19 <= FUNC_6(VAR_18 + VAR_12, VAR_23 - 1); VAR_19++)
       VAR_27 += VAR_21[VAR_17 * VAR_13 + VAR_20 * VAR_23 + VAR_19] * VAR_21[VAR_17 * VAR_13 + VAR_20 * VAR_23 + VAR_19];
      VAR_27 = VAR_9 + VAR_10 * VAR_27;
      VAR_25[VAR_17 * VAR_13 + VAR_20 * VAR_23 + VAR_18] = VAR_27;
      VAR_22[VAR_17 * VAR_13 + VAR_20 * VAR_23 + VAR_18] = VAR_26 * FUNC_7(VAR_27, -VAR_11);
     }
   VAR_21 += VAR_2->cols * VAR_13;
   VAR_25 += VAR_24->cols * VAR_13;
   VAR_22 += VAR_15->cols * VAR_13;
  }
 } else {
  for (VAR_16 = 0; VAR_16 < VAR_15->rows; VAR_16++)
  {
   for (VAR_17 = 0; VAR_17 < VAR_15->cols; VAR_17++)
    for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++)
     for (VAR_18 = 0; VAR_18 < VAR_23; VAR_18++)
     {
      float VAR_28 = VAR_21[VAR_17 * VAR_13 + VAR_20 * VAR_23 + VAR_18];
      float VAR_29 = 0;
      for (VAR_19 = FUNC_5(VAR_18 - VAR_12, 0); VAR_19 <= FUNC_6(VAR_18 + VAR_12, VAR_23 - 1); VAR_19++)
       VAR_29 += VAR_21[VAR_17 * VAR_13 + VAR_20 * VAR_23 + VAR_19] * VAR_21[VAR_17 * VAR_13 + VAR_20 * VAR_23 + VAR_19];
      VAR_29 = VAR_9 + VAR_10 * VAR_29;
      VAR_22[VAR_17 * VAR_13 + VAR_20 * VAR_23 + VAR_18] = VAR_28 * FUNC_7(VAR_29, -VAR_11);
     }
   VAR_21 += VAR_2->cols * VAR_13;
   VAR_22 += VAR_15->cols * VAR_13;
  }
 }
}
