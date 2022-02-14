
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURL ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,char const*,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (char const*,char) ;
 char* FUNC_8 (char*,char*) ;

char *FUNC_9(char *VAR_0, const char *VAR_1)
{

  char *VAR_2 = FUNC_8(VAR_0, "://");
  CURL *VAR_3 = FUNC_4();
  if(!VAR_3)
    return ((void*)0);
  if(VAR_2)
    VAR_2 += 3;
  else
    VAR_2 = VAR_0;
  VAR_2 = FUNC_7(VAR_2, '/');
  if(!VAR_2 || !FUNC_6(++VAR_2)) {






    const char *VAR_4 = FUNC_7(VAR_1, '/');
    char *VAR_5 = FUNC_7(VAR_4?VAR_4:VAR_1, '\\');
    char *VAR_6;

    if(VAR_5)
      VAR_4 = VAR_5 + 1;
    else if(VAR_4)
      VAR_4++;
    else
      VAR_4 = VAR_1;


    VAR_6 = FUNC_3(VAR_3, VAR_4, 0 );
    if(VAR_6) {
      char *VAR_7;
      if(VAR_2)

        VAR_7 = FUNC_1("%s%s", VAR_0, VAR_6);
      else

        VAR_7 = FUNC_1("%s/%s", VAR_0, VAR_6);

      FUNC_5(VAR_6);
      FUNC_0(VAR_0);

      if(!VAR_7)
        return ((void*)0);

      VAR_0 = VAR_7;
    }
    else
      FUNC_0(VAR_0);
  }
  FUNC_2(VAR_3);
  return VAR_0;
}
