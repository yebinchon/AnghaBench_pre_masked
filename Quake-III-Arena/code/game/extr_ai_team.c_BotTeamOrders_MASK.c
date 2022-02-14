
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int bot_state_t ;


 int FUNC_0 (int *,int*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ VAR_0 ;
 char* FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,char*,int) ;

void FUNC_7(bot_state_t *VAR_4) {
 int VAR_5[VAR_1];
 int VAR_6, VAR_7;
 char VAR_8[VAR_2];
 static int VAR_9;

 if (!VAR_9)
  VAR_9 = FUNC_5("sv_maxclients");

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_9 && VAR_7 < VAR_1; VAR_7++) {
  FUNC_6(VAR_0+VAR_7, VAR_8, sizeof(VAR_8));

  if (!FUNC_4(VAR_8) || !FUNC_4(FUNC_2(VAR_8, "n"))) continue;

  if (FUNC_3(FUNC_2(VAR_8, "t")) == VAR_3) continue;

  if (FUNC_1(VAR_4, VAR_7)) {
   VAR_5[VAR_6] = VAR_7;
   VAR_6++;
  }
 }

 switch(VAR_6) {
  case 1: break;
  case 2:
  {

   break;
  }
  case 3:
  {

   FUNC_0(VAR_4, VAR_5, 2);
   break;
  }
  case 4:
  {
   FUNC_0(VAR_4, VAR_5, 2);
   FUNC_0(VAR_4, &VAR_5[2], 2);
   break;
  }
  case 5:
  {
   FUNC_0(VAR_4, VAR_5, 2);
   FUNC_0(VAR_4, &VAR_5[2], 3);
   break;
  }
  default:
  {
   if (VAR_6 <= 10) {
    for (VAR_7 = 0; VAR_7 < VAR_6 / 2; VAR_7++) {
     FUNC_0(VAR_4, &VAR_5[VAR_7*2], 2);
    }
   }
   break;
  }
 }
}
