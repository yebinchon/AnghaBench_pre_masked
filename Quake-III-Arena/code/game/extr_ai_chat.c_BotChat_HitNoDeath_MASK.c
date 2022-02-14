
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int name ;
struct TYPE_11__ {size_t client; scalar_t__ lastchat_time; int chatto; int enemy; int character; } ;
typedef TYPE_2__ bot_state_t ;
typedef int aas_entityinfo_t ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {TYPE_1__* client; } ;
struct TYPE_10__ {int lasthurt_client; int lasthurt_mod; } ;


 int FUNC_0 (TYPE_2__*,char*,char*,char*,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 char* FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int,char*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 () ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 float FUNC_10 () ;
 float FUNC_11 (int ,int ,int ,int) ;

int FUNC_12(bot_state_t *VAR_11) {
 char VAR_12[32], *VAR_13;
 float VAR_14;
 int VAR_15;
 aas_entityinfo_t VAR_16;

 VAR_15 = VAR_7[VAR_11->client].client->lasthurt_client;
 if (!VAR_15) return VAR_9;
 if (VAR_15 == VAR_11->client) return VAR_9;

 if (VAR_15 < 0 || VAR_15 >= VAR_3) return VAR_9;

 if (VAR_6.integer) return VAR_9;
 if (VAR_11->lastchat_time > FUNC_8() - VAR_4) return VAR_9;
 if (FUNC_2() <= 1) return VAR_9;
 VAR_14 = FUNC_11(VAR_11->character, VAR_0, 0, 1);

 if (FUNC_9()) return VAR_9;

 if (VAR_8 == VAR_2) return VAR_9;

 if (!VAR_5.integer) {
  if (FUNC_10() > VAR_14 * 0.5) return VAR_9;
 }
 if (!FUNC_3(VAR_11)) return VAR_9;

 if (FUNC_4(VAR_11)) return VAR_9;

 FUNC_1(VAR_11->enemy, &VAR_16);
 if (FUNC_7(&VAR_16)) return VAR_9;

 FUNC_6(VAR_15, VAR_12, sizeof(VAR_12));
 VAR_13 = FUNC_5(VAR_7[VAR_11->client].client->lasthurt_mod);

 FUNC_0(VAR_11, "hit_nodeath", VAR_12, VAR_13, ((void*)0));
 VAR_11->lastchat_time = FUNC_8();
 VAR_11->chatto = VAR_1;
 return VAR_10;
}
