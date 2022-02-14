
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char* VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char*) ;

int FUNC_6(bool VAR_5, char *VAR_6)
{

  if (VAR_5)
  {

    if (VAR_2 == VAR_1) return 0;


    if (!FUNC_1(VAR_4[VAR_2], (const char *)VAR_3)) return 0;

    int VAR_7=0;
    char VAR_8[VAR_0];


    FUNC_2(VAR_8, VAR_3);
    char *VAR_9= FUNC_5(VAR_8,"/");
    while (VAR_9 != ((void*)0))
    {
      VAR_7 = FUNC_3(VAR_9);
      FUNC_4(VAR_6,VAR_9,VAR_7);
      VAR_6[VAR_7] = 0;
      VAR_9 = FUNC_5(((void*)0),"/");
    }


    VAR_7 = FUNC_3(VAR_3) - VAR_7;
    VAR_3[VAR_7 - 1] = 0;
  }
  else
  {

    FUNC_0(VAR_3, "%s%s/",VAR_3, VAR_6);
  }

  return 1;
}
