
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bot_state_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,char*,int) ;

int FUNC_4(bot_state_t *VAR_3) {
 int VAR_4, VAR_5;
 char VAR_6[VAR_2];
 static int VAR_7;

 if (!VAR_7)
  VAR_7 = FUNC_2("sv_maxclients");

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_7 && VAR_4 < VAR_1; VAR_4++) {
  FUNC_3(VAR_0+VAR_4, VAR_6, VAR_2);
  if (FUNC_1(VAR_6)) {
   if (FUNC_0(VAR_3, VAR_4+1)) VAR_5++;
  }
 }
 return VAR_5;
}
