
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_matrix_t ;
struct TYPE_4__ {int u8; } ;
struct TYPE_5__ {int step; int rows; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(ccv_matrix_t* VAR_0)
{
 ccv_dense_matrix_t* VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->data.u8, 0, VAR_1->step * VAR_1->rows);
}
