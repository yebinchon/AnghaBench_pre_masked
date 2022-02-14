
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int VAR_2 ;
 char const* VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,char*,char*) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (char*,char const*,size_t) ;
 scalar_t__ FUNC_9 (char*,size_t) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (char*,char*) ;
 size_t FUNC_12 (char const*) ;
 int FUNC_13 (int,int *) ;

__attribute__((used)) static const char *
FUNC_14 (void)
{
  const char *VAR_4;

  VAR_4 = VAR_3;
  if (VAR_4 == ((void*)0))
    {

      FILE *VAR_5;
      const char *VAR_6;
      const char *VAR_7 = "charset.alias";
      char *VAR_8;



      VAR_6 = FUNC_6 ("CHARSETALIASDIR");
      if (VAR_6 == ((void*)0) || VAR_6[0] == '\0')
 VAR_6 = FUNC_10 (VAR_2);


      {
 size_t VAR_9 = FUNC_12 (VAR_6);
 size_t VAR_10 = FUNC_12 (VAR_7);
 int VAR_11 = (VAR_9 > 0 && !FUNC_0 (VAR_6[VAR_9 - 1]));
 VAR_8 = (char *) FUNC_7 (VAR_9 + VAR_11 + VAR_10 + 1);
 if (VAR_8 != ((void*)0))
   {
     FUNC_8 (VAR_8, VAR_6, VAR_9);
     if (VAR_11)
       VAR_8[VAR_9] = VAR_0;
     FUNC_8 (VAR_8 + VAR_9 + VAR_11, VAR_7, VAR_10 + 1);
   }
      }

      if (VAR_8 == ((void*)0) || (VAR_5 = FUNC_2 (VAR_8, "r")) == ((void*)0))

 VAR_4 = "";
      else
 {

   char *VAR_12 = ((void*)0);
   size_t VAR_13 = 0;

   for (;;)
     {
       int VAR_14;
       char VAR_15[50+1];
       char VAR_16[50+1];
       size_t VAR_17, VAR_18;
       char *VAR_19;

       VAR_14 = FUNC_5 (VAR_5);
       if (VAR_14 == VAR_1)
  break;
       if (VAR_14 == '\n' || VAR_14 == ' ' || VAR_14 == '\t')
  continue;
       if (VAR_14 == '#')
  {

    do
      VAR_14 = FUNC_5 (VAR_5);
    while (!(VAR_14 == VAR_1 || VAR_14 == '\n'));
    if (VAR_14 == VAR_1)
      break;
    continue;
  }
       FUNC_13 (VAR_14, VAR_5);
       if (FUNC_4 (VAR_5, "%50s %50s", VAR_15, VAR_16) < 2)
  break;
       VAR_17 = FUNC_12 (VAR_15);
       VAR_18 = FUNC_12 (VAR_16);
       VAR_19 = VAR_12;
       if (VAR_13 == 0)
  {
    VAR_13 = VAR_17 + 1 + VAR_18 + 1;
    VAR_12 = (char *) FUNC_7 (VAR_13 + 1);
  }
       else
  {
    VAR_13 += VAR_17 + 1 + VAR_18 + 1;
    VAR_12 = (char *) FUNC_9 (VAR_12, VAR_13 + 1);
  }
       if (VAR_12 == ((void*)0))
  {

    VAR_13 = 0;
    if (VAR_19 != ((void*)0))
      FUNC_3 (VAR_19);
    break;
  }
       FUNC_11 (VAR_12 + VAR_13 - (VAR_18 + 1) - (VAR_17 + 1), VAR_15);
       FUNC_11 (VAR_12 + VAR_13 - (VAR_18 + 1), VAR_16);
     }
   FUNC_1 (VAR_5);
   if (VAR_13 == 0)
     VAR_4 = "";
   else
     {
       *(VAR_12 + VAR_13) = '\0';
       VAR_4 = VAR_12;
     }
 }

      if (VAR_8 != ((void*)0))
 FUNC_3 (VAR_8);
      VAR_3 = VAR_4;
    }

  return VAR_4;
}
