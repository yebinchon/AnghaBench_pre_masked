
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ length; } ;
struct TYPE_11__ {int queue; } ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {TYPE_3__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PORT_MODULE_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_1)
{
   MMAL_PORT_MODULE_T *VAR_2 = VAR_1->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_3;




   VAR_3 = FUNC_1(VAR_2->queue);
   while(VAR_3)
   {
      VAR_3->length = 0;
      FUNC_0(VAR_1, VAR_3);
      VAR_3 = FUNC_1(VAR_2->queue);
   }

   return VAR_0;
}
