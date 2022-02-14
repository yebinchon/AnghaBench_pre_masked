
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int param ;
struct TYPE_3__ {int member_1; int member_0; } ;
struct TYPE_4__ {int enable; int hdr; int member_1; TYPE_1__ member_0; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_2__ MMAL_PARAMETER_BOOLEAN_T ;
typedef int MMAL_BOOL_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_1, uint32_t VAR_2, MMAL_BOOL_T *VAR_3)
{
   MMAL_PARAMETER_BOOLEAN_T VAR_4 = {{VAR_2, sizeof(VAR_4)}, 0};

   MMAL_STATUS_T VAR_5 = FUNC_0(VAR_1, &VAR_4.hdr);
   if (VAR_5 == VAR_0)
      *VAR_3 = VAR_4.enable;
   return VAR_5;
}
