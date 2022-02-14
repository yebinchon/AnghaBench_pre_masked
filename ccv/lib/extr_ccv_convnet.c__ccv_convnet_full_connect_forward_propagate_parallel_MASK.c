
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ccv_matrix_t ;
struct TYPE_15__ {float* f32; } ;
struct TYPE_18__ {int rows; int cols; TYPE_1__ data; int type; } ;
typedef TYPE_4__ ccv_dense_matrix_t ;
struct TYPE_16__ {scalar_t__ relu; int count; } ;
struct TYPE_17__ {TYPE_2__ full_connect; } ;
struct TYPE_19__ {float* bias; TYPE_3__ net; int w; } ;
typedef TYPE_5__ ccv_convnet_layer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_4__ FUNC_2 (int,int,int,int ,int ) ;
 TYPE_4__* FUNC_3 (TYPE_4__*,int,int ,int,int,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*,int,TYPE_4__*,int,int ,int **,int ) ;
 float FUNC_5 (int ,float) ;

__attribute__((used)) static void FUNC_6(ccv_convnet_layer_t* VAR_3, ccv_dense_matrix_t* VAR_4, ccv_dense_matrix_t** VAR_5)
{
 FUNC_1(FUNC_0(VAR_4->type) == VAR_0);
 ccv_dense_matrix_t* VAR_6 = *VAR_5 = FUNC_3(*VAR_5, VAR_4->rows, VAR_3->net.full_connect.count, VAR_0 | VAR_2, VAR_0 | VAR_2, 0);

 int VAR_7, VAR_8;
 float* VAR_9 = VAR_6->data.f32;
 for (VAR_7 = 0; VAR_7 < VAR_6->rows; VAR_7++)
 {
  for (VAR_8 = 0; VAR_8 < VAR_6->cols; VAR_8++)
   VAR_9[VAR_8] = VAR_3->bias[VAR_8];
  VAR_9 += VAR_6->cols;
 }
 ccv_dense_matrix_t VAR_10 = FUNC_2(VAR_6->cols, VAR_4->cols, VAR_0 | VAR_2, VAR_3->w, 0);
 FUNC_4(VAR_4, &VAR_10, 1, VAR_6, 1, VAR_1, (ccv_matrix_t**)&VAR_6, 0);
 VAR_9 = VAR_6->data.f32;
 if (VAR_3->net.full_connect.relu)
  for (VAR_7 = 0; VAR_7 < VAR_6->rows; VAR_7++)
  {
   for (VAR_8 = 0; VAR_8 < VAR_6->cols; VAR_8++)
    VAR_9[VAR_8] = FUNC_5(0, VAR_9[VAR_8]);
   VAR_9 += VAR_6->cols;
  }
}
