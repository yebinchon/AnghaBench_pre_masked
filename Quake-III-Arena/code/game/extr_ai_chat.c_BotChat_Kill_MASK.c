
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ lastchat_time; scalar_t__ lastkilledplayer; scalar_t__ client; scalar_t__ enemydeathtype; scalar_t__ botdeathtype; int character; int cs; int chatto; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_1__*,char*,char*,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 () ;
 TYPE_3__ VAR_10 ;
 TYPE_2__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 float FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,char*) ;
 float FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (scalar_t__,char*) ;

int FUNC_12(bot_state_t *VAR_15) {
 char VAR_16[32];
 float VAR_17;

 if (VAR_11.integer) return VAR_13;
 if (VAR_15->lastchat_time > FUNC_6() - VAR_9) return VAR_13;
 VAR_17 = FUNC_10(VAR_15->character, VAR_1, 0, 1);

 if (VAR_12 == VAR_4) return VAR_13;

 if (!VAR_10.integer) {
  if (FUNC_8() > VAR_17) return VAR_13;
 }
 if (VAR_15->lastkilledplayer == VAR_15->client) return VAR_13;
 if (FUNC_1() <= 1) return VAR_13;
 if (!FUNC_3(VAR_15)) return VAR_13;

 if (FUNC_4(VAR_15)) return VAR_13;

 FUNC_5(VAR_15->lastkilledplayer, VAR_16, 32);

 VAR_15->chatto = VAR_2;
 if (FUNC_7() && FUNC_2(VAR_15, VAR_15->lastkilledplayer)) {
  FUNC_0(VAR_15, "kill_teammate", VAR_16, ((void*)0));
  VAR_15->chatto = VAR_3;
 }
 else
 {

  if (FUNC_7()) {
   FUNC_11(VAR_15->client, "vtaunt");
   return VAR_13;
  }

  if (VAR_15->enemydeathtype == VAR_5) {
   FUNC_0(VAR_15, "kill_gauntlet", VAR_16, ((void*)0));
  }
  else if (VAR_15->enemydeathtype == VAR_7) {
   FUNC_0(VAR_15, "kill_rail", VAR_16, ((void*)0));
  }
  else if (VAR_15->enemydeathtype == VAR_8) {
   FUNC_0(VAR_15, "kill_telefrag", VAR_16, ((void*)0));
  }





  else if (FUNC_8() < FUNC_10(VAR_15->character, VAR_0, 0, 1)) {
   FUNC_0(VAR_15, "kill_insult", VAR_16, ((void*)0));
  }
  else {
   FUNC_0(VAR_15, "kill_praise", VAR_16, ((void*)0));
  }
 }
 VAR_15->lastchat_time = FUNC_6();
 return VAR_14;
}
