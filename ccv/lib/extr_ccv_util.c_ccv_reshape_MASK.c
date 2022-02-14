
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int u8; } ;
struct TYPE_7__ {int u8; } ;
struct TYPE_9__ {int rows; int cols; int type; TYPE_2__ data; TYPE_1__ tb; int sig; int refcount; int step; } ;
typedef TYPE_3__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int,int,int ) ;

ccv_dense_matrix_t FUNC_4(ccv_dense_matrix_t* VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 FUNC_2(VAR_5 + VAR_7 <= VAR_4->rows);
 FUNC_2(VAR_6 + VAR_8 <= VAR_4->cols);
 FUNC_2(VAR_6 >= 0 && VAR_5 >= 0);
 ccv_dense_matrix_t VAR_9 = {
  .type = (VAR_3 | FUNC_1(VAR_4->type) | FUNC_0(VAR_4->type) | VAR_2 | VAR_1) & ~VAR_0,
  .rows = VAR_7,
  .cols = VAR_8,
  .step = VAR_4->step,
  .refcount = 0,
  .sig = 0,
  .tb.u8 = 0,
  .data.u8 = FUNC_3(VAR_4, VAR_5, VAR_6, 0),
 };
 return VAR_9;
}
