
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int needs_restore; int video_info; } ;
typedef TYPE_1__ d3d8_video_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0)
{
   d3d8_video_t *VAR_1 = (d3d8_video_t*)VAR_0;

   if (!VAR_1)
      return 0;

   FUNC_1(VAR_1);

   if (!FUNC_2(VAR_1, &VAR_1->video_info))
   {
      FUNC_0("[D3D8]: Restore error.\n");
      return 0;
   }

   VAR_1->needs_restore = 0;

   return 1;
}
