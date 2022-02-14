
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int name ;
typedef int buf ;
struct TYPE_4__ {int client; } ;
typedef TYPE_1__ bot_state_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,int) ;
 char* FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,char*,int) ;

char *FUNC_8(bot_state_t *VAR_4) {
 int VAR_5, VAR_6;
 char VAR_7[VAR_2];
 int VAR_8[VAR_1], VAR_9;
 static int VAR_10;
 static char VAR_11[32];

 if (!VAR_10)
  VAR_10 = FUNC_6("sv_maxclients");

 VAR_9 = 0;
 VAR_8[0] = 0;
 for (VAR_5 = 0; VAR_5 < VAR_10 && VAR_5 < VAR_1; VAR_5++) {
  if (VAR_5 == VAR_4->client) continue;

  FUNC_7(VAR_0+VAR_5, VAR_7, sizeof(VAR_7));

  if (!FUNC_5(VAR_7) || !FUNC_5(FUNC_2(VAR_7, "n"))) continue;

  if (FUNC_3(FUNC_2(VAR_7, "t")) == VAR_3) continue;

  if (FUNC_0(VAR_4, VAR_5)) continue;

  VAR_8[VAR_9] = VAR_5;
  VAR_9++;
 }
 VAR_6 = FUNC_4() * VAR_9;
 for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
  VAR_6--;
  if (VAR_6 <= 0) {
   FUNC_1(VAR_8[VAR_5], VAR_11, sizeof(VAR_11));
   return VAR_11;
  }
 }
 FUNC_1(VAR_8[0], VAR_11, sizeof(VAR_11));
 return VAR_11;
}
