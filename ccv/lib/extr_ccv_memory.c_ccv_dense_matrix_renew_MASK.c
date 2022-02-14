
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int rows; int cols; int type; scalar_t__ sig; } ;
typedef TYPE_1__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*,int,scalar_t__,int ) ;
 TYPE_1__* FUNC_4 (int,int,int,int ,scalar_t__) ;

ccv_dense_matrix_t* FUNC_5(ccv_dense_matrix_t* VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, uint64_t VAR_6)
{
 if (VAR_1 != 0)
 {
  FUNC_2(VAR_1->rows == VAR_2 && VAR_1->cols == VAR_3 && (FUNC_1(VAR_1->type) & VAR_4) && (FUNC_0(VAR_1->type) == FUNC_0(VAR_4)));
  VAR_5 = FUNC_1(VAR_1->type) | FUNC_0(VAR_1->type);
 }
 if (VAR_6 != 0)
  VAR_6 = FUNC_3((const char*)&VAR_5, sizeof(int), VAR_6, VAR_0);
 if (VAR_1 == 0)
 {
  VAR_1 = FUNC_4(VAR_2, VAR_3, VAR_5, 0, VAR_6);
 } else {
  VAR_1->sig = VAR_6;
 }
 return VAR_1;
}
