
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vsync; } ;
typedef TYPE_1__ wiiu_video_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, bool VAR_1)
{
   wiiu_video_t *VAR_2 = (wiiu_video_t *) VAR_0;

   if (!VAR_2)
      return;

   VAR_2->vsync = !VAR_1;
   FUNC_0(!VAR_1);
}
