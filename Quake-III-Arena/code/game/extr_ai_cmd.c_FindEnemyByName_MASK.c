
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int bot_state_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(bot_state_t *VAR_2, char *VAR_3) {
 int VAR_4;
 char VAR_5[VAR_1];
 static int VAR_6;

 if (!VAR_6)
  VAR_6 = FUNC_4("sv_maxclients");
 for (VAR_4 = 0; VAR_4 < VAR_6 && VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_0(VAR_2, VAR_4)) continue;
  FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
  if (!FUNC_2(VAR_5, VAR_3)) return VAR_4;
 }
 for (VAR_4 = 0; VAR_4 < VAR_6 && VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_0(VAR_2, VAR_4)) continue;
  FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
  if (FUNC_3(VAR_5, VAR_3)) return VAR_4;
 }
 return -1;
}
