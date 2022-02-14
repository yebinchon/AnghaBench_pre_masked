
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int bot_state_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,char*,int) ;

int FUNC_6(bot_state_t *VAR_4) {
 int VAR_5, VAR_6;
 char VAR_7[VAR_2];
 static int VAR_8;

 if (!VAR_8)
  VAR_8 = FUNC_4("sv_maxclients");

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_8 && VAR_5 < VAR_1; VAR_5++) {
  FUNC_5(VAR_0+VAR_5, VAR_7, sizeof(VAR_7));

  if (!FUNC_3(VAR_7) || !FUNC_3(FUNC_1(VAR_7, "n"))) continue;

  if (FUNC_2(FUNC_1(VAR_7, "t")) == VAR_3) continue;

  if (FUNC_0(VAR_4, VAR_5)) {
   VAR_6++;
  }
 }
 return VAR_6;
}
