
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; TYPE_1__* layers; } ;
typedef TYPE_2__ ccv_convnet_t ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(ccv_convnet_t* VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++)
  if (VAR_1->layers[VAR_2].type == VAR_0)
   return VAR_2;
 return -1;
}
