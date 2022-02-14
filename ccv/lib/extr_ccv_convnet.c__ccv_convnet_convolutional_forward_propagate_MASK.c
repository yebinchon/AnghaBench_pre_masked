
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int type; int cols; int rows; } ;
typedef TYPE_3__ ccv_dense_matrix_t ;
struct TYPE_21__ {int channels; int count; int strides; int border; int rows; int cols; } ;
struct TYPE_22__ {TYPE_1__ convolutional; } ;
struct TYPE_24__ {TYPE_2__ net; } ;
typedef TYPE_4__ ccv_convnet_layer_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_4__*,int ,int ,int*,int*,int*) ;
 TYPE_3__* FUNC_8 (TYPE_3__*,int,int,int,int,int ) ;

__attribute__((used)) static void FUNC_9(ccv_convnet_layer_t* VAR_1, ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t** VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 FUNC_7(VAR_1, VAR_2->rows, VAR_2->cols, &VAR_4, &VAR_5, &VAR_6);
 int VAR_7 = VAR_1->net.convolutional.channels;
 int VAR_8 = VAR_1->net.convolutional.count;
 int VAR_9 = VAR_1->net.convolutional.strides;
 int VAR_10 = VAR_1->net.convolutional.border;
 int VAR_11 = VAR_1->net.convolutional.rows;
 int VAR_12 = VAR_1->net.convolutional.cols;
 int VAR_13 = VAR_0 | VAR_8;
 FUNC_6(FUNC_0(VAR_2->type) == VAR_7);
 FUNC_6(FUNC_1(VAR_2->type) == VAR_0);
 ccv_dense_matrix_t* VAR_14 = *VAR_3 = FUNC_8(*VAR_3, VAR_4, VAR_5, VAR_13, VAR_13, 0);
 int VAR_15 = VAR_7 / VAR_6;
 int VAR_16 = VAR_8 / VAR_6;
 FUNC_6(VAR_16 % 4 == 0);
 FUNC_2(VAR_1, VAR_2, VAR_14, VAR_4, VAR_5, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_15, VAR_16);

}
