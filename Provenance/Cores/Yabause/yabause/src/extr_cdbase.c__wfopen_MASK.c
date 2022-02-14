
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int const*) ;

__attribute__((used)) static FILE * FUNC_3(const wchar_t *VAR_0, const wchar_t *VAR_1)
{
   FILE * VAR_2;
   char * VAR_3;
   char * VAR_4;

   VAR_3 = FUNC_2(VAR_0);
   if (VAR_3 == ((void*)0)) return ((void*)0);

   VAR_4 = FUNC_2(VAR_1);
   if (VAR_4 == ((void*)0))
   {
      FUNC_1(VAR_3);
      return ((void*)0);
   }

   VAR_2 = FUNC_0(VAR_3, VAR_4);

   FUNC_1(VAR_3);
   FUNC_1(VAR_4);

   return VAR_2;
}
