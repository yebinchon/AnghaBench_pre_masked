
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ EMSCRIPTEN_RESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_4(void *VAR_4)
{
   EMSCRIPTEN_RESULT VAR_5;
   (void)VAR_4;

   VAR_5 = FUNC_1();
   if (VAR_5 == VAR_0)
      return 0;

   if (!VAR_2)
   {
      EMSCRIPTEN_RESULT VAR_6;
      VAR_2 = 1;


      VAR_6 = FUNC_2(((void*)0), 0,
         VAR_3);
      if (VAR_6 != VAR_1)
      {
         FUNC_0(
            "[EMSCRIPTEN/PAD] failed to create connect callback: %d\n", VAR_6);
      }

      VAR_6 = FUNC_3(((void*)0), 0,
         VAR_3);
      if (VAR_6 != VAR_1)
      {
         FUNC_0(
            "[EMSCRIPTEN/PAD] failed to create disconnect callback: %d\n", VAR_6);
      }
   }

   return 1;
}
