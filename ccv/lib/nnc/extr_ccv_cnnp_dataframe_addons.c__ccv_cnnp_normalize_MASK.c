
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float* f32; } ;
struct TYPE_5__ {int rows; int cols; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;



__attribute__((used)) static void FUNC_0(ccv_dense_matrix_t* const VAR_0, const float VAR_1[3], const float VAR_2[3])
{
 int VAR_3;
 const int VAR_4 = VAR_0->rows * VAR_0->cols;
 float* VAR_5 = VAR_0->data.f32;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
 {
  VAR_5[VAR_3 * 3] = (VAR_5[VAR_3 * 3] - VAR_1[0]) * VAR_2[0];
  VAR_5[VAR_3 * 3 + 1] = (VAR_5[VAR_3 * 3 + 1] - VAR_1[1]) * VAR_2[1];
  VAR_5[VAR_3 * 3 + 2] = (VAR_5[VAR_3 * 3 + 2] - VAR_1[2]) * VAR_2[2];
 }
}
