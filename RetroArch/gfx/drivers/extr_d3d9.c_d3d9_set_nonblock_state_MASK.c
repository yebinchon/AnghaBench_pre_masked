
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vsync; } ;
struct TYPE_5__ {int needs_restore; int dev; TYPE_1__ video_info; } ;
typedef TYPE_2__ d3d9_video_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, bool VAR_4)
{
   int VAR_5 = 0;
   d3d9_video_t *VAR_6 = (d3d9_video_t*)VAR_3;

   if (!VAR_6)
      return;

   if (!VAR_4)
      VAR_5 = 1;

   VAR_6->video_info.vsync = !VAR_4;

   (void)VAR_5;
   VAR_6->needs_restore = 1;
   FUNC_0(VAR_6);

}
