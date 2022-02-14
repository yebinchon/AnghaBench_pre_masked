
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 char* FUNC_1 (char const*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_2, bool VAR_3)
{

  const char VAR_4[] = "(){ %*]";
  const char *VAR_5;
  char *VAR_6;
  size_t VAR_7 = 0;
  size_t VAR_8 = 0;
  bool VAR_9 = VAR_0;
  size_t VAR_10 = 0;
  char *VAR_11 = ((void*)0);

  if(!VAR_2)
    return ((void*)0);



  VAR_5 = VAR_2;
  while(*VAR_5) {
    if(*VAR_5 == '\\')
      VAR_7++;
    else if(*VAR_5 == '"')
      VAR_8++;
    else if(!VAR_3) {
      const char *VAR_12 = VAR_4;

      while(*VAR_12 && !VAR_9) {
        if(*VAR_5 == *VAR_12)
          VAR_9 = VAR_1;

        VAR_12++;
      }
    }

    VAR_5++;
  }


  if(!VAR_7 && !VAR_8 && !VAR_9)
    return FUNC_1(VAR_2);


  VAR_10 = FUNC_2(VAR_2) + VAR_7 + VAR_8 + (VAR_3 ? 0 : 2);


  VAR_11 = (char *) FUNC_0((VAR_10 + 1) * sizeof(char));
  if(!VAR_11)
    return ((void*)0);


  VAR_6 = VAR_11;
  if(!VAR_3) {
    VAR_11[0] = '"';
    VAR_11[VAR_10 - 1] = '"';
    VAR_6++;
  }


  VAR_5 = VAR_2;
  while(*VAR_5) {
    if(*VAR_5 == '\\' || *VAR_5 == '"') {
      *VAR_6 = '\\';
      VAR_6++;
    }

   *VAR_6 = *VAR_5;

    VAR_5++;
    VAR_6++;
  }


  VAR_11[VAR_10] = '\0';

  return VAR_11;
}
