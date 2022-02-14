
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_frame_info_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,unsigned int,unsigned int,int) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0,
      video_frame_info_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      bool VAR_4)
{
   if (!FUNC_2(((void*)0), VAR_2, VAR_3, VAR_4))
   {
      FUNC_0("[GDI]: win32_set_video_mode failed.\n");
      FUNC_1(VAR_0);
      return 0;
   }

   return 1;
}
