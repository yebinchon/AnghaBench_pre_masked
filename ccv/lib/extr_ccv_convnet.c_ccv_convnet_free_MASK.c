
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int count; scalar_t__ mean_activity; TYPE_1__* layers; } ;
typedef TYPE_2__ ccv_convnet_t ;
struct TYPE_6__ {TYPE_2__* w; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(ccv_convnet_t* VAR_0)
{
 FUNC_1(VAR_0);
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
  if (VAR_0->layers[VAR_1].w)
   FUNC_0(VAR_0->layers[VAR_1].w);
 if (VAR_0->mean_activity)
  FUNC_2(VAR_0->mean_activity);
 FUNC_0(VAR_0);
}
