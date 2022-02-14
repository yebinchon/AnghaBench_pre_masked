
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int clock_num; TYPE_2__* priv; int * clock; } ;
struct TYPE_6__ {TYPE_1__* module; } ;
struct TYPE_5__ {scalar_t__ pending_scale; } ;
typedef int MMAL_RATIONAL_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(MMAL_COMPONENT_T *VAR_0, MMAL_RATIONAL_T VAR_1)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_0->clock_num; ++VAR_2)
      FUNC_0(VAR_0->clock[VAR_2], VAR_1);

   VAR_0->priv->module->pending_scale = 0;
}
