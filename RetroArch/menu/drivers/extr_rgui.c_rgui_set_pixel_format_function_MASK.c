
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
   const char *VAR_6 = FUNC_2();


   if (FUNC_0(VAR_6))
   {
      VAR_3 = VAR_5;
      return;
   }

   if ( FUNC_1(VAR_6, "ps2"))
      VAR_3 = VAR_0;
   else if (FUNC_1(VAR_6, "gx"))
      VAR_3 = VAR_4;
   else if (FUNC_1(VAR_6, "psp1"))
      VAR_3 = VAR_1;
   else if (FUNC_1(VAR_6, "d3d10") ||
            FUNC_1(VAR_6, "d3d11") ||
            FUNC_1(VAR_6, "d3d12"))
      VAR_3 = VAR_2;
   else
      VAR_3 = VAR_5;
}
