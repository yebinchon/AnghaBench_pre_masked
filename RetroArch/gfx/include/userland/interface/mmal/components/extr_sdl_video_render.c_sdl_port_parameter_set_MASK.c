
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


struct TYPE_14__ {int display_region; } ;
struct TYPE_13__ {TYPE_1__* priv; } ;
struct TYPE_12__ {int set; int dest_rect; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_10__ {TYPE_5__* component; } ;
struct TYPE_9__ {TYPE_6__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PARAMETER_HEADER_T ;
typedef TYPE_4__ MMAL_DISPLAYREGION_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;
typedef TYPE_6__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_0(MMAL_PORT_T *VAR_3, const MMAL_PARAMETER_HEADER_T *VAR_4)
{
   MMAL_STATUS_T VAR_5 = VAR_1;
   MMAL_COMPONENT_T *VAR_6 = VAR_3->component;
   MMAL_COMPONENT_MODULE_T *VAR_7 = VAR_6->priv->module;

   switch (VAR_4->id)
   {
   case 128:
      {

         const MMAL_DISPLAYREGION_T *VAR_8 = (const MMAL_DISPLAYREGION_T *)VAR_4;
         if (VAR_8->set & VAR_0)
            VAR_7->display_region = VAR_8->dest_rect;
         VAR_5 = VAR_2;
      }
      break;
   default:
      break;
   }
   return VAR_5;
}
