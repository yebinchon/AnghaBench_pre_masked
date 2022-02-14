
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* u8; } ;
struct TYPE_6__ {int cols; int step; float rows; int type; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;
typedef int ccv_cubic_coeffs_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int,float,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_7(ccv_dense_matrix_t* VAR_4, ccv_dense_matrix_t* VAR_5)
{
 FUNC_4(FUNC_1(VAR_5->type) == VAR_0 || FUNC_1(VAR_5->type) == VAR_1);
 int VAR_6, VAR_7, VAR_8, VAR_9 = FUNC_0(VAR_4->type);
 FUNC_4(VAR_5->cols > 0 && VAR_5->step > 0);
 ccv_cubic_coeffs_t* VAR_10 = (ccv_cubic_coeffs_t*)FUNC_3(sizeof(ccv_cubic_coeffs_t) * VAR_5->cols);
 float VAR_11 = (float)VAR_4->cols / VAR_5->cols;
 for (VAR_6 = 0; VAR_6 < VAR_5->cols; VAR_6++)
 {
  float VAR_12 = (VAR_6 + 0.5) * VAR_11 - 0.5;
  FUNC_2((int)VAR_12, VAR_4->cols, VAR_12, VAR_10 + VAR_6);
 }
 float VAR_13 = (float)VAR_4->rows / VAR_5->rows;
 unsigned char* VAR_14 = (unsigned char*)FUNC_3(VAR_5->step * 4);



 unsigned char* VAR_15 = VAR_4->data.u8;
 unsigned char* VAR_16 = VAR_5->data.u8;
 int VAR_17 = -1, VAR_18 = 0;
 FUNC_5(VAR_4->type, VAR_2, VAR_5->type, VAR_3);

}
