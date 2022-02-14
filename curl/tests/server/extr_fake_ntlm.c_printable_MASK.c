
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t,char*,char) ;
 char* FUNC_3 (char*,size_t) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(char *VAR_4, size_t VAR_5)
{
  char *VAR_6;
  char *VAR_7;
  size_t VAR_8;
  size_t VAR_9;
  size_t VAR_10 = 0;
  size_t VAR_11, VAR_12 = 0;






  if(!VAR_5)
    VAR_5 = FUNC_4(VAR_4);

  if(VAR_5) {
    VAR_10 = ((VAR_5/2) < (6 + 1)) ?
      6 + 1 : VAR_5/2;
    VAR_9 = VAR_5 + VAR_10;
  }
  else
    VAR_9 = 9 + 1;

  VAR_6 = FUNC_1(VAR_9);
  if(!VAR_6)
    return ((void*)0);

  if(!VAR_5) {
    FUNC_2(&VAR_6[0], VAR_9, "%s", "[NOTHING]");
    return VAR_6;
  }

  for(VAR_11 = 0; VAR_11<VAR_5; VAR_11++) {

    if(VAR_12 > VAR_9 - (6 + 1)) {
      VAR_8 = VAR_9 + VAR_10;
      VAR_7 = FUNC_3(VAR_6, VAR_8);
      if(!VAR_7) {
        FUNC_0(VAR_6);
        return ((void*)0);
      }
      VAR_6 = VAR_7;
      VAR_9 = VAR_8;
    }

    if((VAR_4[VAR_11] > 0x20) && (VAR_4[VAR_11] < 0x7F)) {
      VAR_6[VAR_12] = VAR_4[VAR_11];
      VAR_12++;
    }
    else {
      FUNC_2(&VAR_6[VAR_12], VAR_9 - VAR_12, "[0x%02X]", VAR_4[VAR_11]);
      VAR_12 += 6;
    }

  }
  VAR_6[VAR_12] = '\0';

  return VAR_6;
}
