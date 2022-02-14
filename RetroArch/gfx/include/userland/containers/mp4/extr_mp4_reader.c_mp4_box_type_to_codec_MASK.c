
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_FOURCC_T ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ codec; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static VC_CONTAINER_FOURCC_T FUNC_0(VC_CONTAINER_FOURCC_T VAR_1)
{
   int VAR_2;
   for(VAR_2 = 0; VAR_0[VAR_2].type; VAR_2++ )
      if(VAR_0[VAR_2].type == VAR_1) break;
   return VAR_0[VAR_2].codec;
}
