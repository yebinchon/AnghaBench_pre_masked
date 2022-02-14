
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_matrix_t ;
struct TYPE_4__ {unsigned char* u8; } ;
struct TYPE_5__ {int rows; int cols; int type; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;

double FUNC_3(ccv_matrix_t* VAR_1)
{
 ccv_dense_matrix_t* VAR_2 = FUNC_1(VAR_1);
 double VAR_3 = 0, VAR_4 = 0;
 unsigned char* VAR_5 = VAR_2->data.u8;
 int VAR_6, VAR_7, VAR_8 = FUNC_0(VAR_2->type);
 FUNC_2(VAR_2->type, VAR_0);

 VAR_3 = VAR_3 / (VAR_2->rows * VAR_2->cols * VAR_8);
 VAR_4 = VAR_4 / (VAR_2->rows * VAR_2->cols * VAR_8);
 return VAR_4 - VAR_3 * VAR_3;
}
