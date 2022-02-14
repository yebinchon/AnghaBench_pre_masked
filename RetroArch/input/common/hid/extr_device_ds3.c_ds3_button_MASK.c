
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int buttons; } ;
typedef TYPE_1__ ds3_instance_t ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, uint16_t VAR_1)
{
   ds3_instance_t *VAR_2 = (ds3_instance_t *)VAR_0;
   if(!VAR_2 || VAR_1 > 31)
      return 0;

   return VAR_2->buttons & (1 << VAR_1);
}
