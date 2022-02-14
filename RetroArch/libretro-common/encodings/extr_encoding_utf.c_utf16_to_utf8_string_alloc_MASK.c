
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ,int const*,int,char*,size_t,int *,int *) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (char*,int const*,size_t) ;

char* FUNC_4(const wchar_t *VAR_2)
{



   size_t VAR_3 = 0;

   char *VAR_4 = ((void*)0);

   if (!VAR_2 || !*VAR_2)
      return ((void*)0);
   VAR_3 = FUNC_3(((void*)0), VAR_2, 0) + 1;

   if (VAR_3)
   {
      VAR_4 = (char*)FUNC_1(VAR_3, sizeof(char));

      if (!VAR_4)
         return ((void*)0);

      if (FUNC_3(VAR_4, VAR_2, VAR_3) == (size_t)-1)
      {
         FUNC_2(VAR_4);
         return ((void*)0);
      }
   }


   return VAR_4;
}
