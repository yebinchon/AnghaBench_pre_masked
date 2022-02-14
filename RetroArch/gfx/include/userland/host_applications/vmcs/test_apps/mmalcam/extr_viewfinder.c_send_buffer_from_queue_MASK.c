
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_QUEUE_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_1, MMAL_QUEUE_T *VAR_2)
{
   MMAL_STATUS_T VAR_3 = VAR_0;
   MMAL_BUFFER_HEADER_T *VAR_4;

   if (!VAR_2)
      return VAR_0;

   VAR_4 = FUNC_2(VAR_2);

   if (VAR_4)
   {
      VAR_3 = FUNC_1(VAR_1, VAR_4);

      if (VAR_3 != VAR_0)
      {
         FUNC_3(VAR_2, VAR_4);
         FUNC_0("%s send failed (%i)", VAR_1->name, VAR_3);
      }
   }

   return VAR_3;
}
