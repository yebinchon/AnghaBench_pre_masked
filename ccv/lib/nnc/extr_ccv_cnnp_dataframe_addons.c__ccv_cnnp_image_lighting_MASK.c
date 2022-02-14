
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float* f32; } ;
struct TYPE_5__ {int rows; int cols; TYPE_1__ data; int type; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 float FUNC_3 (float,int ,int) ;

__attribute__((used)) static void FUNC_4(ccv_dense_matrix_t* VAR_2, const float VAR_3, const float VAR_4, const float VAR_5)
{
 FUNC_2(FUNC_1(VAR_2->type) == VAR_0);
 FUNC_2(FUNC_0(VAR_2->type) == VAR_1);


 const float VAR_6 = VAR_3 * (55.46 * -0.5675) + VAR_4 * (4.794 * 0.7192) + VAR_5 * (1.148 * 0.4009);
 const float VAR_7 = VAR_3 * (55.46 * -0.5808) + VAR_4 * (4.794 * -0.0045) + VAR_5 * (1.148 * -0.8140);
 const float VAR_8 = VAR_3 * (55.46 * -0.5836) + VAR_4 * (4.794 * -0.6948) + VAR_5 * (1.148 * 0.4203);
 int VAR_9;
 const int VAR_10 = VAR_2->rows * VAR_2->cols;
 float* const VAR_11 = VAR_2->data.f32;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
 {
  VAR_11[VAR_9 * 3] = FUNC_3(VAR_11[VAR_9 * 3] + VAR_6, 0, 255);
  VAR_11[VAR_9 * 3 + 1] = FUNC_3(VAR_11[VAR_9 * 3 + 1] + VAR_7, 0, 255);
  VAR_11[VAR_9 * 3 + 2] = FUNC_3(VAR_11[VAR_9 * 3 + 2] + VAR_8, 0, 255);
 }
}
