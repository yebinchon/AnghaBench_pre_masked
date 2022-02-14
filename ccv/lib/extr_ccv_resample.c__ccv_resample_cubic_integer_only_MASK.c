
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* u8; } ;
struct TYPE_6__ {int type; int cols; float rows; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;
typedef int ccv_cubic_integer_coeffs_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,float,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int ,int,int ,scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_8(ccv_dense_matrix_t* VAR_6, ccv_dense_matrix_t* VAR_7)
{
 FUNC_5(FUNC_1(VAR_7->type) == VAR_2 || FUNC_1(VAR_7->type) == VAR_0 || FUNC_1(VAR_7->type) == VAR_1);
 int VAR_8, VAR_9, VAR_10, VAR_11 = FUNC_0(VAR_6->type);
 int VAR_12 = (VAR_7->type & VAR_2) ? VAR_0 : VAR_7->type;
 FUNC_5(VAR_7->cols > 0);
 ccv_cubic_integer_coeffs_t* VAR_13 = (ccv_cubic_integer_coeffs_t*)FUNC_4(sizeof(ccv_cubic_integer_coeffs_t) * VAR_7->cols);
 float VAR_14 = (float)VAR_6->cols / VAR_7->cols;
 for (VAR_8 = 0; VAR_8 < VAR_7->cols; VAR_8++)
 {
  float VAR_15 = (VAR_8 + 0.5) * VAR_14 - 0.5;
  FUNC_3((int)VAR_15, VAR_6->cols, VAR_15, VAR_13 + VAR_8);
 }
 float VAR_16 = (float)VAR_6->rows / VAR_7->rows;
 int VAR_17 = VAR_7->cols * VAR_11 * FUNC_2(VAR_12);
 unsigned char* VAR_18 = (unsigned char*)FUNC_4(VAR_17 * 4);



 unsigned char* VAR_19 = VAR_6->data.u8;
 unsigned char* VAR_20 = VAR_7->data.u8;
 int VAR_21 = -1, VAR_22 = 0;
 FUNC_6(VAR_6->type, VAR_3, VAR_12, VAR_4, VAR_7->type, VAR_5);

}
