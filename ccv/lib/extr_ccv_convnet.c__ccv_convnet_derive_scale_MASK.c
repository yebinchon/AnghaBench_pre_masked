
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* layers; } ;
typedef TYPE_4__ ccv_convnet_t ;
struct TYPE_8__ {int strides; } ;
struct TYPE_7__ {int strides; } ;
struct TYPE_9__ {TYPE_2__ pool; TYPE_1__ convolutional; } ;
struct TYPE_11__ {int type; TYPE_3__ net; } ;
typedef TYPE_5__ ccv_convnet_layer_t ;






__attribute__((used)) static int FUNC_0(ccv_convnet_t* VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = 1;
 for (VAR_2 = VAR_1; VAR_2 >= 0; VAR_2--)
 {
  ccv_convnet_layer_t* VAR_4 = VAR_0->layers + VAR_2;
  switch (VAR_4->type)
  {
   case 129:
    VAR_3 *= VAR_4->net.convolutional.strides;
    break;
   case 128:
   case 130:
    VAR_3 *= VAR_4->net.pool.strides;
    break;
  }
 }
 return VAR_3;
}
