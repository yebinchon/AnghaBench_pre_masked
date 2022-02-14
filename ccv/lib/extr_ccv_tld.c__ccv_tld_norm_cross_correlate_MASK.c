
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* u8; } ;
struct TYPE_6__ {int rows; int cols; int step; TYPE_1__ data; int type; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 float FUNC_3 (float) ;

__attribute__((used)) static float FUNC_4(ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t* VAR_3)
{
 FUNC_2(FUNC_0(VAR_2->type) == VAR_1 && FUNC_1(VAR_2->type) == VAR_0);
 FUNC_2(FUNC_0(VAR_3->type) == VAR_1 && FUNC_1(VAR_3->type) == VAR_0);
 FUNC_2(VAR_2->rows == VAR_3->rows && VAR_2->cols == VAR_3->cols);
 int VAR_4, VAR_5;
 int VAR_6 = 0, VAR_7 = 0;
 unsigned char* VAR_8 = VAR_2->data.u8;
 unsigned char* VAR_9 = VAR_3->data.u8;
 for (VAR_5 = 0; VAR_5 < VAR_2->rows; VAR_5++)
 {
  for (VAR_4 = 0; VAR_4 < VAR_2->cols; VAR_4++)
  {
   VAR_6 += VAR_8[VAR_4];
   VAR_7 += VAR_9[VAR_4];
  }
  VAR_8 += VAR_2->step;
  VAR_9 += VAR_3->step;
 }
 VAR_8 = VAR_2->data.u8;
 VAR_9 = VAR_3->data.u8;
 float VAR_10 = (float)VAR_6 / (VAR_2->rows * VAR_2->cols);
 float VAR_11 = (float)VAR_7 / (VAR_3->rows * VAR_3->cols);
 float VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->rows; VAR_5++)
 {
  for (VAR_4 = 0; VAR_4 < VAR_2->cols; VAR_4++)
  {
   float VAR_15 = VAR_8[VAR_4] - VAR_10;
   float VAR_16 = VAR_9[VAR_4] - VAR_11;
   VAR_12 += VAR_15 * VAR_16;
   VAR_13 += VAR_15 * VAR_15;
   VAR_14 += VAR_16 * VAR_16;
  }
  VAR_8 += VAR_2->step;
  VAR_9 += VAR_3->step;
 }
 if (VAR_13 * VAR_14 < 1e-6)
  return 0;
 return VAR_12 / FUNC_3(VAR_13 * VAR_14);
}
