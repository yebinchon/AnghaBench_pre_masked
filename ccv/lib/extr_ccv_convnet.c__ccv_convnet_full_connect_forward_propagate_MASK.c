
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
struct TYPE_18__ {int type; int rows; int cols; int step; TYPE_1__ data; } ;
typedef TYPE_4__ ccv_dense_matrix_t ;
struct TYPE_16__ {scalar_t__ relu; int count; } ;
struct TYPE_17__ {TYPE_2__ full_connect; } ;
struct TYPE_19__ {int wnum; float* bias; TYPE_3__ net; int w; } ;
typedef TYPE_5__ ccv_convnet_layer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_4__ FUNC_4 (int,int,int,int ,int ) ;
 TYPE_4__* FUNC_5 (TYPE_4__*,int ,int,int,int,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_4__*,int,TYPE_4__*,int,int ,int **,int ) ;
 float FUNC_7 (int ,float) ;

__attribute__((used)) static void FUNC_8(ccv_convnet_layer_t* VAR_2, ccv_dense_matrix_t* VAR_3, ccv_dense_matrix_t** VAR_4)
{
 FUNC_3(FUNC_1(VAR_3->type) == VAR_0);
 ccv_dense_matrix_t* VAR_5 = *VAR_4 = FUNC_5(*VAR_4, VAR_2->net.full_connect.count, 1, VAR_0 | VAR_1, VAR_0 | VAR_1, 0);
 int VAR_6 = FUNC_0(VAR_3->type);
 int VAR_7 = VAR_3->rows, VAR_8 = VAR_3->cols;

 FUNC_3(VAR_3->step == VAR_3->cols * FUNC_2(VAR_3->type) * VAR_6);
 VAR_3->rows = VAR_7 * VAR_8 * VAR_6, VAR_3->cols = 1, VAR_3->type = (VAR_3->type - VAR_6) | VAR_1;
 FUNC_3(VAR_3->rows * VAR_5->rows == VAR_2->wnum);
 VAR_3->step = VAR_3->cols * FUNC_2(VAR_3->type);
 int VAR_9;
 float* VAR_10 = VAR_5->data.f32;
 for (VAR_9 = 0; VAR_9 < VAR_5->rows; VAR_9++)
  VAR_10[VAR_9] = VAR_2->bias[VAR_9];
 ccv_dense_matrix_t VAR_11 = FUNC_4(VAR_5->rows, VAR_3->rows, VAR_0 | VAR_1, VAR_2->w, 0);
 FUNC_6(&VAR_11, VAR_3, 1, VAR_5, 1, 0, (ccv_matrix_t**)&VAR_5, 0);
 if (VAR_2->net.full_connect.relu)
  for (VAR_9 = 0; VAR_9 < VAR_5->rows; VAR_9++)
   VAR_10[VAR_9] = FUNC_7(0, VAR_10[VAR_9]);
 VAR_3->rows = VAR_7, VAR_3->cols = VAR_8, VAR_3->type = (VAR_3->type - FUNC_0(VAR_3->type)) | VAR_6;
 VAR_3->step = VAR_3->cols * FUNC_2(VAR_3->type) * FUNC_0(VAR_3->type);
}
