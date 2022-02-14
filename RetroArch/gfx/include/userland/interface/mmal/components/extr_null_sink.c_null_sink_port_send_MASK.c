
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ length; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_2, MMAL_BUFFER_HEADER_T *VAR_3)
{
   MMAL_BOOL_T VAR_4 = VAR_3->flags & VAR_0;


   VAR_3->length = 0;
   FUNC_1(VAR_2, VAR_3);


   if(VAR_4)
      return FUNC_0(VAR_2);

   return VAR_1;
}
