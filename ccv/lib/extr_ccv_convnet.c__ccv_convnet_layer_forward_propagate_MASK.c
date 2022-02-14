
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ccv_dense_matrix_t ;
struct TYPE_8__ {int type; } ;
typedef TYPE_1__ ccv_convnet_layer_t ;







 int FUNC_0 (TYPE_1__*,int *,int **) ;
 int FUNC_1 (TYPE_1__*,int *,int **) ;
 int FUNC_2 (TYPE_1__*,int *,int **) ;
 int FUNC_3 (TYPE_1__*,int *,int **) ;
 int FUNC_4 (TYPE_1__*,int *,int **,int **) ;

__attribute__((used)) static void FUNC_5(ccv_convnet_layer_t* VAR_0, ccv_dense_matrix_t* VAR_1, ccv_dense_matrix_t** VAR_2, ccv_dense_matrix_t** VAR_3)
{
 switch(VAR_0->type)
 {
  case 131:
   FUNC_1(VAR_0, VAR_1, VAR_2);
   break;
  case 130:
   FUNC_2(VAR_0, VAR_1, VAR_2);
   break;
  case 129:
   FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
   break;
  case 128:
   FUNC_3(VAR_0, VAR_1, VAR_2);
   break;
  case 132:
   FUNC_0(VAR_0, VAR_1, VAR_2);
   break;
 }
}
