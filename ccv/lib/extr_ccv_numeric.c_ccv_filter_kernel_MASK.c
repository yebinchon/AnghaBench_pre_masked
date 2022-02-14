
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_filter_kernel_f ;
struct TYPE_5__ {unsigned char* u8; } ;
struct TYPE_6__ {int rows; int cols; int type; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;

void FUNC_3(ccv_dense_matrix_t* VAR_1, ccv_filter_kernel_f VAR_2, void* VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7 = FUNC_0(VAR_1->type);
 unsigned char* VAR_8 = VAR_1->data.u8;
 double VAR_9 = (VAR_1->rows - 1) * 0.5;
 double VAR_10 = (VAR_1->cols - 1) * 0.5;
 FUNC_2(VAR_1->type, VAR_0);

 FUNC_1(VAR_1);
}
