
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ length; scalar_t__ cmd; } ;
struct TYPE_15__ {scalar_t__ status; int queue; } ;
struct TYPE_14__ {TYPE_1__* priv; } ;
struct TYPE_13__ {TYPE_3__* component; } ;
struct TYPE_12__ {TYPE_4__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef TYPE_4__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_2 (int ,TYPE_5__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_PORT_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2)
{
   MMAL_COMPONENT_T *VAR_3 = VAR_1->component;
   MMAL_COMPONENT_MODULE_T *VAR_4 = VAR_3->priv->module;


   if (VAR_2->cmd)
   {
      FUNC_0("discarding event %i on port %p", (int)VAR_2->cmd, VAR_1);
      VAR_2->length = 0;
      FUNC_1(VAR_1, VAR_2);
      return VAR_0;
   }

   if (VAR_4->status != VAR_0)
      return VAR_4->status;

   FUNC_2(VAR_4->queue, VAR_2);

   return VAR_0;
}
