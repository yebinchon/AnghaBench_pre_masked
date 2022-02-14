
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* u8; float* f32; } ;
struct TYPE_8__ {int rows; int cols; TYPE_1__ data; int type; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 (int,int,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (float*,float*,int*,int,int,double,double) ;
 int VAR_2 ;
 int FUNC_5 (int*) ;

void FUNC_6(ccv_dense_matrix_t* VAR_3, ccv_dense_matrix_t** VAR_4, double VAR_5, double VAR_6, double VAR_7, double VAR_8)
{
 ccv_dense_matrix_t* VAR_9 = FUNC_1(VAR_3->rows, VAR_3->cols, VAR_0 | VAR_1, 0, 0);
 ccv_dense_matrix_t* VAR_10 = *VAR_4 = FUNC_1(VAR_3->rows, VAR_3->cols, VAR_0 | VAR_1, 0, 0);
 unsigned char* VAR_11 = VAR_3->data.u8;
 float* VAR_12 = VAR_10->data.f32;
 int VAR_13, VAR_14;
 FUNC_3(VAR_3->type, VAR_2);

 int* VAR_15 = (int*)FUNC_0(VAR_3->cols * VAR_3->rows, sizeof(int));
 int* VAR_16 = (int*)FUNC_0(VAR_3->cols * VAR_3->rows, sizeof(int));
 VAR_12 = VAR_10->data.f32;
 float* VAR_17 = VAR_9->data.f32;
 for (VAR_13 = 0; VAR_13 < VAR_3->rows; VAR_13++)
  FUNC_4(VAR_12 + VAR_13 * VAR_3->cols, VAR_17 + VAR_13 * VAR_3->cols, VAR_15 + VAR_13 * VAR_3->cols, 1, VAR_3->cols, VAR_7, VAR_5);
 for (VAR_14 = 0; VAR_14 < VAR_3->cols; VAR_14++)
  FUNC_4(VAR_17 + VAR_14, VAR_12 + VAR_14, VAR_16 + VAR_14, VAR_3->cols, VAR_3->rows, VAR_8, VAR_6);
 FUNC_5(VAR_15);
 FUNC_5(VAR_16);
 FUNC_2(VAR_9);
}
