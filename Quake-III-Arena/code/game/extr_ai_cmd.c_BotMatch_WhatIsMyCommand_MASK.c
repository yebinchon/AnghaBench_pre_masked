
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int netname ;
struct TYPE_3__ {int forceorders; int teamleader; int client; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_match_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int VAR_1 ;

void FUNC_2(bot_state_t *VAR_2, bot_match_t *VAR_3) {
 char VAR_4[VAR_0];

 FUNC_0(VAR_2->client, VAR_4, sizeof(VAR_4));
 if (FUNC_1(VAR_4, VAR_2->teamleader) != 0) return;
 VAR_2->forceorders = VAR_1;
}
