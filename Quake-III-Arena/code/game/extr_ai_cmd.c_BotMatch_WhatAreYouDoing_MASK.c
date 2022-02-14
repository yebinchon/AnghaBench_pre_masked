
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int netname ;
typedef int goalname ;
struct TYPE_6__ {int entitynum; int number; } ;
struct TYPE_7__ {int ltgtype; int cs; TYPE_1__ teamgoal; int teammate; } ;
typedef TYPE_2__ bot_state_t ;
typedef int bot_match_t ;


 int FUNC_0 (TYPE_2__*,char*,char*,...) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,int ,char*,int) ;

void FUNC_8(bot_state_t *VAR_3, bot_match_t *VAR_4) {
 char VAR_5[VAR_1];
 char VAR_6[VAR_1];
 int VAR_7;


 if (!FUNC_1(VAR_3, VAR_4)) return;

 switch(VAR_3->ltgtype) {
  case 128:
  {
   FUNC_4(VAR_3->teammate, VAR_5, sizeof(VAR_5));
   FUNC_0(VAR_3, "helping", VAR_5, ((void*)0));
   break;
  }
  case 129:
  {
   FUNC_4(VAR_3->teammate, VAR_5, sizeof(VAR_5));
   FUNC_0(VAR_3, "accompanying", VAR_5, ((void*)0));
   break;
  }
  case 137:
  {
   FUNC_6(VAR_3->teamgoal.number, VAR_6, sizeof(VAR_6));
   FUNC_0(VAR_3, "defending", VAR_6, ((void*)0));
   break;
  }
  case 135:
  {
   FUNC_6(VAR_3->teamgoal.number, VAR_6, sizeof(VAR_6));
   FUNC_0(VAR_3, "gettingitem", VAR_6, ((void*)0));
   break;
  }
  case 133:
  {
   FUNC_3(VAR_3->teamgoal.entitynum, VAR_5, sizeof(VAR_5));
   FUNC_0(VAR_3, "killing", VAR_5, ((void*)0));
   break;
  }
  case 139:
  case 138:
  {
   FUNC_0(VAR_3, "camping", ((void*)0));
   break;
  }
  case 132:
  {
   FUNC_0(VAR_3, "patrolling", ((void*)0));
   break;
  }
  case 136:
  {
   FUNC_0(VAR_3, "capturingflag", ((void*)0));
   break;
  }
  case 130:
  {
   FUNC_0(VAR_3, "rushingbase", ((void*)0));
   break;
  }
  case 131:
  {
   FUNC_0(VAR_3, "returningflag", ((void*)0));
   break;
  }
  default:
  {
   FUNC_0(VAR_3, "roaming", ((void*)0));
   break;
  }
 }

 FUNC_7(VAR_4, VAR_2, VAR_5, sizeof(VAR_5));
 VAR_7 = FUNC_2(VAR_5);
 FUNC_5(VAR_3->cs, VAR_7, VAR_0);
}
