
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct font_params {int dummy; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;
struct TYPE_4__ {TYPE_1__ sprites; } ;
typedef TYPE_2__ d3d10_video_t ;


 int FUNC_0 (int *,void*,char const*,struct font_params const*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static void FUNC_2(
      void* VAR_0, video_frame_info_t* VAR_1, const char* VAR_2, const void* VAR_3, void* VAR_4)
{
   d3d10_video_t* VAR_5 = (d3d10_video_t*)VAR_0;

   if (VAR_5)
   {
      if (VAR_5->sprites.enabled)
         FUNC_0(VAR_1, VAR_4, VAR_2, (const struct font_params*)VAR_3);
      else
         FUNC_1("OSD msg: %s\n", VAR_2);
   }
}
