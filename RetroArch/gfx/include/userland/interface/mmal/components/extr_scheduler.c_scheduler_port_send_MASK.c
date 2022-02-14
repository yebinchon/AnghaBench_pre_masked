
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int pts; int cmd; } ;
struct TYPE_16__ {int member_1; int member_0; } ;
struct TYPE_15__ {int * clock; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_2__* priv; TYPE_4__* component; } ;
struct TYPE_13__ {TYPE_1__* module; } ;
struct TYPE_12__ {int queue; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;
typedef TYPE_5__ MMAL_CLOCK_BUFFER_INFO_T ;
typedef TYPE_6__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int FUNC_3 () ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2)
{
   MMAL_COMPONENT_T *VAR_3 = VAR_1->component;


   if (VAR_1->type == VAR_0 && !VAR_2->cmd)
   {
      MMAL_CLOCK_BUFFER_INFO_T VAR_4 = { VAR_2->pts, FUNC_3() };
      FUNC_1(VAR_1->component->clock[0], &VAR_4);
   }

   FUNC_2(VAR_1->priv->module->queue, VAR_2);
   return FUNC_0(VAR_3);
}
