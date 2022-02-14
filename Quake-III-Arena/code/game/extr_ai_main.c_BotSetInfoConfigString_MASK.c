
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int netname ;
typedef int goalname ;
typedef int carrying ;
struct TYPE_10__ {scalar_t__ entitynum; int number; } ;
struct TYPE_11__ {char** inventory; int ltgtype; scalar_t__ client; int gs; TYPE_1__ teamgoal; int teammate; int teamleader; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_12__ {int number; } ;
typedef TYPE_3__ bot_goal_t ;
typedef int action ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (char*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (scalar_t__,char*) ;
 char* FUNC_12 (char*,char*,char*,char*) ;

void FUNC_13(bot_state_t *VAR_9) {
 char VAR_10[VAR_6];
 char VAR_11[VAR_6];
 char VAR_12[VAR_6];
 char *VAR_13, VAR_14[32], *VAR_15;
 bot_goal_t VAR_16;

 FUNC_4(VAR_9->client, VAR_11, sizeof(VAR_11));
 if (FUNC_7(VAR_11, VAR_9->teamleader) == 0) VAR_13 = "L";
 else VAR_13 = " ";

 FUNC_8(VAR_14, "  ");
 if (VAR_8 == VAR_2) {
  if (FUNC_1(VAR_9)) {
   FUNC_8(VAR_14, "F ");
  }
 }
 switch(VAR_9->ltgtype) {
  case 128:
  {
   FUNC_6(VAR_9->teammate, VAR_10, sizeof(VAR_10));
   FUNC_5(VAR_12, sizeof(VAR_12), "helping %s", VAR_10);
   break;
  }
  case 129:
  {
   FUNC_6(VAR_9->teammate, VAR_10, sizeof(VAR_10));
   FUNC_5(VAR_12, sizeof(VAR_12), "accompanying %s", VAR_10);
   break;
  }
  case 137:
  {
   FUNC_10(VAR_9->teamgoal.number, VAR_10, sizeof(VAR_10));
   FUNC_5(VAR_12, sizeof(VAR_12), "defending %s", VAR_10);
   break;
  }
  case 135:
  {
   FUNC_10(VAR_9->teamgoal.number, VAR_10, sizeof(VAR_10));
   FUNC_5(VAR_12, sizeof(VAR_12), "getting item %s", VAR_10);
   break;
  }
  case 133:
  {
   FUNC_4(VAR_9->teamgoal.entitynum, VAR_10, sizeof(VAR_10));
   FUNC_5(VAR_12, sizeof(VAR_12), "killing %s", VAR_10);
   break;
  }
  case 139:
  case 138:
  {
   FUNC_5(VAR_12, sizeof(VAR_12), "camping");
   break;
  }
  case 132:
  {
   FUNC_5(VAR_12, sizeof(VAR_12), "patrolling");
   break;
  }
  case 136:
  {
   FUNC_5(VAR_12, sizeof(VAR_12), "capturing flag");
   break;
  }
  case 130:
  {
   FUNC_5(VAR_12, sizeof(VAR_12), "rushing base");
   break;
  }
  case 131:
  {
   FUNC_5(VAR_12, sizeof(VAR_12), "returning flag");
   break;
  }
  case 140:
  {
   FUNC_5(VAR_12, sizeof(VAR_12), "attacking the enemy base");
   break;
  }
  case 134:
  {
   FUNC_5(VAR_12, sizeof(VAR_12), "harvesting");
   break;
  }
  default:
  {
   FUNC_9(VAR_9->gs, &VAR_16);
   FUNC_10(VAR_16.number, VAR_10, sizeof(VAR_10));
   FUNC_5(VAR_12, sizeof(VAR_12), "roaming %s", VAR_10);
   break;
  }
 }
   VAR_15 = FUNC_12("l\\%s\\c\\%s\\a\\%s",
    VAR_13,
    VAR_14,
    VAR_12);
   FUNC_11 (VAR_0 + VAR_9->client, VAR_15);
}
