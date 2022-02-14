
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int ParameterError ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*) ;

ParameterError FUNC_7(char **VAR_3, FILE *VAR_4)
{
  char *VAR_5 = ((void*)0);
  if(VAR_4) {
    char *VAR_6;
    size_t VAR_7 = 512;
    size_t VAR_8;
    char VAR_9[256];
    size_t VAR_10 = 0;
    VAR_5 = FUNC_2(VAR_7);
    if(!VAR_5)
      return VAR_0;

    while(FUNC_1(VAR_9, sizeof(VAR_9), VAR_4)) {
      size_t VAR_11;
      VAR_6 = FUNC_4(VAR_9, '\r');
      if(VAR_6)
        *VAR_6 = '\0';
      VAR_6 = FUNC_4(VAR_9, '\n');
      if(VAR_6)
        *VAR_6 = '\0';
      VAR_11 = FUNC_6(VAR_9);
      VAR_8 = VAR_10 + VAR_11 + 1;
      if(VAR_7 < VAR_8) {

        if(VAR_7 >= (size_t)VAR_2/2) {
          FUNC_0(VAR_5);
          return VAR_0;
        }



        VAR_7 *= 2;
        VAR_6 = FUNC_3(VAR_5, VAR_7);
        if(!VAR_6) {
          FUNC_0(VAR_5);
          return VAR_0;
        }
        VAR_5 = VAR_6;
      }
      FUNC_5(VAR_5 + VAR_10, VAR_9);
      VAR_10 += VAR_11;
    }
  }
  *VAR_3 = VAR_5;
  return VAR_1;
}
