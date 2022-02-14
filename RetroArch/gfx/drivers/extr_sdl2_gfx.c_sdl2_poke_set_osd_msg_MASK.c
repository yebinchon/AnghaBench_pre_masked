
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_frame_info_t ;
typedef int sdl2_video_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      video_frame_info_t *VAR_1,
      const char *VAR_2,
      const void *VAR_3, void *VAR_4)
{
   sdl2_video_t *VAR_5 = (sdl2_video_t*)VAR_0;
   FUNC_1(VAR_5, VAR_2);
   FUNC_0("[SDL2]: OSD MSG: %s\n", VAR_2);
}
