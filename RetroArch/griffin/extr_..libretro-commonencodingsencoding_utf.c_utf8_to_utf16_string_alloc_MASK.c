
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ,char const*,int,int *,size_t) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,size_t) ;

wchar_t* FUNC_4(const char *VAR_2)
{




   size_t VAR_3 = 0;
   size_t VAR_4 = 0;

   wchar_t *VAR_5 = ((void*)0);

   if (!VAR_2 || !*VAR_2)
      return ((void*)0);
   VAR_3 = FUNC_3(((void*)0), VAR_2, 0) + 1;

   if (VAR_3)
   {
      VAR_5 = (wchar_t*)FUNC_1(VAR_3, sizeof(wchar_t));

      if (!VAR_5)
         return ((void*)0);

      VAR_4 = FUNC_3(VAR_5, VAR_2, VAR_3);
   }

   if (VAR_4 == (size_t)-1)
   {
      FUNC_2(VAR_5);
      return ((void*)0);
   }


   return VAR_5;
}
