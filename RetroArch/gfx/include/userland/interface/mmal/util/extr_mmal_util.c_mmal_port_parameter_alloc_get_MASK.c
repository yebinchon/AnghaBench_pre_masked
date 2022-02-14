
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int id; int size; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_PARAMETER_HEADER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int,char*) ;
 int FUNC_2 (TYPE_1__*) ;

MMAL_PARAMETER_HEADER_T *FUNC_3(MMAL_PORT_T *VAR_4,
   uint32_t VAR_5, uint32_t VAR_6, MMAL_STATUS_T *VAR_7)
{
   MMAL_PARAMETER_HEADER_T *VAR_8 = ((void*)0);
   MMAL_STATUS_T VAR_9 = VAR_2;

   if (VAR_6 < sizeof(MMAL_PARAMETER_HEADER_T))
      VAR_6 = sizeof(MMAL_PARAMETER_HEADER_T);

   if ((VAR_8 = FUNC_1(1, VAR_6, "mmal_port_param_get")) == ((void*)0))
   {
      VAR_9 = VAR_0;
      goto error;
   }

   VAR_8->id = VAR_5;
   VAR_8->size = VAR_6;

   if ((VAR_9 = FUNC_0(VAR_4, VAR_8)) == VAR_1)
   {

      VAR_6 = VAR_8->size;
      FUNC_2(VAR_8);
      if ((VAR_8 = FUNC_1(1, VAR_6, "mmal_port_param_get")) == ((void*)0))
      {
         VAR_9 = VAR_0;
         goto error;
      }


      VAR_8->id = VAR_5;
      VAR_8->size = VAR_6;
      VAR_9 = FUNC_0(VAR_4, VAR_8);
   }

   if (VAR_9 != VAR_3)
      goto error;

end:
   if (VAR_7) *VAR_7 = VAR_9;
   return VAR_8;
error:
   if (VAR_8) FUNC_2(VAR_8);
   VAR_8 = ((void*)0);
   goto end;
}
