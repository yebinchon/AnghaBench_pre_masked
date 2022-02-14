
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float* f32; } ;
struct TYPE_9__ {int cols; int rows; TYPE_1__ data; int type; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (float*) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,int,int,int,int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 float FUNC_7 (float) ;

__attribute__((used)) static void FUNC_8(ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t** VAR_3, int VAR_4)
{
 FUNC_2(FUNC_0(VAR_2->type) == VAR_1);
 FUNC_2(FUNC_1(VAR_2->type) == VAR_0);
 ccv_dense_matrix_t* VAR_5 = *VAR_3 = FUNC_5(*VAR_3, 1, VAR_2->cols, VAR_0 | VAR_1, VAR_0 | VAR_1, 0);
 FUNC_6(VAR_5);
 int VAR_6, VAR_7;
 float* VAR_8 = VAR_2->data.f32;
 float* VAR_9 = VAR_5->data.f32;
 float* VAR_10 = (float*)FUNC_4(sizeof(float) * VAR_2->cols);
 for (VAR_6 = 0; VAR_6 < VAR_2->rows; VAR_6++)
 {
  double VAR_11 = VAR_8[0];
  for (VAR_7 = 1; VAR_7 < VAR_2->cols; VAR_7++)
   if (VAR_8[VAR_7] > VAR_11)
    VAR_11 = VAR_8[VAR_7];
  double VAR_12 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_2->cols; VAR_7++)
   VAR_12 += (VAR_10[VAR_7] = FUNC_7(VAR_8[VAR_7] - VAR_11));
  VAR_12 = 1.0 / VAR_12;
  for (VAR_7 = 0; VAR_7 < VAR_2->cols; VAR_7++)
   VAR_9[VAR_7] += VAR_10[VAR_7] * VAR_12;
  VAR_8 += VAR_2->cols;
 }
 FUNC_3(VAR_10);
}
