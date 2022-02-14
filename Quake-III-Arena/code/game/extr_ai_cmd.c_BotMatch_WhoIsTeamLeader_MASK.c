
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int netname ;
struct TYPE_3__ {int client; int teamleader; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_match_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(bot_state_t *VAR_1, bot_match_t *VAR_2) {
 char VAR_3[VAR_0];

 if (!FUNC_2()) return;

 FUNC_0(VAR_1->client, VAR_3, sizeof(VAR_3));

 if (!FUNC_1(VAR_3, VAR_1->teamleader)) {
  FUNC_3(VAR_1->client, "I'm the team leader\n");
 }
}
