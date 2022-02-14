
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_matrix_t ;
struct TYPE_4__ {int * f64; int * f32; } ;
struct TYPE_5__ {int type; int rows; int cols; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(ccv_matrix_t *VAR_2)
{
 ccv_dense_matrix_t* VAR_3 = FUNC_2(VAR_2);
 FUNC_1((VAR_3->type & VAR_0) || (VAR_3->type & VAR_1));
 int VAR_4 = FUNC_0(VAR_3->type);
 int VAR_5;
 if (VAR_3->type & VAR_0)
 {
  for (VAR_5 = 0; VAR_5 < VAR_3->rows * VAR_3->cols * VAR_4; VAR_5++)



   if (FUNC_3(VAR_3->data.f32[VAR_5]))

    return VAR_5 + 1;
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_3->rows * VAR_3->cols * VAR_4; VAR_5++)
   if (FUNC_3(VAR_3->data.f64[VAR_5]))
    return VAR_5 + 1;
 }
 return 0;
}
