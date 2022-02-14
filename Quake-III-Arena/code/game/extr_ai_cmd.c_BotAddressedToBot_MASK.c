
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int netname ;
typedef int name ;
struct TYPE_9__ {char* subteam; int client; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_10__ {int subtype; scalar_t__ type; char* string; } ;
typedef TYPE_2__ bot_match_t ;
typedef int addressedto ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 float FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,char*,int) ;

int FUNC_8(bot_state_t *VAR_13, bot_match_t *VAR_14) {
 char VAR_15[VAR_1];
 char VAR_16[VAR_1];
 char VAR_17[VAR_1];
 char VAR_18[128];
 int VAR_19;
 bot_match_t VAR_20;

 FUNC_7(VAR_14, VAR_8, VAR_16, sizeof(VAR_16));
 VAR_19 = FUNC_1(VAR_13, VAR_16);
 if (VAR_19 < 0) return VAR_11;

 if (VAR_14->subtype & VAR_9) {
  FUNC_7(VAR_14, VAR_0, VAR_15, sizeof(VAR_15));

  FUNC_0(VAR_13->client, VAR_18, 128);

  while(FUNC_6(VAR_15, &VAR_20, VAR_6)) {
   if (VAR_20.type == VAR_4) {
    return VAR_12;
   }
   else if (VAR_20.type == VAR_5) {
    FUNC_7(&VAR_20, VAR_10, VAR_17, sizeof(VAR_17));
    if (FUNC_5(VAR_17)) {
     if (FUNC_4(VAR_18, VAR_17)) return VAR_12;
     if (FUNC_4(VAR_13->subteam, VAR_17)) return VAR_12;
    }
    FUNC_7(&VAR_20, VAR_2, VAR_15, VAR_1);
   }
   else {
    FUNC_7(&VAR_20, VAR_10, VAR_17, VAR_1);
    if (FUNC_5(VAR_17)) {
     if (FUNC_4(VAR_18, VAR_17)) return VAR_12;
     if (FUNC_4(VAR_13->subteam, VAR_17)) return VAR_12;
    }
    break;
   }
  }


  return VAR_11;
 }
 else {
  bot_match_t VAR_21;

  VAR_21.type = 0;

  if (!FUNC_6(VAR_14->string, &VAR_21, VAR_7) ||
    VAR_21.type != VAR_3) {

   if (FUNC_3() > (float ) 1.0 / (FUNC_2(VAR_13)-1)) return VAR_11;
  }
 }
 return VAR_12;
}
