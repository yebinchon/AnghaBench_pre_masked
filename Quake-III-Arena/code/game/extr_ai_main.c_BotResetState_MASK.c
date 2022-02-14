
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int playerState_t ;
struct TYPE_4__ {int inuse; int client; int entitynum; int character; int ms; int gs; int cs; int ws; float entergame_time; int settings; int cur_ps; int patrolpoints; int checkpoints; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_settings_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

void FUNC_8(bot_state_t *VAR_0) {
 int VAR_1, VAR_2, VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 bot_settings_t VAR_8;
 int VAR_9;
 playerState_t VAR_10;
 float VAR_11;


 FUNC_1(&VAR_8, &VAR_0->settings, sizeof(bot_settings_t));
 FUNC_1(&VAR_10, &VAR_0->cur_ps, sizeof(playerState_t));
 VAR_3 = VAR_0->inuse;
 VAR_1 = VAR_0->client;
 VAR_2 = VAR_0->entitynum;
 VAR_9 = VAR_0->character;
 VAR_4 = VAR_0->ms;
 VAR_5 = VAR_0->gs;
 VAR_6 = VAR_0->cs;
 VAR_7 = VAR_0->ws;
 VAR_11 = VAR_0->entergame_time;

 FUNC_0(VAR_0->checkpoints);
 FUNC_0(VAR_0->patrolpoints);

 FUNC_2(VAR_0, 0, sizeof(bot_state_t));

 VAR_0->ms = VAR_4;
 VAR_0->gs = VAR_5;
 VAR_0->cs = VAR_6;
 VAR_0->ws = VAR_7;
 FUNC_1(&VAR_0->cur_ps, &VAR_10, sizeof(playerState_t));
 FUNC_1(&VAR_0->settings, &VAR_8, sizeof(bot_settings_t));
 VAR_0->inuse = VAR_3;
 VAR_0->client = VAR_1;
 VAR_0->entitynum = VAR_2;
 VAR_0->character = VAR_9;
 VAR_0->entergame_time = VAR_11;

 if (VAR_0->ms) FUNC_6(VAR_0->ms);
 if (VAR_0->gs) FUNC_5(VAR_0->gs);
 if (VAR_0->ws) FUNC_7(VAR_0->ws);
 if (VAR_0->gs) FUNC_3(VAR_0->gs);
 if (VAR_0->ms) FUNC_4(VAR_0->ms);
}
