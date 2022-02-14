
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint16_t ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int layer_params_insert_qs ;
typedef int layer_data_insert_qs ;
typedef int convnet_params_insert_qs ;
struct TYPE_19__ {int half_precision; } ;
typedef TYPE_12__ ccv_convnet_write_param_t ;
struct TYPE_24__ {int height; int width; } ;
struct TYPE_20__ {int count; int channels; TYPE_3__ input; TYPE_2__* mean_activity; TYPE_14__* layers; } ;
typedef TYPE_13__ ccv_convnet_t ;
struct TYPE_29__ {int count; int relu; } ;
struct TYPE_28__ {int rows; int cols; int channels; int partition; int count; int strides; int border; } ;
struct TYPE_17__ {int size; int beta; int alpha; int kappa; } ;
struct TYPE_30__ {int strides; int border; int size; } ;
struct TYPE_18__ {TYPE_8__ full_connect; TYPE_7__ convolutional; TYPE_10__ rnorm; TYPE_9__ pool; } ;
struct TYPE_26__ {int count; } ;
struct TYPE_25__ {int rows; int cols; int channels; int partition; } ;
struct TYPE_27__ {TYPE_5__ node; TYPE_4__ matrix; } ;
struct TYPE_21__ {int type; int wnum; TYPE_11__ net; int * bias; int * w; TYPE_6__ input; } ;
typedef TYPE_14__ ccv_convnet_layer_t ;
struct TYPE_22__ {int * f32; } ;
struct TYPE_23__ {int rows; int cols; TYPE_1__ data; int type; } ;


 scalar_t__ VAR_0 ;





 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int,int *,int,int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,char const*,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char const*,int **) ;
 scalar_t__ FUNC_13 (int *,char const*,int,int **,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;

void FUNC_16(ccv_convnet_t* VAR_5, const char* VAR_6, ccv_convnet_write_param_t VAR_7)
{
 sqlite3* VAR_8 = 0;
 if (VAR_2 == FUNC_12(VAR_6, &VAR_8))
 {
  const char VAR_9[] =
   "CREATE TABLE IF NOT EXISTS layer_params "
   "(layer INTEGER PRIMARY KEY ASC, type INTEGER, "
   "input_matrix_rows INTEGER, input_matrix_cols INTEGER, input_matrix_channels INTEGER, input_matrix_partition INTEGER, input_node_count INTEGER, "
   "output_rows INTEGER, output_cols INTEGER, output_channels INTEGER, output_partition INTEGER, output_count INTEGER, output_strides INTEGER, output_border INTEGER, "
   "output_size INTEGER, output_kappa REAL, output_alpha REAL, output_beta REAL, output_relu INTEGER);"
   "CREATE TABLE IF NOT EXISTS convnet_params "
   "(convnet INTEGER PRIMARY KEY ASC, input_height INTEGER, input_width INTEGER, mean_activity BLOB);"
   "CREATE TABLE IF NOT EXISTS layer_data "
   "(layer INTEGER PRIMARY KEY ASC, weight BLOB, bias BLOB, half_precision INTEGER);";
  FUNC_2(VAR_2 == FUNC_10(VAR_8, VAR_9, 0, 0, 0));
  const char VAR_10[] =
   "REPLACE INTO layer_params "
   "(layer, type, "
   "input_matrix_rows, input_matrix_cols, input_matrix_channels, input_matrix_partition, input_node_count, "
   "output_rows, output_cols, output_channels, output_partition, output_count, output_strides, output_border, "
   "output_size, output_kappa, output_alpha, output_beta, output_relu) VALUES "
   "($layer, $type, "
   "$input_matrix_rows, $input_matrix_cols, $input_matrix_channels, $input_matrix_partition, $input_node_count, "
   "$output_rows, $output_cols, $output_channels, $output_partition, $output_count, $output_strides, $output_border, "
   "$output_size, $output_kappa, $output_alpha, $output_beta, $output_relu);";
  sqlite3_stmt* VAR_11 = 0;
  FUNC_2(VAR_2 == FUNC_13(VAR_8, VAR_10, sizeof(VAR_10), &VAR_11, 0));
  const char VAR_12[] =
   "REPLACE INTO layer_data "
   "(layer, weight, bias, half_precision) VALUES ($layer, $weight, $bias, $half_precision);";
  sqlite3_stmt* VAR_13 = 0;
  FUNC_2(VAR_2 == FUNC_13(VAR_8, VAR_12, sizeof(VAR_12), &VAR_13, 0));
  int VAR_14;
  for (VAR_14 = 0; VAR_14 < VAR_5->count; VAR_14++)
  {
   ccv_convnet_layer_t* VAR_15 = VAR_5->layers + VAR_14;

   FUNC_7(VAR_11, 1, VAR_14);
   FUNC_7(VAR_11, 2, VAR_15->type);
   FUNC_7(VAR_11, 3, VAR_15->input.matrix.rows);
   FUNC_7(VAR_11, 4, VAR_15->input.matrix.cols);
   FUNC_7(VAR_11, 5, VAR_15->input.matrix.channels);
   FUNC_7(VAR_11, 6, VAR_15->input.matrix.partition);
   FUNC_7(VAR_11, 7, VAR_15->input.node.count);
   switch (VAR_15->type)
   {
    case 131:
     FUNC_7(VAR_11, 8, VAR_15->net.convolutional.rows);
     FUNC_7(VAR_11, 9, VAR_15->net.convolutional.cols);
     FUNC_7(VAR_11, 10, VAR_15->net.convolutional.channels);
     FUNC_7(VAR_11, 11, VAR_15->net.convolutional.partition);
     FUNC_7(VAR_11, 12, VAR_15->net.convolutional.count);
     FUNC_7(VAR_11, 13, VAR_15->net.convolutional.strides);
     FUNC_7(VAR_11, 14, VAR_15->net.convolutional.border);
     break;
    case 130:
     FUNC_7(VAR_11, 12, VAR_15->net.full_connect.count);
     FUNC_7(VAR_11, 19, VAR_15->net.full_connect.relu);
     break;
    case 128:
    case 132:
     FUNC_7(VAR_11, 13, VAR_15->net.pool.strides);
     FUNC_7(VAR_11, 14, VAR_15->net.pool.border);
     FUNC_7(VAR_11, 15, VAR_15->net.pool.size);
     break;
    case 129:
     FUNC_7(VAR_11, 15, VAR_15->net.rnorm.size);
     FUNC_6(VAR_11, 16, VAR_15->net.rnorm.kappa);
     FUNC_6(VAR_11, 17, VAR_15->net.rnorm.alpha);
     FUNC_6(VAR_11, 18, VAR_15->net.rnorm.beta);
     break;
   }
   FUNC_2(VAR_1 == FUNC_15(VAR_11));
   FUNC_14(VAR_11);
   FUNC_8(VAR_11);

   if (VAR_15->type == 131 || VAR_15->type == 130)
   {
    FUNC_7(VAR_13, 1, VAR_14);
    if (VAR_7.half_precision)
    {
     uint16_t* VAR_16 = (uint16_t*)FUNC_3(sizeof(uint16_t) * VAR_15->wnum);
     FUNC_4(VAR_15->w, VAR_16, VAR_15->wnum);
     uint16_t* VAR_17 = (uint16_t*)FUNC_3(sizeof(uint16_t) * (VAR_15->type == 131 ? VAR_15->net.convolutional.count : VAR_15->net.full_connect.count));
     FUNC_4(VAR_15->bias, VAR_17, VAR_15->type == 131 ? VAR_15->net.convolutional.count : VAR_15->net.full_connect.count);
     FUNC_5(VAR_13, 2, VAR_16, sizeof(uint16_t) * VAR_15->wnum, VAR_4);
     FUNC_5(VAR_13, 3, VAR_17, sizeof(uint16_t) * (VAR_15->type == 131 ? VAR_15->net.convolutional.count : VAR_15->net.full_connect.count), VAR_4);
    } else {
     FUNC_5(VAR_13, 2, VAR_15->w, sizeof(float) * VAR_15->wnum, VAR_3);
     FUNC_5(VAR_13, 3, VAR_15->bias, sizeof(float) * (VAR_15->type == 131 ? VAR_15->net.convolutional.count : VAR_15->net.full_connect.count), VAR_3);
    }
    FUNC_7(VAR_13, 4, VAR_7.half_precision);
    FUNC_2(VAR_1 == FUNC_15(VAR_13));
    FUNC_14(VAR_13);
    FUNC_8(VAR_13);
   }
  }

  const char VAR_18[] =
   "REPLACE INTO convnet_params "
   "(convnet, mean_activity, input_height, input_width) VALUES (0, $mean_activity, $input_height, $input_width);";
  sqlite3_stmt* VAR_19 = 0;
  FUNC_2(VAR_2 == FUNC_13(VAR_8, VAR_18, sizeof(VAR_18), &VAR_19, 0));
  FUNC_2(VAR_5->mean_activity->rows == VAR_5->input.height);
  FUNC_2(VAR_5->mean_activity->cols == VAR_5->input.width);
  FUNC_2(FUNC_0(VAR_5->mean_activity->type) == VAR_5->channels);
  FUNC_2(FUNC_1(VAR_5->mean_activity->type) == VAR_0);
  FUNC_5(VAR_19, 1, VAR_5->mean_activity->data.f32, sizeof(float) * VAR_5->input.height * VAR_5->input.width * VAR_5->channels, VAR_3);
  FUNC_7(VAR_19, 2, VAR_5->input.height);
  FUNC_7(VAR_19, 3, VAR_5->input.width);
  FUNC_2(VAR_1 == FUNC_15(VAR_19));
  FUNC_14(VAR_19);
  FUNC_8(VAR_19);

  FUNC_11(VAR_11);
  FUNC_11(VAR_13);
  FUNC_11(VAR_19);
  FUNC_9(VAR_8);
 }
}
