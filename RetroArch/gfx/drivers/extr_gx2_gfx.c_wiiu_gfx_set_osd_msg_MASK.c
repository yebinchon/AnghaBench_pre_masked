
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ render_msg_enabled; } ;
typedef TYPE_1__ wiiu_video_t ;
typedef int video_frame_info_t ;


 int FUNC_0 (int *,void*,char const*,void const*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
                                 video_frame_info_t *VAR_1,
                                 const char *VAR_2,
                                 const void *VAR_3, void *VAR_4)
{
   wiiu_video_t *VAR_5 = (wiiu_video_t *)VAR_0;

   if (VAR_5)
   {
      if (VAR_5->render_msg_enabled)
         FUNC_0(VAR_1, VAR_4, VAR_2, VAR_3);
      else
         FUNC_1("OSD msg: %s\n", VAR_2);
   }

}
