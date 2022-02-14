
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_FOURCC_T ;
struct TYPE_2__ {scalar_t__ codec; int encoding; } ;
typedef int MMAL_FOURCC_T ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static MMAL_FOURCC_T FUNC_0(VC_CONTAINER_FOURCC_T VAR_2)
{
   unsigned int VAR_3;
   for(VAR_3 = 0; VAR_1[VAR_3].codec != VAR_0; VAR_3++)
      if(VAR_1[VAR_3].codec == VAR_2)
         break;
   return VAR_1[VAR_3].encoding;
}
