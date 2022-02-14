
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_9__ ;
typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_19__ ;
typedef struct TYPE_38__ TYPE_18__ ;
typedef struct TYPE_37__ TYPE_17__ ;
typedef struct TYPE_36__ TYPE_16__ ;
typedef struct TYPE_35__ TYPE_15__ ;
typedef struct TYPE_34__ TYPE_14__ ;
typedef struct TYPE_33__ TYPE_13__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef int uint16_t ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int layer_params_qs ;
typedef int layer_data_qs ;
typedef int convnet_params_mean_activity_qs ;
typedef int convnet_params_input_qs ;
struct TYPE_35__ {int height; int width; } ;
typedef TYPE_15__ ccv_size_t ;
struct TYPE_43__ {int height; int width; } ;
struct TYPE_36__ {int channels; TYPE_6__* mean_activity; TYPE_4__ input; TYPE_17__* layers; } ;
typedef TYPE_16__ ccv_convnet_t ;
struct TYPE_41__ {int count; } ;
struct TYPE_40__ {int count; } ;
struct TYPE_42__ {TYPE_2__ full_connect; TYPE_1__ convolutional; } ;
struct TYPE_37__ {int wnum; int type; TYPE_3__ net; int bias; int w; } ;
typedef TYPE_17__ ccv_convnet_layer_t ;
struct TYPE_33__ {int size; void* beta; void* alpha; void* kappa; } ;
struct TYPE_32__ {int strides; int border; int size; } ;
struct TYPE_31__ {int count; int relu; } ;
struct TYPE_30__ {int rows; int cols; int channels; int partition; int count; int strides; int border; } ;
struct TYPE_34__ {TYPE_13__ rnorm; TYPE_12__ pool; TYPE_11__ full_connect; TYPE_10__ convolutional; } ;
struct TYPE_47__ {int count; } ;
struct TYPE_46__ {int rows; int cols; int channels; int partition; } ;
struct TYPE_48__ {TYPE_8__ node; TYPE_7__ matrix; } ;
struct TYPE_38__ {int type; TYPE_14__ output; scalar_t__ glorot; scalar_t__ bias; TYPE_9__ input; } ;
typedef TYPE_18__ ccv_convnet_layer_param_t ;
struct TYPE_39__ {int rnum; } ;
typedef TYPE_19__ ccv_array_t ;
struct TYPE_44__ {int f32; } ;
struct TYPE_45__ {TYPE_5__ data; } ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_19__*) ;
 scalar_t__ FUNC_4 (TYPE_19__*,int ) ;
 TYPE_19__* FUNC_5 (int,int,int ) ;
 int FUNC_6 (TYPE_19__*,TYPE_18__*) ;
 TYPE_16__* FUNC_7 (int,TYPE_15__,TYPE_18__*,int ) ;
 int FUNC_8 (int *,float*,int) ;
 TYPE_15__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,void const*,int) ;
 int FUNC_11 (int *) ;
 void const* FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 void* FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (char const*,int **) ;
 scalar_t__ FUNC_18 (int *,char const*,int,int **,int ) ;
 scalar_t__ FUNC_19 (int *) ;

ccv_convnet_t* FUNC_20(int VAR_2, const char* VAR_3)
{
 sqlite3* VAR_4 = 0;
 if (VAR_0 == FUNC_17(VAR_3, &VAR_4))
 {
  ccv_convnet_t* VAR_5 = 0;
  sqlite3_stmt* VAR_6 = 0;

  const char VAR_7[] =
   "SELECT type, "
   "input_matrix_rows, input_matrix_cols, input_matrix_channels, input_matrix_partition, input_node_count, "
   "output_rows, output_cols, output_channels, output_partition, output_count, output_strides, output_border, "
   "output_size, output_kappa, output_alpha, output_beta, output_relu FROM layer_params ORDER BY layer ASC;";
  if (VAR_0 == FUNC_18(VAR_4, VAR_7, sizeof(VAR_7), &VAR_6, 0))
  {
   ccv_array_t* VAR_8 = FUNC_5(sizeof(ccv_convnet_layer_param_t), 3, 0);
   while (FUNC_19(VAR_6) == VAR_1)
   {
    ccv_convnet_layer_param_t VAR_9;
    VAR_9.type = FUNC_15(VAR_6, 0);
    VAR_9.input.matrix.rows = FUNC_15(VAR_6, 1);
    VAR_9.input.matrix.cols = FUNC_15(VAR_6, 2);
    VAR_9.input.matrix.channels = FUNC_15(VAR_6, 3);
    VAR_9.input.matrix.partition = FUNC_15(VAR_6, 4);
    VAR_9.input.node.count = FUNC_15(VAR_6, 5);
    VAR_9.bias = VAR_9.glorot = 0;
    switch (VAR_9.type)
    {
     case 131:
      VAR_9.output.convolutional.rows = FUNC_15(VAR_6, 6);
      VAR_9.output.convolutional.cols = FUNC_15(VAR_6, 7);
      VAR_9.output.convolutional.channels = FUNC_15(VAR_6, 8);
      VAR_9.output.convolutional.partition = FUNC_15(VAR_6, 9);
      VAR_9.output.convolutional.count = FUNC_15(VAR_6, 10);
      VAR_9.output.convolutional.strides = FUNC_15(VAR_6, 11);
      VAR_9.output.convolutional.border = FUNC_15(VAR_6, 12);
      break;
     case 130:
      VAR_9.output.full_connect.count = FUNC_15(VAR_6, 10);
      VAR_9.output.full_connect.relu = FUNC_15(VAR_6, 17);
      break;
     case 128:
     case 132:
      VAR_9.output.pool.strides = FUNC_15(VAR_6, 11);
      VAR_9.output.pool.border = FUNC_15(VAR_6, 12);
      VAR_9.output.pool.size = FUNC_15(VAR_6, 13);
      break;
     case 129:
      VAR_9.output.rnorm.size = FUNC_15(VAR_6, 13);
      VAR_9.output.rnorm.kappa = FUNC_14(VAR_6, 14);
      VAR_9.output.rnorm.alpha = FUNC_14(VAR_6, 15);
      VAR_9.output.rnorm.beta = FUNC_14(VAR_6, 16);
      break;
    }
    FUNC_6(VAR_8, &VAR_9);
   }
   FUNC_16(VAR_6);
   sqlite3_stmt* VAR_10 = 0;

   const char VAR_11[] =
    "SELECT input_height, input_width FROM convnet_params WHERE convnet = 0;";
   ccv_size_t VAR_12 = FUNC_9(0, 0);
   if (VAR_0 == FUNC_18(VAR_4, VAR_11, sizeof(VAR_11), &VAR_10, 0))
   {
    if (FUNC_19(VAR_10) == VAR_1)
    {
     VAR_12.height = FUNC_15(VAR_10, 0);
     VAR_12.width = FUNC_15(VAR_10, 1);
    }
    FUNC_16(VAR_10);
   }
   FUNC_0(VAR_12.height != 0 && VAR_12.width != 0);
   VAR_5 = FUNC_7(VAR_2, VAR_12, (ccv_convnet_layer_param_t*)FUNC_4(VAR_8, 0), VAR_8->rnum);
   FUNC_3(VAR_8);

   sqlite3_stmt* VAR_13 = 0;
   const char VAR_14[] =
    "SELECT layer, weight, bias, half_precision FROM layer_data;";
   if (VAR_0 == FUNC_18(VAR_4, VAR_14, sizeof(VAR_14), &VAR_13, 0))
   {
    while (FUNC_19(VAR_13) == VAR_1)
    {
     ccv_convnet_layer_t* VAR_15 = VAR_5->layers + FUNC_15(VAR_13, 0);
     int VAR_16 = FUNC_15(VAR_13, 3);
     int VAR_17 = FUNC_13(VAR_13, 1) / (VAR_16 ? sizeof(uint16_t) : sizeof(float));

     if (VAR_17 == VAR_15->wnum)
     {
      const void* VAR_18 = FUNC_12(VAR_13, 1);
      if (VAR_16)
      {
       float* VAR_19 = (float*)FUNC_2(sizeof(float) * VAR_15->wnum);
       FUNC_8((uint16_t*)VAR_18, VAR_19, VAR_15->wnum);
       VAR_18 = VAR_19;
      }
      switch (VAR_15->type)
      {
       case 131:
        FUNC_10(VAR_15->w, VAR_18, sizeof(float) * VAR_15->wnum);
        break;
       case 130:
        FUNC_10(VAR_15->w, VAR_18, sizeof(float) * VAR_15->wnum);
        break;
      }
      if (VAR_16)
       FUNC_1((void*)VAR_18);
     }
     int VAR_20 = FUNC_13(VAR_13, 2) / (VAR_16 ? sizeof(uint16_t) : sizeof(float));

     if (VAR_20 == (VAR_15->type == 131 ? VAR_15->net.convolutional.count : VAR_15->net.full_connect.count))
     {
      const void* VAR_21 = FUNC_12(VAR_13, 2);
      if (VAR_16)
      {
       float* VAR_22 = (float*)FUNC_2(sizeof(float) * (VAR_15->type == 131 ? VAR_15->net.convolutional.count : VAR_15->net.full_connect.count));
       FUNC_8((uint16_t*)VAR_21, VAR_22, VAR_15->type == 131 ? VAR_15->net.convolutional.count : VAR_15->net.full_connect.count);
       VAR_21 = VAR_22;
      }
      switch (VAR_15->type)
      {
       case 131:
        FUNC_10(VAR_15->bias, VAR_21, sizeof(float) * VAR_15->net.convolutional.count);
        break;
       case 130:
        FUNC_10(VAR_15->bias, VAR_21, sizeof(float) * VAR_15->net.full_connect.count);
        break;
      }
      if (VAR_16)
       FUNC_1((void*)VAR_21);
     }
    }
    FUNC_16(VAR_13);
   }
   sqlite3_stmt* VAR_23 = 0;

   const char VAR_24[] =
    "SELECT mean_activity FROM convnet_params WHERE convnet = 0;";
   if (VAR_0 == FUNC_18(VAR_4, VAR_24, sizeof(VAR_24), &VAR_23, 0))
   {
    if (FUNC_19(VAR_23) == VAR_1)
    {
     int VAR_25 = FUNC_13(VAR_23, 0) / sizeof(float);
     if (VAR_25 == VAR_5->input.height * VAR_5->input.width * VAR_5->channels)
      FUNC_10(VAR_5->mean_activity->data.f32, FUNC_12(VAR_23, 0), sizeof(float) * VAR_25);
    }
    FUNC_16(VAR_23);
   }
  }
  FUNC_11(VAR_4);
  return VAR_5;
 }
 return 0;
}
