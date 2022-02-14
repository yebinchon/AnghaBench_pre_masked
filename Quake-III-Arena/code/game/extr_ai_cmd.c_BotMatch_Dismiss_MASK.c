
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int netname ;
struct TYPE_5__ {int decisionmaker; int cs; scalar_t__ lastgoal_ltgtype; scalar_t__ lead_time; scalar_t__ ltgtype; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_match_t ;


 int FUNC_0 (TYPE_1__*,char*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int *,int ,char*,int) ;

void FUNC_6(bot_state_t *VAR_3, bot_match_t *VAR_4) {
 char VAR_5[VAR_1];
 int VAR_6;

 if (!FUNC_3()) return;

 if (!FUNC_1(VAR_3, VAR_4)) return;
 FUNC_5(VAR_4, VAR_2, VAR_5, sizeof(VAR_5));
 VAR_6 = FUNC_2(VAR_5);

 VAR_3->decisionmaker = VAR_6;

 VAR_3->ltgtype = 0;
 VAR_3->lead_time = 0;
 VAR_3->lastgoal_ltgtype = 0;

 FUNC_0(VAR_3, "dismissed", ((void*)0));
 FUNC_4(VAR_3->cs, VAR_6, VAR_0);
}
