
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* module; } ;
struct TYPE_6__ {int callback_queue; } ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(MMAL_COMPONENT_T *VAR_0)
{
   while (FUNC_0(VAR_0->priv->module->callback_queue))
      FUNC_1(VAR_0);
}
