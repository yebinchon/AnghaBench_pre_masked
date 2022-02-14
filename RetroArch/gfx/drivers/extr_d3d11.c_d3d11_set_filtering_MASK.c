
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** samplers; } ;
typedef TYPE_1__ d3d11_video_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static void FUNC_0(void* VAR_4, unsigned VAR_5, bool VAR_6)
{
   unsigned VAR_7;
   d3d11_video_t* VAR_8 = (d3d11_video_t*)VAR_4;

   for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
   {
      if (VAR_6)
         VAR_8->samplers[VAR_2][VAR_7] = VAR_8->samplers[VAR_0][VAR_7];
      else
         VAR_8->samplers[VAR_2][VAR_7] = VAR_8->samplers[VAR_1][VAR_7];
   }
}
