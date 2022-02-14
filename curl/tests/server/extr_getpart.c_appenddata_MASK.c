
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (char*,size_t) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char **VAR_2,
                      size_t *VAR_3,
                      size_t *VAR_4,
                      char *VAR_5,
                      int VAR_6)
{
  size_t VAR_7 = 0;
  size_t VAR_8 = FUNC_2(VAR_5);

  if(!VAR_8)
    return VAR_0;

  VAR_7 = VAR_8 + *VAR_3 + 1;

  if(VAR_6) {
    if(VAR_5[VAR_8 - 1] == '\r')
      VAR_8--;

    if(VAR_5[VAR_8 - 1] == '\n')
      VAR_8--;
  }


  if(VAR_7 > *VAR_4) {
    size_t VAR_9 = VAR_7 * 2;
    char *VAR_10 = FUNC_1(*VAR_2, VAR_9);
    if(!VAR_10) {
      return VAR_1;
    }
    *VAR_4 = VAR_9;
    *VAR_2 = VAR_10;
  }


  FUNC_0(*VAR_2 + *VAR_3, VAR_5, VAR_8);
  *VAR_3 += VAR_8;
  *(*VAR_2 + *VAR_3) = '\0';

  return VAR_0;
}
