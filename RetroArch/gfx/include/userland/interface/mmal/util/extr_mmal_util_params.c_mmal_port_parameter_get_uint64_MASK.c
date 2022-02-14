
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int param ;
struct TYPE_3__ {int member_1; int member_0; } ;
struct TYPE_4__ {long long member_1; int value; int hdr; TYPE_1__ member_0; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_2__ MMAL_PARAMETER_UINT64_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_1, uint32_t VAR_2, uint64_t *VAR_3)
{
   MMAL_PARAMETER_UINT64_T VAR_4 = {{VAR_2, sizeof(VAR_4)}, 0LL};

   MMAL_STATUS_T VAR_5 = FUNC_0(VAR_1, &VAR_4.hdr);
   if (VAR_5 == VAR_0)
      *VAR_3 = VAR_4.value;
   return VAR_5;
}
