
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 size_t FUNC_2 (char*,int const*,size_t) ;

__attribute__((used)) static char * FUNC_3(const wchar_t * VAR_0)
{
   char * VAR_1;
   size_t VAR_2 = FUNC_2(((void*)0), VAR_0, 0);
   if (VAR_2 == (size_t) -1) return ((void*)0);

   VAR_1 = FUNC_1(VAR_2);
   VAR_2 = FUNC_2(VAR_1, VAR_0, VAR_2);
   if (VAR_2 == (size_t) -1)
   {
      FUNC_0(VAR_1);
      return ((void*)0);
   }

   return VAR_1;
}
