
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int clock_discont; } ;
struct TYPE_12__ {unsigned int clock_num; TYPE_4__** clock; TYPE_1__* priv; } ;
struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {TYPE_2__* module; } ;
struct TYPE_9__ {int stream; } ;
struct TYPE_8__ {TYPE_6__* module; } ;
typedef TYPE_5__ MMAL_COMPONENT_T ;
typedef TYPE_6__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(MMAL_COMPONENT_T *VAR_1)
{
   MMAL_COMPONENT_MODULE_T *VAR_2 = VAR_1->priv->module;
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_1->clock_num; ++VAR_3)
      FUNC_0(VAR_1->clock[VAR_3]->priv->module->stream);

   VAR_2->clock_discont = VAR_0;
}
