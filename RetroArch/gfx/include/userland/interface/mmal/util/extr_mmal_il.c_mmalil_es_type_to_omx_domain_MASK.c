
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int domain; } ;
typedef int OMX_PORTDOMAINTYPE ;
typedef scalar_t__ MMAL_ES_TYPE_T ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

OMX_PORTDOMAINTYPE FUNC_0(MMAL_ES_TYPE_T VAR_2)
{
   unsigned int VAR_3;
   for(VAR_3 = 0; VAR_1[VAR_3].type != VAR_0; VAR_3++)
      if(VAR_1[VAR_3].type == VAR_2) break;
   return VAR_1[VAR_3].domain;
}
