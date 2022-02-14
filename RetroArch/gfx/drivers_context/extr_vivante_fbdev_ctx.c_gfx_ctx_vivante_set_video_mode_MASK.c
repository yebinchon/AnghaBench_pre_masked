
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int width; unsigned int height; int native_window; int egl; } ;
typedef TYPE_1__ vivante_ctx_data_t ;
typedef int video_frame_info_t ;
typedef int EGLint ;




 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static bool FUNC_8(void *VAR_0,
      video_frame_info_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      bool VAR_4)
{






   vivante_ctx_data_t *VAR_5 = (vivante_ctx_data_t*)VAR_0;


   if (!VAR_2 || !VAR_4)
      VAR_2 = 1280;
   if (!VAR_3 || !VAR_4)
      VAR_3 = 1024;

   VAR_5->width = VAR_2;
   VAR_5->height = VAR_3;
   VAR_5->native_window = FUNC_5(FUNC_6(0), 0, 0, 0, 0);






   return 1;

error:
   FUNC_0("[Vivante fbdev]: EGL error: %d.\n", FUNC_1());
   FUNC_7(VAR_0);
   return 0;
}
