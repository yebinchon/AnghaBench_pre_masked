
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int param ;
struct TYPE_3__ {int member_1; int member_0; } ;
struct TYPE_4__ {int hdr; int member_1; TYPE_1__ member_0; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_2__ MMAL_PARAMETER_BOOLEAN_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (int *,int *) ;

MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_0, uint32_t VAR_1, MMAL_BOOL_T VAR_2)
{
   MMAL_PARAMETER_BOOLEAN_T VAR_3 = {{VAR_1, sizeof(VAR_3)}, VAR_2};
   return FUNC_0(VAR_0, &VAR_3.hdr);
}
