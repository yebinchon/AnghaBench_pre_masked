
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int client; int cs; int subteam; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_match_t ;


 int FUNC_0 (TYPE_1__*,char*,int *,...) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(bot_state_t *VAR_1, bot_match_t *VAR_2) {
 if (!FUNC_2()) return;

 if (!FUNC_1(VAR_1, VAR_2)) return;

 if (FUNC_3(VAR_1->subteam)) {
  FUNC_0(VAR_1, "inteam", &VAR_1->subteam, ((void*)0));
 }
 else {
  FUNC_0(VAR_1, "noteam", ((void*)0));
 }
 FUNC_4(VAR_1->cs, VAR_1->client, VAR_0);
}
