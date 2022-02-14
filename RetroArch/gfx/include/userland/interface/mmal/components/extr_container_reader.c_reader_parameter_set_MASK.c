
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int container; int uri; } ;
struct TYPE_15__ {TYPE_1__* priv; } ;
struct TYPE_14__ {int id; int size; } ;
struct TYPE_13__ {int str; } ;
struct TYPE_12__ {TYPE_5__* component; } ;
struct TYPE_11__ {TYPE_6__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PARAMETER_STRING_T ;
typedef int MMAL_PARAMETER_SEEK_T ;
typedef TYPE_4__ MMAL_PARAMETER_HEADER_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;
typedef TYPE_6__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,int const*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_3, const MMAL_PARAMETER_HEADER_T *VAR_4)
{
   MMAL_COMPONENT_T *VAR_5 = VAR_3->component;
   MMAL_COMPONENT_MODULE_T *VAR_6 = VAR_5->priv->module;

   switch(VAR_4->id)
   {
   case 128:
      if(VAR_6->container)
         return VAR_0;

      FUNC_0(VAR_6->uri, 0, sizeof(VAR_6->uri));
      FUNC_3(VAR_6->uri, ((const MMAL_PARAMETER_STRING_T *)VAR_4)->str, sizeof(VAR_6->uri)-1 );
      return FUNC_1(VAR_5, VAR_6->uri);

   case 129:
      if(!VAR_6->container || VAR_4->size < sizeof(MMAL_PARAMETER_SEEK_T))
         return VAR_0;

      return FUNC_2(VAR_5, (const MMAL_PARAMETER_SEEK_T *)VAR_4);

   default:
      return VAR_1;
   }

   return VAR_2;
}
