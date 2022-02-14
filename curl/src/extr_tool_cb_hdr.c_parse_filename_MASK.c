
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef scalar_t__ SANITIZEcode ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_7 (char**,char*,int ) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;

__attribute__((used)) static char *FUNC_12(const char *VAR_0, size_t VAR_1)
{
  char *VAR_2;
  char *VAR_3;
  char *VAR_4;
  char VAR_5 = '\0';


  VAR_2 = FUNC_3(VAR_1 + 1);
  if(!VAR_2)
    return ((void*)0);
  FUNC_4(VAR_2, VAR_0, VAR_1);
  VAR_2[VAR_1] = '\0';

  VAR_3 = VAR_2;
  if(*VAR_3 == '\'' || *VAR_3 == '"') {

    VAR_5 = *VAR_3;
    VAR_3++;
  }
  else
    VAR_5 = ';';


  VAR_4 = FUNC_8(VAR_3, VAR_5);
  if(VAR_4)
    *VAR_4 = '\0';


  VAR_4 = FUNC_11(VAR_3, '/');
  if(VAR_4) {
    VAR_3 = VAR_4 + 1;
    if(!*VAR_3) {
      FUNC_0(VAR_2);
      return ((void*)0);
    }
  }




  VAR_4 = FUNC_11(VAR_3, '\\');
  if(VAR_4) {
    VAR_3 = VAR_4 + 1;
    if(!*VAR_3) {
      FUNC_0(VAR_2);
      return ((void*)0);
    }
  }


  VAR_4 = FUNC_8(VAR_3, '\r');
  if(VAR_4)
    *VAR_4 = '\0';

  VAR_4 = FUNC_8(VAR_3, '\n');
  if(VAR_4)
    *VAR_4 = '\0';

  if(VAR_2 != VAR_3)
    FUNC_5(VAR_2, VAR_3, FUNC_10(VAR_3) + 1);
  return VAR_2;
}
