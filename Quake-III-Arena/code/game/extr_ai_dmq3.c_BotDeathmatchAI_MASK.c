
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int userinfo ;
typedef int name ;
typedef int gender ;
typedef int buf ;
struct TYPE_21__ {int * persistant; } ;
struct TYPE_20__ {int team; } ;
struct TYPE_22__ {scalar_t__ setupcount; int entergame_time; TYPE_2__ cur_ps; int lasthitcount; int * inventory; int lastframe_health; int client; int gs; int inuse; scalar_t__ (* ainode ) (TYPE_3__*) ;scalar_t__ entergamechat; scalar_t__ stand_time; int flags; int cs; TYPE_1__ settings; int map_restart; int character; } ;
typedef TYPE_3__ bot_state_t ;
struct TYPE_23__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,char*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (char*,int,char*,int ) ;
 int FUNC_18 () ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_19 (char*,char*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 TYPE_5__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,char*,int ) ;
 int FUNC_25 (int ,int ,char*,int) ;
 int FUNC_26 (int ,char*) ;
 int FUNC_27 (int ,char*,int) ;
 int FUNC_28 (int ,char*) ;

void FUNC_29(bot_state_t *VAR_13, float VAR_14) {
 char VAR_15[144], VAR_16[144], VAR_17[144];
 char VAR_18[VAR_7];
 int VAR_19;


 if (VAR_13->setupcount > 0) {
  VAR_13->setupcount--;
  if (VAR_13->setupcount > 0) return;

  FUNC_25(VAR_13->character, VAR_1, VAR_15, sizeof(VAR_15));

  FUNC_27(VAR_13->client, VAR_18, sizeof(VAR_18));
  FUNC_19(VAR_18, "sex", VAR_15);
  FUNC_28(VAR_13->client, VAR_18);

  if ( !VAR_13->map_restart && VAR_11.integer != VAR_5 ) {
   FUNC_17(VAR_17, sizeof(VAR_17), "team %s", VAR_13->settings.team);
   FUNC_26(VAR_13->client, VAR_17);
  }

  if (VAR_15[0] == 'm') FUNC_23(VAR_13->cs, VAR_4);
  else if (VAR_15[0] == 'f') FUNC_23(VAR_13->cs, VAR_2);
  else FUNC_23(VAR_13->cs, VAR_3);

  FUNC_16(VAR_13->client, VAR_16, sizeof(VAR_16));
  FUNC_24(VAR_13->cs, VAR_16, VAR_13->client);

  VAR_13->lastframe_health = VAR_13->inventory[VAR_6];
  VAR_13->lasthitcount = VAR_13->cur_ps.persistant[VAR_9];

  VAR_13->setupcount = 0;

  FUNC_13();
 }

 VAR_13->flags &= ~VAR_0;

 if (!FUNC_9(VAR_13)) {

  FUNC_12(VAR_13);

  FUNC_15(VAR_13);

  FUNC_7(VAR_13);

  FUNC_5(VAR_13);
 }

 FUNC_6(VAR_13);

 if (!FUNC_9(VAR_13) && !FUNC_10(VAR_13)) {

  FUNC_14(VAR_13);
 }

 if (!VAR_13->ainode) {
  FUNC_0(VAR_13, "BotDeathmatchAI: no ai node");
 }

 if (!VAR_13->entergamechat && VAR_13->entergame_time > FUNC_18() - 8) {
  if (FUNC_4(VAR_13)) {
   VAR_13->stand_time = FUNC_18() + FUNC_3(VAR_13);
   FUNC_1(VAR_13, "BotDeathmatchAI: chat enter game");
  }
  VAR_13->entergamechat = VAR_12;
 }

 FUNC_11();

 for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
  if (VAR_13->ainode(VAR_13)) break;
 }

 if (!VAR_13->inuse) return;

 if (VAR_19 >= VAR_8) {
  FUNC_22(VAR_13->gs);
  FUNC_21(VAR_13->gs);
  FUNC_8(VAR_13);
  FUNC_16(VAR_13->client, VAR_16, sizeof(VAR_16));
  FUNC_2(VAR_10, "%s at %1.1f switched more than %d AI nodes\n", VAR_16, FUNC_18(), VAR_8);
 }

 VAR_13->lastframe_health = VAR_13->inventory[VAR_6];
 VAR_13->lasthitcount = VAR_13->cur_ps.persistant[VAR_9];
}
