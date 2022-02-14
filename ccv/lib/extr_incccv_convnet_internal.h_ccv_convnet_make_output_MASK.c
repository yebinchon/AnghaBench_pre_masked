
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int partition; } ;
struct TYPE_14__ {TYPE_5__ matrix; } ;
struct TYPE_11__ {int border; int strides; int size; } ;
struct TYPE_10__ {int count; } ;
struct TYPE_9__ {int rows; int cols; int border; int strides; } ;
struct TYPE_12__ {TYPE_3__ pool; TYPE_2__ full_connect; TYPE_1__ convolutional; } ;
struct TYPE_15__ {int type; TYPE_6__ input; TYPE_4__ net; } ;
typedef TYPE_7__ ccv_convnet_layer_t ;







 int FUNC_0 (int) ;

__attribute__((used)) inline static void FUNC_1(ccv_convnet_layer_t* VAR_0, int VAR_1, int VAR_2, int* VAR_3, int* VAR_4, int* VAR_5)
{
 FUNC_0(VAR_3 != 0 && VAR_4 != 0);
 switch(VAR_0->type)
 {
  case 131:
   FUNC_0(VAR_0->net.convolutional.rows % 2);
   FUNC_0(VAR_0->net.convolutional.cols % 2);
   FUNC_0((VAR_1 + VAR_0->net.convolutional.border * 2 - VAR_0->net.convolutional.rows) % VAR_0->net.convolutional.strides == 0);
   FUNC_0((VAR_2 + VAR_0->net.convolutional.border * 2 - VAR_0->net.convolutional.cols) % VAR_0->net.convolutional.strides == 0);
   *VAR_3 = (VAR_1 + VAR_0->net.convolutional.border * 2 - VAR_0->net.convolutional.rows + VAR_0->net.convolutional.strides - 1) / VAR_0->net.convolutional.strides + 1;
   *VAR_4 = (VAR_2 + VAR_0->net.convolutional.border * 2 - VAR_0->net.convolutional.cols + VAR_0->net.convolutional.strides - 1) / VAR_0->net.convolutional.strides + 1;
   *VAR_5 = VAR_0->input.matrix.partition;
   break;
  case 130:
   *VAR_3 = VAR_0->net.full_connect.count;
   *VAR_4 = 1;
   *VAR_5 = 1;
   break;
  case 129:
   *VAR_3 = VAR_1;
   *VAR_4 = VAR_2;
   *VAR_5 = VAR_0->input.matrix.partition;
   break;
  case 128:
  case 132:
   FUNC_0((VAR_1 + VAR_0->net.pool.border * 2 - VAR_0->net.pool.size) % VAR_0->net.pool.strides == 0);
   FUNC_0((VAR_2 + VAR_0->net.pool.border * 2 - VAR_0->net.pool.size) % VAR_0->net.pool.strides == 0);
   *VAR_3 = (VAR_1 + VAR_0->net.pool.border * 2 - VAR_0->net.pool.size + VAR_0->net.pool.strides - 1) / VAR_0->net.pool.strides + 1;
   *VAR_4 = (VAR_2 + VAR_0->net.pool.border * 2 - VAR_0->net.pool.size + VAR_0->net.pool.strides - 1) / VAR_0->net.pool.strides + 1;
   *VAR_5 = VAR_0->input.matrix.partition;
   break;
  default:
   FUNC_0(0);
   break;
 }
}
