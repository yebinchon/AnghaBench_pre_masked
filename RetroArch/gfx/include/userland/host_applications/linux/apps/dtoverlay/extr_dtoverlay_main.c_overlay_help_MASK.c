
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OVERLAY_HELP_STATE_T ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int * FUNC_7 (char const*) ;
 int FUNC_8 (int *,char*,char*,int,int ) ;
 int VAR_1 ;
 int FUNC_9 (char*,char const*) ;
 char* FUNC_10 (char*,int ,int ) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static void FUNC_14(const char *VAR_2, const char **VAR_3)
{
    OVERLAY_HELP_STATE_T *VAR_4;
    const char *VAR_5 = FUNC_10("%s/%s", VAR_1,
       VAR_0);

    VAR_4 = FUNC_7(VAR_5);
    FUNC_1(VAR_5);

    if (VAR_4)
    {
 if (FUNC_11(VAR_2, "dtparam") == 0)
     VAR_2 = "<The base DTB>";

 if (FUNC_5(VAR_4, VAR_2))
 {
     if (VAR_3 && FUNC_6(VAR_4, "Params"))
     {
  int VAR_6 = 0;

  while (1)
  {
      const char *VAR_7 = FUNC_4(VAR_4);
      if (!VAR_7)
   break;
      if (VAR_7[0] == '\0')
   continue;
      if (VAR_7[0] != ' ')
      {

   int VAR_8 = FUNC_12(VAR_7, " ");
   const char **VAR_9 = VAR_3;
   const char **VAR_10 = VAR_9;
   VAR_6 = 0;
   while (*VAR_9)
   {
       if ((VAR_8 == FUNC_13(*VAR_9)) &&
    (FUNC_2(VAR_7, *VAR_9, VAR_8) == 0))
    VAR_6 = 1;
       else
    *(VAR_10++) = *VAR_9;
       VAR_9++;
   }
   *(VAR_10++) = 0;
      }
      if (VAR_6)
   FUNC_9("%s\n", VAR_7);
  }


  if (*VAR_3)
      FUNC_0("Unknown parameter '%s'", *VAR_3);
     }
     else
     {
  FUNC_9("Name:   %s\n\n", VAR_2);
  FUNC_8(VAR_4, "Info", "Info:", 8, 0);
  FUNC_8(VAR_4, "Load", "Usage:", 8, 0);
  FUNC_8(VAR_4, "Params", "Params:", 8, 0);
     }
 }
 else
 {
     FUNC_0("No help found for overlay '%s'", VAR_2);
 }
 FUNC_3(VAR_4);
    }
    else
    {
 FUNC_0("Help file not found");
    }
}
