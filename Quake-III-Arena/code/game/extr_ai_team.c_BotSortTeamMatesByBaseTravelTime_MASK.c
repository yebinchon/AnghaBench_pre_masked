
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int bot_state_t ;
typedef int bot_goal_t ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_3 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,char*,int) ;

int FUNC_8(bot_state_t *VAR_12, int *VAR_13, int VAR_14) {

 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 char VAR_20[VAR_4];
 static int VAR_21;
 int VAR_22[VAR_3];
 bot_goal_t *VAR_23 = ((void*)0);

 if (VAR_10 == VAR_2 || VAR_10 == VAR_1) {
  if (FUNC_2(VAR_12) == VAR_5)
   VAR_23 = &VAR_9;
  else
   VAR_23 = &VAR_8;
 }
 if (!VAR_21)
  VAR_21 = FUNC_6("sv_maxclients");

 VAR_18 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_21 && VAR_15 < VAR_3; VAR_15++) {
  FUNC_7(VAR_0+VAR_15, VAR_20, sizeof(VAR_20));

  if (!FUNC_5(VAR_20) || !FUNC_5(FUNC_3(VAR_20, "n"))) continue;

  if (FUNC_4(FUNC_3(VAR_20, "t")) == VAR_6) continue;

  if (FUNC_1(VAR_12, VAR_15)) {

   VAR_19 = FUNC_0(VAR_15, VAR_23);

   for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
    if (VAR_19 < VAR_22[VAR_16]) {
     for (VAR_17 = VAR_18; VAR_17 > VAR_16; VAR_17--) {
      VAR_22[VAR_17] = VAR_22[VAR_17-1];
      VAR_13[VAR_17] = VAR_13[VAR_17-1];
     }
     break;
    }
   }
   VAR_22[VAR_16] = VAR_19;
   VAR_13[VAR_16] = VAR_15;
   VAR_18++;
   if (VAR_18 >= VAR_14) break;
  }
 }
 return VAR_18;
}
