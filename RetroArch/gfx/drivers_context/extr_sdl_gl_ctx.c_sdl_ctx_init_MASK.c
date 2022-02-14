
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_frame_info_t ;
typedef void gfx_ctx_sdl_data_t ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static void *FUNC_10(video_frame_info_t *VAR_4, void *VAR_5)
{
   gfx_ctx_sdl_data_t *VAR_6 = (gfx_ctx_sdl_data_t*)
      FUNC_7(1, sizeof(gfx_ctx_sdl_data_t));

   if (!VAR_6)
      return ((void*)0);





   if (FUNC_5(0) == 0)
   {
      if (FUNC_3(VAR_0) < 0)
         goto error;
   }
   else if (FUNC_4(VAR_0) < 0)
      goto error;

   FUNC_0("[SDL_GL] SDL %i.%i.%i gfx context driver initialized.\n",
           VAR_1, VAR_2, VAR_3);

   return VAR_6;

error:
   FUNC_1("[SDL_GL]: Failed to initialize SDL gfx context driver: %s\n",
              FUNC_2());

   FUNC_9(VAR_6);

   if (VAR_6)
      FUNC_8(VAR_6);

   return ((void*)0);
}
