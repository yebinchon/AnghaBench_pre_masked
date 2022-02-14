
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union string_list_elem_attr {scalar_t__ i; } ;
typedef void string_list ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void**) ;
 char* FUNC_2 (void*,char*) ;
 scalar_t__ FUNC_3 (int,char*,void***) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (void*,char*,union string_list_elem_attr) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 () ;

__attribute__((used)) static void *FUNC_8(void *VAR_0)
{
   void **VAR_1, **VAR_2;
   union string_list_elem_attr VAR_3;
   struct string_list *VAR_4 = FUNC_7();

   if (!VAR_4)
      return ((void*)0);

   VAR_3.i = 0;

   if (FUNC_3(-1, "pcm", &VAR_1) != 0)
      goto error;

   VAR_2 = VAR_1;

   while (*VAR_2 != ((void*)0))
   {
      char *VAR_5 = FUNC_2(*VAR_2, "NAME");
      char *VAR_6 = FUNC_2(*VAR_2, "IOID");
      char *VAR_7 = FUNC_2(*VAR_2, "DESC");




      if (!VAR_6 || (FUNC_4(VAR_6, "Output")))
         FUNC_5(VAR_4, VAR_5, VAR_3);

      if (VAR_5)
         FUNC_0(VAR_5);
      if (VAR_6)
         FUNC_0(VAR_6);
      if (VAR_7)
         FUNC_0(VAR_7);

      VAR_2++;
   }


   FUNC_1(VAR_1);

   return VAR_4;

error:
   FUNC_6(VAR_4);
   return ((void*)0);
}
