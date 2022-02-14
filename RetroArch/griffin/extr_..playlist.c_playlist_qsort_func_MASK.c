
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {char* label; char* path; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(const struct playlist_entry *VAR_1,
      const struct playlist_entry *VAR_2)
{
   char *VAR_3 = ((void*)0);
   char *VAR_4 = ((void*)0);
   char *VAR_5 = ((void*)0);
   char *VAR_6 = ((void*)0);
   int VAR_7 = 0;

   if (!VAR_1 || !VAR_2)
      goto end;

   VAR_3 = VAR_1->label;
   VAR_4 = VAR_2->label;





   if (FUNC_4(VAR_3))
   {
      if (FUNC_4(VAR_1->path))
         goto end;

      VAR_5 = (char*)FUNC_0(VAR_0, sizeof(char));

      if (!VAR_5)
         goto end;

      FUNC_1(VAR_5, VAR_1->path, VAR_0 * sizeof(char));

      if (FUNC_4(VAR_5))
         goto end;

      VAR_3 = VAR_5;
   }

   if (FUNC_4(VAR_4))
   {
      if (FUNC_4(VAR_2->path))
         goto end;

      VAR_6 = (char*)FUNC_0(VAR_0, sizeof(char));

      if (!VAR_6)
         goto end;

      FUNC_1(VAR_6, VAR_2->path, VAR_0 * sizeof(char));

      if (FUNC_4(VAR_6))
         goto end;

      VAR_4 = VAR_6;
   }

   VAR_7 = FUNC_3(VAR_3, VAR_4);

end:

   VAR_3 = ((void*)0);
   VAR_4 = ((void*)0);

   if (VAR_5)
   {
      FUNC_2(VAR_5);
      VAR_5 = ((void*)0);
   }

   if (VAR_6)
   {
      FUNC_2(VAR_6);
      VAR_6 = ((void*)0);
   }

   return VAR_7;
}
