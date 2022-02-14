
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ lastchat_time; int chatto; int client; int character; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,int ,char*,char*,int ,int *) ;
 char* FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int ,char*,int) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_11 () ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 float FUNC_12 () ;
 float FUNC_13 (int ,int ,int ,int) ;
 int FUNC_14 (int ,char*) ;

int FUNC_15(bot_state_t *VAR_9) {
 char VAR_10[32];
 float VAR_11;

 if (VAR_5.integer) return VAR_7;
 if (FUNC_4(VAR_9)) return VAR_7;
 if (VAR_9->lastchat_time > FUNC_10() - VAR_3) return VAR_7;

 if (FUNC_11())
 {
  if (FUNC_2(VAR_9)) {
   FUNC_14(VAR_9->client, "vtaunt");
  }
  return VAR_8;
 }

 if (VAR_6 == VAR_2) return VAR_7;
 VAR_11 = FUNC_13(VAR_9->character, VAR_0, 0, 1);
 if (!VAR_4.integer) {
  if (FUNC_12() > VAR_11) return VAR_7;
 }
 if (FUNC_7() <= 1) return VAR_7;

 if (FUNC_2(VAR_9)) {
  FUNC_0(VAR_9, "level_end_victory",
    FUNC_9(VAR_9->client, VAR_10, 32),
    FUNC_8(VAR_9),
    "[invalid var]",
    FUNC_5(),
    FUNC_6(),
    ((void*)0));
 }
 else if (FUNC_3(VAR_9)) {
  FUNC_0(VAR_9, "level_end_lose",
    FUNC_9(VAR_9->client, VAR_10, 32),
    FUNC_8(VAR_9),
    FUNC_1(),
    "[invalid var]",
    FUNC_6(),
    ((void*)0));
 }
 else {
  FUNC_0(VAR_9, "level_end",
    FUNC_9(VAR_9->client, VAR_10, 32),
    FUNC_8(VAR_9),
    FUNC_1(),
    FUNC_5(),
    FUNC_6(),
    ((void*)0));
 }
 VAR_9->lastchat_time = FUNC_10();
 VAR_9->chatto = VAR_1;
 return VAR_8;
}
