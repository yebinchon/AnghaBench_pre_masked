
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


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_14__ {int uri; int container; } ;
struct TYPE_13__ {TYPE_1__* priv; } ;
struct TYPE_12__ {int id; } ;
struct TYPE_11__ {int uri; } ;
struct TYPE_10__ {TYPE_5__* component; } ;
struct TYPE_9__ {TYPE_6__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PARAMETER_URI_T ;
typedef TYPE_4__ MMAL_PARAMETER_HEADER_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;
typedef TYPE_6__ MMAL_COMPONENT_MODULE_T ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int *,int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_PORT_T *VAR_3, const MMAL_PARAMETER_HEADER_T *VAR_4)
{
   MMAL_COMPONENT_T *VAR_5 = VAR_3->component;
   MMAL_COMPONENT_MODULE_T *VAR_6 = VAR_5->priv->module;
   VC_CONTAINER_STATUS_T VAR_7;

   switch(VAR_4->id)
   {
   case 128:
      if(VAR_6->container)
         return VAR_0;

      FUNC_2(VAR_6->uri, 0, sizeof(VAR_6->uri));
      FUNC_3(VAR_6->uri, ((const MMAL_PARAMETER_URI_T *)VAR_4)->uri, sizeof(VAR_6->uri)-1 );


      VAR_6->container = FUNC_4(VAR_6->uri, &VAR_7, 0, 0);
      if(!VAR_6->container)
      {
         FUNC_0("error opening file %s (%i)", VAR_6->uri, VAR_7);
         return FUNC_1(VAR_7);
      }
      return VAR_2;

   default:
      return VAR_1;
   }

   return VAR_2;
}
