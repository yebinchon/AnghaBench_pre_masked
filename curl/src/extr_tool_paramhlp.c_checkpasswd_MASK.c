
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prompt ;
typedef int passwd ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,char const*,char*,...) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char*,size_t) ;
 char* FUNC_4 (char*,char) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static CURLcode FUNC_6(const char *VAR_2,
                            const size_t VAR_3,
                            const bool VAR_4,
                            char **VAR_5)
{
  char *VAR_6;
  char *VAR_7;

  if(!*VAR_5)
    return VAR_0;


  VAR_6 = FUNC_4(*VAR_5, ':');


  VAR_7 = FUNC_4(*VAR_5, ';');

  if(!VAR_6 && **VAR_5 != ';') {

    char VAR_8[256] = "";
    char VAR_9[256];
    size_t VAR_10;
    size_t VAR_11 = FUNC_5(*VAR_5);
    char *VAR_12;

    if(VAR_7)
      *VAR_7 = '\0';


    if(!VAR_3 && VAR_4)
      FUNC_0(VAR_9, sizeof(VAR_9),
                      "Enter %s password for user '%s':",
                      VAR_2, *VAR_5);
    else
      FUNC_0(VAR_9, sizeof(VAR_9),
                      "Enter %s password for user '%s' on URL #%zu:",
                      VAR_2, *VAR_5, VAR_3 + 1);


    FUNC_1(VAR_9, VAR_8, sizeof(VAR_8));
    VAR_10 = FUNC_5(VAR_8);

    if(VAR_7)
      *VAR_7 = ';';


    VAR_12 = FUNC_3(*VAR_5,
                      VAR_10 + 1 +
                      VAR_11 + 1);
    if(!VAR_12)
      return VAR_1;


    VAR_12[VAR_11] = ':';
    FUNC_2(&VAR_12[VAR_11 + 1], VAR_8, VAR_10 + 1);
    *VAR_5 = VAR_12;
  }

  return VAR_0;
}
