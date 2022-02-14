
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {size_t number; scalar_t__ eType; scalar_t__ event; int otherEntityNum; int otherEntityNum2; int eventParm; int origin; } ;
typedef TYPE_1__ entityState_t ;
typedef int buf ;
struct TYPE_13__ {scalar_t__* entityeventTime; int client; int botdeathtype; int lastkilledby; int enemydeathtype; int lastkilledplayer; int enemy; int neutralflagstatus; int blueflagstatus; int redflagstatus; int * inventory; void* flagstatuschanged; void* enemysuicide; int num_kills; void* killedenemy_time; int num_deaths; void* botsuicide; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_14__ {int powerups; } ;
typedef TYPE_3__ aas_entityinfo_t ;
struct TYPE_15__ {scalar_t__ eventTime; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;
 void* FUNC_6 () ;






 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int ) ;
 TYPE_4__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (int,char*,int) ;

void FUNC_11(bot_state_t *VAR_19, entityState_t *VAR_20) {
 int VAR_21;
 char VAR_22[128];






 if (VAR_19->entityeventTime[VAR_20->number] == VAR_13[VAR_20->number].eventTime) {
  return;
 }
 VAR_19->entityeventTime[VAR_20->number] = VAR_13[VAR_20->number].eventTime;

 if (VAR_20->eType > VAR_3) {
  VAR_21 = (VAR_20->eType - VAR_3) & ~VAR_4;
 }
 else {
  VAR_21 = VAR_20->event & ~VAR_4;
 }

 switch(VAR_21) {

  case 160:
  {
   int VAR_23, VAR_24, VAR_25;

   VAR_23 = VAR_20->otherEntityNum;
   VAR_24 = VAR_20->otherEntityNum2;
   VAR_25 = VAR_20->eventParm;

   if (VAR_23 == VAR_19->client) {
    VAR_19->botdeathtype = VAR_25;
    VAR_19->lastkilledby = VAR_24;

    if (VAR_23 == VAR_24 ||
     VAR_23 == VAR_1 ||
     VAR_23 == VAR_2) VAR_19->botsuicide = VAR_18;
    else VAR_19->botsuicide = VAR_17;

    VAR_19->num_deaths++;
   }

   else if (VAR_24 == VAR_19->client) {
    VAR_19->enemydeathtype = VAR_25;
    VAR_19->lastkilledplayer = VAR_23;
    VAR_19->killedenemy_time = FUNC_6();

    VAR_19->num_kills++;
   }
   else if (VAR_24 == VAR_19->enemy && VAR_23 == VAR_24) {
    VAR_19->enemysuicide = VAR_18;
   }
   break;
  }
  case 166:
  {
   if (VAR_20->eventParm < 0 || VAR_20->eventParm > VAR_8) {
    FUNC_0(VAR_9, "EV_GLOBAL_SOUND: eventParm (%d) out of range\n", VAR_20->eventParm);
    break;
   }
   FUNC_10(VAR_0 + VAR_20->eventParm, VAR_22, sizeof(VAR_22));
    if (!FUNC_8(VAR_22, "sound/items/poweruprespawn.wav")) {

    FUNC_3(VAR_19);
   }
   break;
  }
  case 165:
  {
   if (VAR_14 == VAR_6) {
    switch(VAR_20->eventParm) {
     case 130:
      VAR_19->blueflagstatus = 0;
      VAR_19->redflagstatus = 0;
      VAR_19->flagstatuschanged = VAR_18;
      break;
     case 133:
      VAR_19->blueflagstatus = 0;
      VAR_19->redflagstatus = 0;
      VAR_19->flagstatuschanged = VAR_18;
      break;
     case 129:

      VAR_19->blueflagstatus = 0;
      VAR_19->flagstatuschanged = VAR_18;
      break;
     case 132:

      VAR_19->redflagstatus = 0;
      VAR_19->flagstatuschanged = VAR_18;
      break;
     case 128:

      VAR_19->blueflagstatus = 1;
      VAR_19->flagstatuschanged = VAR_18;
      break;
     case 131:

      VAR_19->redflagstatus = 1;
      VAR_19->flagstatuschanged = VAR_18;
      break;
    }
   }
   break;
  }
  case 159:
  {
   FUNC_7(VAR_20->origin, VAR_15);
   VAR_16 = FUNC_6();
   break;
  }
  case 168:
  {

   if (VAR_20->number == VAR_19->client) {
    if (VAR_20->eventParm < 0 || VAR_20->eventParm > VAR_8) {
     FUNC_0(VAR_9, "EV_GENERAL_SOUND: eventParm (%d) out of range\n", VAR_20->eventParm);
     break;
    }

    FUNC_10(VAR_0 + VAR_20->eventParm, VAR_22, sizeof(VAR_22));

    if (!FUNC_8(VAR_22, "*falling1.wav")) {

     if (VAR_19->inventory[VAR_7] > 0) {

      FUNC_9(VAR_19->client);
     }
    }
   }
   break;
  }
  case 171:
  case 170:
  case 172:
  case 169:
  case 154:
  case 174:
  case 175:
  case 176:
  case 156:
  case 155:
  case 158:
  case 157:
  case 162:
  case 163:
  case 153:
  case 135:
  case 136:
  case 134:
  case 137:
  case 164:
  case 167:
  case 161:
  case 177:
  case 173:

   break;
  case 152:
  case 151:
  case 145:
  case 144:
  case 143:
  case 142:
  case 141:
  case 140:
  case 139:
  case 138:
  case 150:
  case 149:
  case 148:
  case 147:
  case 146:
   break;
 }
}
