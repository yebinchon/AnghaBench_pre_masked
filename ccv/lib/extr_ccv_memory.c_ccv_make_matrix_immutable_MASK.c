
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ccv_matrix_t ;
struct TYPE_3__ {scalar_t__ u8; } ;
struct TYPE_4__ {scalar_t__ sig; int rows; int step; scalar_t__ type; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int,int ,int ) ;

void FUNC_2(ccv_matrix_t* VAR_3)
{
 int VAR_4 = *(int*)VAR_3;
 if (VAR_4 & VAR_1)
 {
  ccv_dense_matrix_t* VAR_5 = (ccv_dense_matrix_t*)VAR_3;
  FUNC_0(VAR_5->sig == 0);


  VAR_5->type &= ~VAR_2;
  VAR_5->sig = FUNC_1((char*)VAR_5->data.u8, VAR_5->rows * VAR_5->step, (uint64_t)VAR_5->type, VAR_0);
 }
}
