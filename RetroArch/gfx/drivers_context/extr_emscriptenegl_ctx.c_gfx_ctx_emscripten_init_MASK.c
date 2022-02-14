
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_frame_info_t ;
typedef void emscripten_ctx_data_t ;
typedef int EGLint ;





 scalar_t__ VAR_0 ;






 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned int*,unsigned int*) ;
 int FUNC_5 (int *,int const,void*,int*,int*,int*,int const*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (void*) ;

__attribute__((used)) static void *FUNC_9(video_frame_info_t *VAR_4,
   void *VAR_5)
{
   emscripten_ctx_data_t *VAR_6 = (emscripten_ctx_data_t*)
      FUNC_1(1, sizeof(*VAR_6));

   if (!VAR_6)
      return ((void*)0);

   (void)VAR_5;

   if (VAR_2 == 0 || VAR_1 == 0)
      FUNC_7("#canvas",
         &VAR_2, &VAR_1);
   return VAR_6;

error:
   FUNC_8(VAR_5);
   return ((void*)0);
}
