
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int control; } ;
struct TYPE_5__ {int member_1; unsigned int num; int member_0; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_RATIONAL_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_1__) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(MMAL_COMPONENT_T *VAR_3, float VAR_4, float VAR_5)
{
   MMAL_RATIONAL_T VAR_6 = {0,65536};
   MMAL_STATUS_T VAR_7;

   if (!VAR_3)
      return 1;

   VAR_6.num = (unsigned int)(VAR_4 * 65536);
   VAR_7 = FUNC_0(VAR_3->control, VAR_0, VAR_6);
   if (VAR_7 != VAR_2)
      return FUNC_1(VAR_7);

   VAR_6.num = (unsigned int)(VAR_5 * 65536);
   VAR_7 = FUNC_0(VAR_3->control, VAR_1, VAR_6);
   return FUNC_1(VAR_7);
}
