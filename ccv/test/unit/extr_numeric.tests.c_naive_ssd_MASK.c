
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* u8; double* f64; } ;
struct TYPE_8__ {int cols; int rows; int step; TYPE_1__ data; int type; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(ccv_dense_matrix_t* VAR_0, ccv_dense_matrix_t* VAR_1, ccv_dense_matrix_t* VAR_2)
{
 int VAR_3 = VAR_1->cols / 2;
 int VAR_4 = VAR_1->rows / 2;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = FUNC_0(VAR_0->type);
 unsigned char* VAR_11 = VAR_0->data.u8 + VAR_4 * VAR_0->step;
 double* VAR_12 = VAR_2->data.f64 + VAR_2->cols * VAR_4;
 FUNC_1(VAR_2);
 for (VAR_5 = VAR_4; VAR_5 < VAR_0->rows - VAR_4 - 1; VAR_5++)
 {
  for (VAR_6 = VAR_3; VAR_6 < VAR_0->cols - VAR_3 - 1; VAR_6++)
  {
   unsigned char* VAR_13 = VAR_1->data.u8;
   unsigned char* VAR_14 = VAR_11 - VAR_4 * VAR_0->step;
   VAR_12[VAR_6] = 0;
   for (VAR_9 = -VAR_4; VAR_9 <= VAR_4; VAR_9++)
   {
    for (VAR_8 = -VAR_3; VAR_8 <= VAR_3; VAR_8++)
     for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++)
      VAR_12[VAR_6] += (VAR_14[(VAR_8 + VAR_6) * VAR_10 + VAR_7] - VAR_13[(VAR_8 + VAR_3) * VAR_10 + VAR_7]) * (VAR_14[(VAR_8 + VAR_6) * VAR_10 + VAR_7] - VAR_13[(VAR_8 + VAR_3) * VAR_10 + VAR_7]);
    VAR_13 += VAR_1->step;
    VAR_14 += VAR_0->step;
   }
  }
  VAR_11 += VAR_0->step;
  VAR_12 += VAR_2->cols;
 }
}
