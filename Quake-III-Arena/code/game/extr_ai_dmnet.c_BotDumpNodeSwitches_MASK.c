
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int netname ;
struct TYPE_3__ {int client; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;

void FUNC_3(bot_state_t *VAR_6) {
 int VAR_7;
 char VAR_8[VAR_0];

 FUNC_1(VAR_6->client, VAR_8, sizeof(VAR_8));
 FUNC_0(VAR_3, "%s at %1.1f switched more than %d AI nodes\n", VAR_8, FUNC_2(), VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_0(VAR_3, VAR_4[VAR_7]);
 }
 FUNC_0(VAR_2, "");
}
