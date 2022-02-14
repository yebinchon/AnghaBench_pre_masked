
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* str; scalar_t__ status; } ;
typedef scalar_t__ MMAL_STATUS_T ;


 TYPE_1__* VAR_0 ;

const char *FUNC_0(MMAL_STATUS_T VAR_1)
{
   unsigned VAR_2;

   for (VAR_2=0; VAR_0[VAR_2].str; VAR_2++)
      if (VAR_0[VAR_2].status == VAR_1)
         break;

   return VAR_0[VAR_2].str ? VAR_0[VAR_2].str : "UNKNOWN";
}
