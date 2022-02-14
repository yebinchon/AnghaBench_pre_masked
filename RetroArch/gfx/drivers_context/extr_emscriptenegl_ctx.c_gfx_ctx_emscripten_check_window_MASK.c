
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fb_width; int fb_height; } ;
typedef TYPE_1__ emscripten_ctx_data_t ;
typedef scalar_t__ EMSCRIPTEN_RESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (char*,double,double) ;
 int FUNC_3 (int*,int*) ;

__attribute__((used)) static void FUNC_4(void *VAR_3, bool *VAR_4,
      bool *VAR_5, unsigned *VAR_6, unsigned *VAR_7, bool VAR_8)
{
   EMSCRIPTEN_RESULT VAR_9;
   int VAR_10;
   int VAR_11;
   emscripten_ctx_data_t *VAR_12 = (emscripten_ctx_data_t*)VAR_3;

   FUNC_3(&VAR_10, &VAR_11);

   if (VAR_10 == 0 || VAR_11 == 0)
   {
      VAR_10 = VAR_2;
      VAR_11 = VAR_1;
      VAR_12->fb_width = VAR_12->fb_height = 0;
   }

   *VAR_6 = (unsigned)VAR_10;
   *VAR_7 = (unsigned)VAR_11;
   *VAR_5 = 0;

   if (VAR_10 != VAR_12->fb_width ||
      VAR_11 != VAR_12->fb_height)
   {
      VAR_9 = FUNC_1("#canvas",
         VAR_10, VAR_11);

      if (VAR_9 != VAR_0)
         FUNC_0("[EMSCRIPTEN/EGL]: error resizing canvas: %d\n", VAR_9);


      VAR_9 = FUNC_2("#canvas",
         (double)VAR_10, (double)VAR_11);

      if (VAR_9 != VAR_0)
         FUNC_0("[EMSCRIPTEN/EGL]: error resizing canvas css: %d\n", VAR_9);

      *VAR_5 = 1;
   }

   VAR_12->fb_width = (unsigned)VAR_10;
   VAR_12->fb_height = (unsigned)VAR_11;
   *VAR_4 = 0;
}
