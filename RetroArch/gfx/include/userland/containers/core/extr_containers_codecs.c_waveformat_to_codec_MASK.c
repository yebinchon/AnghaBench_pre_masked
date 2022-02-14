
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ VC_CONTAINER_FOURCC_T ;
struct TYPE_2__ {scalar_t__ codec; scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

VC_CONTAINER_FOURCC_T FUNC_0(uint16_t VAR_2)
{
   unsigned int VAR_3;
   for(VAR_3 = 0; VAR_1[VAR_3].codec != VAR_0; VAR_3++)
      if(VAR_1[VAR_3].id == VAR_2) break;
   return VAR_1[VAR_3].codec;
}
