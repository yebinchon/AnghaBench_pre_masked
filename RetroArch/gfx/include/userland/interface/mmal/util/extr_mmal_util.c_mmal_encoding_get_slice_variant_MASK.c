
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ encoding; scalar_t__ sliced_encoding; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

uint32_t FUNC_0(uint32_t VAR_2)
{
   unsigned int VAR_3;

   for(VAR_3 = 0; VAR_1[VAR_3].encoding != VAR_0; VAR_3++)
      if(VAR_1[VAR_3].encoding == VAR_2) break;

   return VAR_1[VAR_3].sliced_encoding;
}
