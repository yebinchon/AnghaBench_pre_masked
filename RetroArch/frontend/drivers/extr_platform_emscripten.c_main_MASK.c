
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ EMSCRIPTEN_RESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,double,double) ;
 scalar_t__ FUNC_4 (char*,int *,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int,char**,int *) ;

int FUNC_7(int VAR_3, char *VAR_4[])
{
   EMSCRIPTEN_RESULT VAR_5;

   FUNC_1();

   FUNC_2("#canvas", 800, 600);
   FUNC_3("#canvas", 800.0, 600.0);
   FUNC_5(VAR_2, 0, 0);
   FUNC_6(VAR_3, VAR_4, ((void*)0));

   VAR_5 = FUNC_4("#document", ((void*)0), 0,
      VAR_1);
   if (VAR_5 != VAR_0)
   {
      FUNC_0(
         "[EMSCRIPTEN/CTX] failed to create fullscreen callback: %d\n", VAR_5);
   }

   return 0;
}
