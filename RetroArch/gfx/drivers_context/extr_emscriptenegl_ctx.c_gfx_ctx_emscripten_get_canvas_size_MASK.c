
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int screenWidth; int screenHeight; scalar_t__ isFullscreen; } ;
typedef TYPE_1__ EmscriptenFullscreenChangeEvent ;
typedef scalar_t__ EMSCRIPTEN_RESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int*,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(int *VAR_1, int *VAR_2)
{
   EmscriptenFullscreenChangeEvent VAR_3;
   bool VAR_4 = 0;
   EMSCRIPTEN_RESULT VAR_5 = FUNC_2(&VAR_3);

   if (VAR_5 == VAR_0)
   {
      if (VAR_3.isFullscreen)
      {
         VAR_4 = 1;
         *VAR_1 = VAR_3.screenWidth;
         *VAR_2 = VAR_3.screenHeight;
      }
   }

   if (!VAR_4)
   {
      VAR_5 = FUNC_1("#canvas", VAR_1, VAR_2);

      if (VAR_5 != VAR_0)
      {
         FUNC_0("[EMSCRIPTEN/EGL]: Could not get screen dimensions: %d\n",
            VAR_5);
         *VAR_1 = 800;
         *VAR_2 = 600;
      }
   }
}
