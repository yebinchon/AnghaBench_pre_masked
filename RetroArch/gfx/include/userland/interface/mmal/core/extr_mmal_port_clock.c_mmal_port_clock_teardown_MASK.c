
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {TYPE_1__* clock; } ;
struct TYPE_5__ {int clock; int queue; } ;
typedef TYPE_3__ MMAL_PORT_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(MMAL_PORT_T *VAR_0)
{
   if (!VAR_0)
      return;
   FUNC_1(VAR_0->priv->clock->queue);
   FUNC_0(VAR_0->priv->clock->clock);
}
