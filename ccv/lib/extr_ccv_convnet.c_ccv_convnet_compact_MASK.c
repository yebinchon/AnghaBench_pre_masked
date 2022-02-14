
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; TYPE_4__* layers; scalar_t__* denoms; scalar_t__* acts; } ;
typedef TYPE_1__ ccv_convnet_t ;
struct TYPE_6__ {scalar_t__ reserved; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(ccv_convnet_t* VAR_0)
{



 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
 {
  if (VAR_0->acts[VAR_1])
   FUNC_2(VAR_0->acts[VAR_1]);
  VAR_0->acts[VAR_1] = 0;
  if (VAR_0->denoms)
  {
   if (VAR_0->denoms[VAR_1])
    FUNC_2(VAR_0->denoms[VAR_1]);
   VAR_0->denoms[VAR_1] = 0;
  }
  if (FUNC_0(VAR_0->layers + VAR_1))
  {
   FUNC_1(VAR_0->layers[VAR_1].reserved);
   VAR_0->layers[VAR_1].reserved = 0;
  }
 }
}
