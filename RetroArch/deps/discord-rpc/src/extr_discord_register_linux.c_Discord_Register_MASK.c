
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdgMimeCommand ;
typedef size_t ssize_t ;
typedef int exePath ;
typedef int desktopFilename ;
typedef int desktopFilePath ;
typedef int desktopFile ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int,int,int *) ;
 char* FUNC_5 (char*) ;
 size_t FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int,char const*,char const*,...) ;
 int VAR_0 ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;

void FUNC_10(const char* VAR_1, const char* VAR_2)
{
   FILE* VAR_3;
   int VAR_4;
   char VAR_5[1024];
   char VAR_6[256];
   char VAR_7[1024];
   char VAR_8[2048];


   char VAR_9[1024];
   const char* VAR_10 = FUNC_5("HOME");
   if (!VAR_10)
      return;

   if (!VAR_2 || !VAR_2[0])
   {
      ssize_t VAR_11 = FUNC_6("/proc/self/exe", VAR_9, sizeof(VAR_9));
      if (VAR_11 <= 0 || VAR_11 >= (ssize_t)sizeof(VAR_9))
         return;
      VAR_9[VAR_11] = '\0';
      VAR_2 = VAR_9;
   }

   {
      const char* VAR_12 = "[Desktop Entry]\n"
         "Name=Game %s\n"
         "Exec=%s\n"
         "Type=Application\n"
         "NoDisplay=true\n"
         "Categories=Discord;Games;\n"
         "MimeType=x-scheme-handler/discord-%s;\n";
      VAR_4 = FUNC_7(
            VAR_8, sizeof(VAR_8), VAR_12, VAR_1, VAR_2, VAR_1);
      if (VAR_4 <= 0)
         return;
   }

   FUNC_7(VAR_6, sizeof(VAR_6), "/discord-%s.desktop", VAR_1);

   FUNC_7(VAR_7, sizeof(VAR_7), "%s/.local", VAR_10);
   if (!FUNC_0(VAR_7))
      return;
   FUNC_8(VAR_7, "/share");
   if (!FUNC_0(VAR_7))
      return;
   FUNC_8(VAR_7, "/applications");
   if (!FUNC_0(VAR_7))
      return;
   FUNC_8(VAR_7, VAR_6);

   VAR_3 = FUNC_2(VAR_7, "w");
   if (!VAR_3)
      return;

   FUNC_4(VAR_8, 1, VAR_4, VAR_3);
   FUNC_1(VAR_3);

   FUNC_7(VAR_5,
         sizeof(VAR_5),
         "xdg-mime default discord-%s.desktop x-scheme-handler/discord-%s",
         VAR_1,
         VAR_1);
   if (FUNC_9(VAR_5) < 0)
      FUNC_3(VAR_0, "Failed to register mime handler\n");
}
