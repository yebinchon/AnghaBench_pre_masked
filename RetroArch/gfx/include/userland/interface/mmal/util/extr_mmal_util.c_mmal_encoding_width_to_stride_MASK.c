
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ encoding; scalar_t__ pitch_num; scalar_t__ pitch_den; int alignment; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 TYPE_1__* VAR_1 ;

uint32_t FUNC_1(uint32_t VAR_2, uint32_t VAR_3)
{
   unsigned int VAR_4;

   for(VAR_4 = 0; VAR_1[VAR_4].encoding != VAR_0; VAR_4++)
      if(VAR_1[VAR_4].encoding == VAR_2) break;

   if(VAR_1[VAR_4].encoding == VAR_0)
      return 0;

   return FUNC_0(VAR_1[VAR_4].pitch_num * VAR_3 / VAR_1[VAR_4].pitch_den, VAR_1[VAR_4].alignment);
}
