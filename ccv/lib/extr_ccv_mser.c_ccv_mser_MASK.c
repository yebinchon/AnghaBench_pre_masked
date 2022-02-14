
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint64_t ;
typedef int params ;
typedef int ccv_mser_param_t ;
typedef int ccv_mser_keypoint_t ;
struct TYPE_18__ {int type; int cols; int rows; int sig; } ;
typedef TYPE_1__ ccv_dense_matrix_t ;
typedef int ccv_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int *,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int *,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int *,int ) ;
 int VAR_7 ;
 int * FUNC_5 (int,int,int ) ;
 int FUNC_6 (char const*,int,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,int ,int ,int,int,int ) ;
 int FUNC_9 (int *,TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (int,int ,int ,int ,...) ;
 int FUNC_12 (char*) ;
 int VAR_8 ;

ccv_array_t* FUNC_13(ccv_dense_matrix_t* VAR_9, ccv_dense_matrix_t* VAR_10, ccv_dense_matrix_t** VAR_11, int VAR_12, ccv_mser_param_t VAR_13)
{
 uint64_t VAR_14 = FUNC_6((const char*)&VAR_13, sizeof(VAR_13), VAR_6);
 FUNC_7(VAR_7, FUNC_12("ccv_mser(matrix)"), FUNC_11(VAR_10 == 0 && VAR_9->sig != 0, VAR_14, VAR_9->sig, VAR_6), FUNC_11(VAR_10 != 0 && VAR_9->sig != 0 && VAR_10->sig != 0, VAR_14, VAR_9->sig, VAR_10->sig, VAR_6));
 FUNC_7(VAR_8, FUNC_12("ccv_mser(array)"), FUNC_11(VAR_10 == 0 && VAR_9->sig != 0, VAR_14, VAR_9->sig, VAR_6), FUNC_11(VAR_10 != 0 && VAR_9->sig != 0 && VAR_10->sig != 0, VAR_14, VAR_9->sig, VAR_10->sig, VAR_6));
 VAR_12 = (VAR_12 == 0) ? VAR_1 | VAR_5 : FUNC_1(VAR_12) | VAR_5;
 ccv_dense_matrix_t* VAR_15 = *VAR_11 = FUNC_8(*VAR_11, VAR_9->rows, VAR_9->cols, VAR_5 | VAR_4, VAR_12, VAR_7);
 ccv_array_t* VAR_16 = FUNC_5(sizeof(ccv_mser_keypoint_t), 64, VAR_8);
 FUNC_9(VAR_16, VAR_15, VAR_16);
 FUNC_10(VAR_15, VAR_16);

 if (FUNC_0(VAR_9->type) > 1 || FUNC_1(VAR_9->type) == VAR_0 || FUNC_1(VAR_9->type) == VAR_2)
  FUNC_3(VAR_9, VAR_10, VAR_15, VAR_16, VAR_13);
 else if (FUNC_1(VAR_9->type) == VAR_3)
  FUNC_2(VAR_9, VAR_10, VAR_15, VAR_16, VAR_13);
 else
  FUNC_4(VAR_9, VAR_10, VAR_15, VAR_16, VAR_13);
 return VAR_16;
}
