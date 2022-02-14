
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int netname ;
struct TYPE_13__ {scalar_t__ askteamleader_time; scalar_t__ becometeamleader_time; scalar_t__ entergame_time; char* teamleader; int numteammates; scalar_t__ teamgiveorders_time; scalar_t__ lastflagcapture_time; void* forceorders; int ctfstrategy; void* flagstatuschanged; int client; int cs; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 () ;





 int VAR_2 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 double FUNC_13 () ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int ,int ,int ) ;

void FUNC_16(bot_state_t *VAR_6) {
 int VAR_7;
 char VAR_8[VAR_2];


 if ( VAR_4 < 128 )
  return;

 if (!FUNC_8(VAR_6)) {

  if (!FUNC_10(VAR_6)) {

   if (!VAR_6->askteamleader_time && !VAR_6->becometeamleader_time) {
    if (VAR_6->entergame_time + 10 > FUNC_11()) {
     VAR_6->askteamleader_time = FUNC_11() + 5 + FUNC_13() * 10;
    }
    else {
     VAR_6->becometeamleader_time = FUNC_11() + 5 + FUNC_13() * 10;
    }
   }
   if (VAR_6->askteamleader_time && VAR_6->askteamleader_time < FUNC_11()) {

    FUNC_1(VAR_6, "whoisteamleader", ((void*)0));
    FUNC_15(VAR_6->cs, 0, VAR_0);
    VAR_6->askteamleader_time = 0;
    VAR_6->becometeamleader_time = FUNC_11() + 8 + FUNC_13() * 10;
   }
   if (VAR_6->becometeamleader_time && VAR_6->becometeamleader_time < FUNC_11()) {
    FUNC_1(VAR_6, "iamteamleader", ((void*)0));
    FUNC_15(VAR_6->cs, 0, VAR_0);
    FUNC_6(VAR_6, -1, VAR_3);
    FUNC_9(VAR_6->client, VAR_8, sizeof(VAR_8));
    FUNC_14(VAR_6->teamleader, VAR_8, sizeof(VAR_6->teamleader));
    VAR_6->teamleader[sizeof(VAR_6->teamleader)] = '\0';
    VAR_6->becometeamleader_time = 0;
   }
   return;
  }
 }
 VAR_6->askteamleader_time = 0;
 VAR_6->becometeamleader_time = 0;


 FUNC_9(VAR_6->client, VAR_8, sizeof(VAR_8));
 if (FUNC_12(VAR_8, VAR_6->teamleader) != 0) return;

 VAR_7 = FUNC_4(VAR_6);

 switch(VAR_4) {
  case 128:
  {
   if (VAR_6->numteammates != VAR_7 || VAR_6->forceorders) {
    VAR_6->teamgiveorders_time = FUNC_11();
    VAR_6->numteammates = VAR_7;
    VAR_6->forceorders = VAR_5;
   }

   if (VAR_6->teamgiveorders_time && VAR_6->teamgiveorders_time < FUNC_11() - 5) {
    FUNC_7(VAR_6);

    VAR_6->teamgiveorders_time = FUNC_11() + 120;
   }
   break;
  }
  case 131:
  {


   if (VAR_6->numteammates != VAR_7 || VAR_6->flagstatuschanged || VAR_6->forceorders) {
    VAR_6->teamgiveorders_time = FUNC_11();
    VAR_6->numteammates = VAR_7;
    VAR_6->flagstatuschanged = VAR_5;
    VAR_6->forceorders = VAR_5;
   }

   if (VAR_6->lastflagcapture_time < FUNC_11() - 240) {
    VAR_6->lastflagcapture_time = FUNC_11();

    if (FUNC_13() < 0.4) {
     VAR_6->ctfstrategy ^= VAR_1;
     VAR_6->teamgiveorders_time = FUNC_11();
    }
   }

   if (VAR_6->teamgiveorders_time && VAR_6->teamgiveorders_time < FUNC_11() - 3) {
    FUNC_2(VAR_6);

    VAR_6->teamgiveorders_time = 0;
   }
   break;
  }
 }
}
