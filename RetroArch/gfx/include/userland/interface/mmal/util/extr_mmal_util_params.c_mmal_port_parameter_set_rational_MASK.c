
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int param ;
struct TYPE_7__ {int member_1; int member_0; } ;
struct TYPE_6__ {int member_1; int member_0; } ;
struct TYPE_9__ {int hdr; TYPE_2__ member_1; TYPE_1__ member_0; } ;
struct TYPE_8__ {int den; int num; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_RATIONAL_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_4__ MMAL_PARAMETER_RATIONAL_T ;


 int FUNC_0 (int *,int *) ;

MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_0, uint32_t VAR_1, MMAL_RATIONAL_T VAR_2)
{
   MMAL_PARAMETER_RATIONAL_T VAR_3 = {{VAR_1, sizeof(VAR_3)}, {VAR_2.num, VAR_2.den}};
   return FUNC_0(VAR_0, &VAR_3.hdr);
}
