
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int bot_state_t ;


 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,char*,int) ;

int FUNC_6(bot_state_t *VAR_3, char *VAR_4) {
 int VAR_5;
 char VAR_6[VAR_2];
 static int VAR_7;

 if (!VAR_7)
  VAR_7 = FUNC_4("sv_maxclients");
 for (VAR_5 = 0; VAR_5 < VAR_7 && VAR_5 < VAR_1; VAR_5++) {
  if (!FUNC_0(VAR_3, VAR_5))
   continue;
  FUNC_5(VAR_0+VAR_5, VAR_6, sizeof(VAR_6));
  FUNC_2( VAR_6 );
  if (!FUNC_3(FUNC_1(VAR_6, "n"), VAR_4)) return VAR_5;
 }
 return -1;
}
