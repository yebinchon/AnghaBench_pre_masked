
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec4_t ;
typedef int buf ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (int,int,char*,int,int ) ;
 float FUNC_2 (int) ;
 float FUNC_3 (char*) ;

void FUNC_4( int VAR_0, int VAR_1, int VAR_2, int VAR_3, const char* VAR_4, int VAR_5, vec4_t VAR_6 ) {
 int VAR_7;
 char *VAR_8,*VAR_9,*VAR_10;
 char VAR_11;
 char VAR_12[1024];
 float VAR_13;

 if (!VAR_4 || VAR_4[0]=='\0')
  return;

 VAR_13 = FUNC_2( VAR_5 );

 FUNC_0(VAR_12, VAR_4, sizeof(VAR_12));
 VAR_8 = VAR_9 = VAR_10 = VAR_12;

 while (1) {
  do {
   VAR_10++;
  } while (*VAR_10!=' ' && *VAR_10!='\0');
  VAR_11 = *VAR_10;
  *VAR_10 = '\0';
  VAR_7 = FUNC_3(VAR_8) * VAR_13;
  *VAR_10 = VAR_11;
  if (VAR_7 > VAR_2) {
   if (VAR_8==VAR_9)
   {

    VAR_9 = VAR_10;
   }
   *VAR_9 = '\0';
   FUNC_1(VAR_0, VAR_1, VAR_8, VAR_5, VAR_6);
   VAR_1 += VAR_3;
   if (VAR_11 == '\0')
      {




        VAR_9++;
        if (*VAR_9 != '\0')
          FUNC_1(VAR_0, VAR_1, VAR_9, VAR_5, VAR_6);
    break;
      }
   VAR_9++;
   VAR_8 = VAR_9;
   VAR_10 = VAR_9;
  }
  else
  {
   VAR_9 = VAR_10;
   if (VAR_11 == '\0')
   {
    FUNC_1(VAR_0, VAR_1, VAR_8, VAR_5, VAR_6);
    break;
   }
  }
 }
}
