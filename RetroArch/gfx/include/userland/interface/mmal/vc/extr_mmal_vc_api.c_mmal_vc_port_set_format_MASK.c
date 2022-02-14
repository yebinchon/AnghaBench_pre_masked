
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {unsigned int ports_num; TYPE_2__** ports; } ;
struct TYPE_13__ {TYPE_1__* priv; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_4__* component; } ;
struct TYPE_11__ {TYPE_3__* port; } ;
struct TYPE_10__ {TYPE_5__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;
typedef TYPE_5__ MMAL_COMPONENT_MODULE_T ;


 int FUNC_0 (char*,TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_3)
{
   MMAL_COMPONENT_T *VAR_4 = VAR_3->component;
   MMAL_COMPONENT_MODULE_T *VAR_5 = VAR_4->priv->module;
   MMAL_STATUS_T VAR_6;
   unsigned int VAR_7;

   VAR_6 = FUNC_3(VAR_3);
   if (VAR_6 != VAR_2)
   {
      FUNC_0("mmal_vc_port_info_set failed %p (%s)", VAR_3,
                FUNC_1(VAR_6));
      return VAR_6;
   }


   VAR_6 = FUNC_2(VAR_3);
   if (VAR_6 != VAR_2)
   {
      FUNC_0("mmal_vc_port_info_get failed %p (%s)", VAR_3,
                FUNC_1(VAR_6));
      return VAR_6;
   }


   if (VAR_3->type == VAR_0)
   {
      for (VAR_7 = 0; VAR_7 < VAR_5->ports_num; VAR_7++)
      {
         if (VAR_5->ports[VAR_7]->port->type != VAR_1)
            continue;

         VAR_6 = FUNC_2(VAR_5->ports[VAR_7]->port);
         if (VAR_6 != VAR_2)
         {
            FUNC_0("mmal_vc_port_info_get failed %p (%i)",
                      VAR_5->ports[VAR_7]->port, VAR_6);
            return VAR_6;
         }
      }
   }

   return VAR_2;
}
