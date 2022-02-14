
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ccv_matrix_t ;
struct TYPE_2__ {int type; scalar_t__ sig; } ;
typedef TYPE_1__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(ccv_matrix_t* VAR_2)
{
 int VAR_3 = *(int*)VAR_2;
 if (VAR_3 & VAR_0)
 {
  ccv_dense_matrix_t* VAR_4 = (ccv_dense_matrix_t*)VAR_2;
  VAR_4->sig = 0;
  VAR_4->type &= ~VAR_1;
 }
}
