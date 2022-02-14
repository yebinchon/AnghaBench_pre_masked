
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int queue; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_4__* component; TYPE_1__* priv; } ;
struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_11__ {scalar_t__ sent_flags; } ;
struct TYPE_10__ {TYPE_3__* module; } ;
struct TYPE_9__ {TYPE_6__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef TYPE_6__ MMAL_PORT_MODULE_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_2)
{
   MMAL_PORT_MODULE_T *VAR_3 = VAR_2->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_4;


   VAR_4 = FUNC_1(VAR_3->queue);
   while(VAR_4)
   {
      FUNC_0(VAR_2, VAR_4);
      VAR_4 = FUNC_1(VAR_3->queue);
   }

   if (VAR_2->type == VAR_0)
      VAR_2->component->priv->module->sent_flags = 0;

   return VAR_1;
}
