
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParameterError ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (char*,int,size_t,int *) ;
 char* FUNC_2 (char*,size_t) ;

ParameterError FUNC_3(char **VAR_2, size_t *VAR_3, FILE *VAR_4)
{
  char *VAR_5;
  char *VAR_6 = ((void*)0);
  size_t VAR_7 = 0;

  if(VAR_4) {
    size_t VAR_8;
    size_t VAR_9 = 512;
    do {
      if(!VAR_6 || (VAR_9 == VAR_7)) {

        if(VAR_9 + 1 > ((size_t)-1)/2) {
          FUNC_0(VAR_6);
          return VAR_0;
        }
        VAR_9 *= 2;

        VAR_5 = FUNC_2(VAR_6, VAR_9 + 1);
        if(!VAR_5) {
          FUNC_0(VAR_6);
          return VAR_0;
        }
        VAR_6 = VAR_5;
      }
      VAR_8 = FUNC_1(VAR_6 + VAR_7, 1, VAR_9-VAR_7, VAR_4);
      VAR_7 += VAR_8;
    } while(VAR_8);

    VAR_6[VAR_7] = '\0';

    if(VAR_9 != VAR_7) {
      VAR_5 = FUNC_2(VAR_6, VAR_7 + 1);
      if(!VAR_5) {
        FUNC_0(VAR_6);
        return VAR_0;
      }
      VAR_6 = VAR_5;
    }

    if(!VAR_7) {
      FUNC_0(VAR_6);
    }
  }
  *VAR_3 = VAR_7;
  *VAR_2 = VAR_6;
  return VAR_1;
}
