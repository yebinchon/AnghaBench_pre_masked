
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int count; TYPE_8__* layers; } ;
typedef TYPE_7__ ccv_convnet_t ;
struct TYPE_15__ {int count; } ;
struct TYPE_14__ {int rows; int cols; int channels; } ;
struct TYPE_16__ {TYPE_5__ node; TYPE_4__ matrix; } ;
struct TYPE_12__ {int channels; int count; } ;
struct TYPE_11__ {scalar_t__ relu; } ;
struct TYPE_13__ {TYPE_2__ convolutional; TYPE_1__ full_connect; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_6__ input; TYPE_3__ net; } ;
typedef TYPE_8__ ccv_convnet_layer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_8__*,int,int,int*,int*,int*) ;

int FUNC_1(ccv_convnet_t* VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 if (VAR_2->count < 1)
  return -1;

 if (VAR_2->layers[VAR_2->count - 1].type != VAR_1)
  return -1;

 if (VAR_2->layers[VAR_2->count - 1].net.full_connect.relu)
  return -1;
 VAR_8 = 3;
 for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++)
 {
  ccv_convnet_layer_t* VAR_9 = VAR_2->layers + VAR_4;
  if (VAR_4 > 0 && (VAR_5 != VAR_9->input.matrix.rows || VAR_6 != VAR_9->input.matrix.cols))
   return -1;

  if (VAR_8 != VAR_9->input.matrix.channels && VAR_9->type != VAR_1)
   return -1;
  FUNC_0(VAR_9, VAR_9->input.matrix.rows, VAR_9->input.matrix.cols, &VAR_5, &VAR_6, &VAR_7);
  if (VAR_9->type == VAR_0)
  {

   if (VAR_9->input.matrix.channels != VAR_9->net.convolutional.channels)
    return -1;

   VAR_8 = VAR_9->net.convolutional.count;
  }
 }
 if (VAR_5 * VAR_6 != VAR_3)
  return -1;
 int VAR_10 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++)
 {
  ccv_convnet_layer_t* VAR_11 = VAR_2->layers + VAR_4;
  if (VAR_11->type == VAR_1)
  {
   VAR_10 = VAR_4;
   break;
  }
 }

 for (VAR_4 = VAR_10; VAR_4 < VAR_2->count; VAR_4++)
  if (VAR_2->layers[VAR_4].type != VAR_1 ||
   VAR_2->layers[VAR_4].input.matrix.rows * VAR_2->layers[VAR_4].input.matrix.cols * VAR_2->layers[VAR_4].input.matrix.channels != VAR_2->layers[VAR_4].input.node.count)
   return -1;
 return 0;
}
