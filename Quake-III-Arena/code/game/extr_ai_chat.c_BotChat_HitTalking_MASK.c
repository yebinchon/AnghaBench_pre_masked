
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int name ;
struct TYPE_10__ {scalar_t__ lastchat_time; size_t client; int chatto; int character; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {TYPE_1__* client; } ;
struct TYPE_9__ {int lasthurt_client; } ;


 int FUNC_0 (TYPE_2__*,char*,char*,char*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 () ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 float FUNC_7 () ;
 float FUNC_8 (int ,int ,int ,int) ;

int FUNC_9(bot_state_t *VAR_11) {
 char VAR_12[32], *VAR_13;
 int VAR_14;
 float VAR_15;

 if (VAR_6.integer) return VAR_9;
 if (VAR_11->lastchat_time > FUNC_5() - VAR_4) return VAR_9;
 if (FUNC_1() <= 1) return VAR_9;
 VAR_14 = VAR_7[VAR_11->client].client->lasthurt_client;
 if (!VAR_14) return VAR_9;
 if (VAR_14 == VAR_11->client) return VAR_9;

 if (VAR_14 < 0 || VAR_14 >= VAR_3) return VAR_9;

 VAR_15 = FUNC_8(VAR_11->character, VAR_0, 0, 1);

 if (FUNC_6()) return VAR_9;

 if (VAR_8 == VAR_2) return VAR_9;

 if (!VAR_5.integer) {
  if (FUNC_7() > VAR_15 * 0.5) return VAR_9;
 }
 if (!FUNC_2(VAR_11)) return VAR_9;

 FUNC_4(VAR_7[VAR_11->client].client->lasthurt_client, VAR_12, sizeof(VAR_12));
 VAR_13 = FUNC_3(VAR_7[VAR_11->client].client->lasthurt_client);

 FUNC_0(VAR_11, "hit_talking", VAR_12, VAR_13, ((void*)0));
 VAR_11->lastchat_time = FUNC_5();
 VAR_11->chatto = VAR_1;
 return VAR_10;
}
