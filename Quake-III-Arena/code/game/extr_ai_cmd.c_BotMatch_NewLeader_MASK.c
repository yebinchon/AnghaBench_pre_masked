
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int netname ;
struct TYPE_4__ {int teamleader; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_match_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,int ,char*,int) ;

void FUNC_4(bot_state_t *VAR_2, bot_match_t *VAR_3) {
 int VAR_4;
 char VAR_5[VAR_0];

 FUNC_3(VAR_3, VAR_1, VAR_5, sizeof(VAR_5));
 VAR_4 = FUNC_1(VAR_5);
 if (!FUNC_0(VAR_2, VAR_4))
  return;
 FUNC_2(VAR_2->teamleader, VAR_5, sizeof(VAR_2->teamleader));
}
