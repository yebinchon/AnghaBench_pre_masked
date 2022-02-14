
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char const*,char const*,char const*,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char const*,char const*,char const*,int,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ) ;

int FUNC_7(int VAR_4, char *VAR_5[])
{
   const char *VAR_6 = ((void*)0);
   const char *VAR_7 = ((void*)0);
   const char *VAR_8 = ((void*)0);
   const char *VAR_9 = ((void*)0);
   const char *VAR_10 = ((void*)0);





   const char *VAR_11 = "so";


   if (VAR_4 < 6)
   {
      FUNC_2(VAR_3, "Usage: %s <database dir> <core dir> <core info dir> <input dir> <playlist dir>\n", VAR_5[0]);
      return 1;
   }

   VAR_6 = VAR_5[1];
   VAR_8 = VAR_5[2];
   VAR_7 = VAR_5[3];
   VAR_9 = VAR_5[4];
   VAR_10 = VAR_5[5];

   FUNC_2(VAR_3, "RDB database dir: %s\n", VAR_6);
   FUNC_2(VAR_3, "Core         dir: %s\n", VAR_8);
   FUNC_2(VAR_3, "Core info    dir: %s\n", VAR_7);
   FUNC_2(VAR_3, "Input        dir: %s\n", VAR_9);
   FUNC_2(VAR_3, "Playlist     dir: %s\n", VAR_10);



   FUNC_6(0 , VAR_2);

   FUNC_1(VAR_7, VAR_8, VAR_11, 1);

   FUNC_3(VAR_10, VAR_6, VAR_9, 1,
         1, VAR_1);

   while (VAR_0)
      FUNC_4();

   FUNC_2(VAR_3, "Exit loop\n");

   FUNC_0();
   FUNC_5();

   return 0;
}
