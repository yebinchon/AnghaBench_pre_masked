
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_METADATA_KEY_T ;
struct TYPE_2__ {scalar_t__ key; char const* name; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

const char *FUNC_0(VC_CONTAINER_METADATA_KEY_T VAR_2)
{
   int VAR_3;
   for(VAR_3 = 0; VAR_1[VAR_3].key != VAR_0; VAR_3++ )
      if(VAR_1[VAR_3].key == VAR_2) break;
   return VAR_1[VAR_3].name;
}
