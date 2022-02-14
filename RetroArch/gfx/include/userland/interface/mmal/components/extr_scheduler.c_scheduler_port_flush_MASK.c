
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int last_ts; int queue; } ;
struct TYPE_9__ {TYPE_1__* priv; TYPE_2__* component; } ;
struct TYPE_8__ {int * clock; } ;
struct TYPE_7__ {TYPE_4__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_PORT_MODULE_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_PORT_T *VAR_2)
{
   MMAL_PORT_MODULE_T *VAR_3 = VAR_2->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_4;


   FUNC_1(VAR_2->component->clock[0]);


   VAR_4 = FUNC_2(VAR_3->queue);
   while (VAR_4)
   {
      FUNC_0(VAR_2, VAR_4);
      VAR_4 = FUNC_2(VAR_3->queue);
   }

   VAR_2->priv->module->last_ts = VAR_1;
   return VAR_0;
}
