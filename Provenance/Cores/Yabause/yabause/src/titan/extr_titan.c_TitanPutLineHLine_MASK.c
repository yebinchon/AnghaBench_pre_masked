
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_2__ {int ** linescreen; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(int VAR_1, s32 VAR_2, u32 VAR_3)
{
   if (VAR_1 == 0) return;

   {
      u32 * VAR_4 = VAR_0.linescreen[VAR_1] + VAR_2;
      *VAR_4 = VAR_3;
   }
}
