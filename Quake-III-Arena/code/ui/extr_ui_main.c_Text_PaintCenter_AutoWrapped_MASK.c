
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec4_t ;
typedef int buf ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (float,float,float,int ,char*,float) ;
 int FUNC_2 (char*,float,int ) ;

void FUNC_3(float VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4, vec4_t VAR_5, const char *VAR_6, float VAR_7) {
 int VAR_8;
 char *VAR_9,*VAR_10,*VAR_11;
 char VAR_12;
 char VAR_13[1024];

 if (!VAR_6 || VAR_6[0]=='\0')
  return;

 FUNC_0(VAR_13, VAR_6, sizeof(VAR_13));
 VAR_9 = VAR_10 = VAR_11 = VAR_13;

 while (1) {
  do {
   VAR_11++;
  } while (*VAR_11!=' ' && *VAR_11!='\0');
  VAR_12 = *VAR_11;
  *VAR_11 = '\0';
  VAR_8 = FUNC_2(VAR_9, VAR_4, 0);
  *VAR_11 = VAR_12;
  if (VAR_8 > VAR_2) {
   if (VAR_9==VAR_10)
   {

    VAR_10 = VAR_11;
   }
   *VAR_10 = '\0';
   FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5, VAR_9, VAR_7);
   VAR_1 += VAR_3;
   if (VAR_12 == '\0')
      {




        VAR_10++;
        if (*VAR_10 != '\0')
          FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5, VAR_10, VAR_7);
        break;
      }
   VAR_10++;
   VAR_9 = VAR_10;
   VAR_11 = VAR_10;
  }
  else
  {
   VAR_10 = VAR_11;
   if (VAR_12 == '\0')
   {
    FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5, VAR_9, VAR_7);
    break;
   }
  }
 }
}
