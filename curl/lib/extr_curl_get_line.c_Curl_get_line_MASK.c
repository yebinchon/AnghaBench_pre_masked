
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int,int *) ;
 size_t FUNC_1 (char*) ;

char *FUNC_2(char *VAR_2, int VAR_3, FILE *VAR_4)
{
  bool VAR_5 = VAR_0;
  while(1) {
    char *VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
    if(VAR_6) {
      size_t VAR_7 = FUNC_1(VAR_6);
      if(VAR_7 && (VAR_6[VAR_7-1] == '\n')) {
        if(VAR_5) {
          VAR_5 = VAR_0;
          continue;
        }
        return VAR_6;
      }

      VAR_5 = VAR_1;
    }
    else
      break;
  }
  return ((void*)0);
}
