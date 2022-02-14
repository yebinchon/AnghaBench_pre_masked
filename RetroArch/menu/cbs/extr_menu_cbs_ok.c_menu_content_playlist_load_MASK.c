
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {char* path; } ;
typedef int playlist_t ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,size_t,struct playlist_entry const**) ;
 int FUNC_4 (int ,char*,int) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 char FUNC_10 (unsigned char) ;

__attribute__((used)) static bool FUNC_11(playlist_t *VAR_2, size_t VAR_3)
{
   char VAR_4[VAR_0];
   const struct playlist_entry *VAR_5 = ((void*)0);

   FUNC_3(VAR_2, VAR_3, &VAR_5);

   VAR_4[0] = '\0';
   FUNC_7(VAR_4, VAR_5->path, sizeof(VAR_4));
   FUNC_4(VAR_1, VAR_4, sizeof(VAR_4));

   if (!FUNC_6(VAR_4))
   {
      unsigned VAR_6;
      bool VAR_7 = 0;
      char *VAR_8 = ((void*)0);
      char *VAR_9 = FUNC_5(VAR_4);

      for (VAR_6 = 0; VAR_6 < FUNC_8(VAR_9); ++VAR_6)
         VAR_9[VAR_6] = FUNC_10((unsigned char)VAR_9[VAR_6]);

      if (FUNC_9(VAR_9, ".zip"))
         FUNC_9(VAR_9, ".zip")[4] = '\0';
      else if (FUNC_9(VAR_9, ".7z"))
         FUNC_9(VAR_9, ".7z")[3] = '\0';

      VAR_8 = (char *)
         FUNC_0(FUNC_8(VAR_9) + 1, sizeof(char));

      FUNC_7(VAR_8, VAR_4, FUNC_8(VAR_9) + 1);

      VAR_7 = FUNC_2(VAR_8);

      FUNC_1(VAR_9);
      FUNC_1(VAR_8);

      if (VAR_7)
         return 1;
   }

   return 0;
}
