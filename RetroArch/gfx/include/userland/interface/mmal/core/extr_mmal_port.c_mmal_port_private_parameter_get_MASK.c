
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_PARAMETER_HEADER_T ;


 int VAR_0 ;

 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_1,
                                                     MMAL_PARAMETER_HEADER_T *VAR_2)
{
   switch (VAR_2->id)
   {
   case 128:
      return FUNC_0(VAR_1, VAR_2);
   default:
      return VAR_0;
   }
}
