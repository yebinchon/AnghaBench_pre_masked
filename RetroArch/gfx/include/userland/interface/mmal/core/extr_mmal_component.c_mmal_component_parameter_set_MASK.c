
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_PARAMETER_HEADER_T ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;

MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_1,
                                           const MMAL_PARAMETER_HEADER_T *VAR_2)
{
   (void)VAR_1;
   (void)VAR_2;

   FUNC_0("parameter id 0x%08x not supported", VAR_2->id);
   return VAR_0;
}
