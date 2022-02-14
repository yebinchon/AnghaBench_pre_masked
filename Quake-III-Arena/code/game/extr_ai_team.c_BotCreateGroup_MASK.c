
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int name ;
typedef int leadername ;
struct TYPE_5__ {int client; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (TYPE_1__*,char*,char*,char*,...) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,char*,int) ;
 int VAR_0 ;

void FUNC_3(bot_state_t *VAR_1, int *VAR_2, int VAR_3) {
 char VAR_4[VAR_0], VAR_5[VAR_0];
 int VAR_6;


 FUNC_2(VAR_2[0], VAR_5, sizeof(VAR_5));
 for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++)
 {
  FUNC_2(VAR_2[VAR_6], VAR_4, sizeof(VAR_4));
  if (VAR_2[0] == VAR_1->client) {
   FUNC_0(VAR_1, "cmd_accompanyme", VAR_4, ((void*)0));
  }
  else {
   FUNC_0(VAR_1, "cmd_accompany", VAR_4, VAR_5, ((void*)0));
  }
  FUNC_1(VAR_1, VAR_2[VAR_6]);
 }
}
