
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ lastchat_time; scalar_t__ lastkilledby; scalar_t__ client; scalar_t__ botdeathtype; int chatto; int character; int cs; scalar_t__ botsuicide; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_1__*,char*,char*,int ,...) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_7 () ;
 TYPE_3__ VAR_22 ;
 TYPE_2__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 double FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 double FUNC_11 (int ,int ,int ,int) ;
 int FUNC_12 (scalar_t__,char*) ;

int FUNC_13(bot_state_t *VAR_27) {
 char VAR_28[32];
 float VAR_29;

 if (VAR_23.integer) return VAR_25;
 if (VAR_27->lastchat_time > FUNC_6() - VAR_21) return VAR_25;
 VAR_29 = FUNC_11(VAR_27->character, VAR_0, 0, 1);

 if (VAR_24 == VAR_4) return VAR_25;

 if (!VAR_22.integer) {
  if (FUNC_8() > VAR_29) return VAR_25;
 }
 if (FUNC_1() <= 1) return VAR_25;

 if (VAR_27->lastkilledby >= 0 && VAR_27->lastkilledby < VAR_5)
  FUNC_5(VAR_27->lastkilledby, VAR_28, 32);
 else
  FUNC_9(VAR_28, "[world]");

 if (FUNC_7() && FUNC_3(VAR_27, VAR_27->lastkilledby)) {
  if (VAR_27->lastkilledby == VAR_27->client) return VAR_25;
  FUNC_0(VAR_27, "death_teammate", VAR_28, ((void*)0));
  VAR_27->chatto = VAR_3;
 }
 else
 {

  if (FUNC_7()) {
   FUNC_12(VAR_27->client, "vtaunt");
   return VAR_26;
  }

  if (VAR_27->botdeathtype == VAR_20)
   FUNC_0(VAR_27, "death_drown", FUNC_2(VAR_27), ((void*)0));
  else if (VAR_27->botdeathtype == VAR_14)
   FUNC_0(VAR_27, "death_slime", FUNC_2(VAR_27), ((void*)0));
  else if (VAR_27->botdeathtype == VAR_12)
   FUNC_0(VAR_27, "death_lava", FUNC_2(VAR_27), ((void*)0));
  else if (VAR_27->botdeathtype == VAR_9)
   FUNC_0(VAR_27, "death_cratered", FUNC_2(VAR_27), ((void*)0));
  else if (VAR_27->botsuicide ||
    VAR_27->botdeathtype == VAR_8 ||
    VAR_27->botdeathtype == VAR_15 ||
    VAR_27->botdeathtype == VAR_16 ||
    VAR_27->botdeathtype == VAR_18 ||
    VAR_27->botdeathtype == VAR_19)
   FUNC_0(VAR_27, "death_suicide", FUNC_2(VAR_27), ((void*)0));
  else if (VAR_27->botdeathtype == VAR_17)
   FUNC_0(VAR_27, "death_telefrag", VAR_28, ((void*)0));




  else {
   if ((VAR_27->botdeathtype == VAR_10 ||
    VAR_27->botdeathtype == VAR_13 ||
    VAR_27->botdeathtype == VAR_6 ||
    VAR_27->botdeathtype == VAR_7) && FUNC_8() < 0.5) {

    if (VAR_27->botdeathtype == VAR_10)
     FUNC_0(VAR_27, "death_gauntlet",
       VAR_28,
       FUNC_4(VAR_27->botdeathtype),
       ((void*)0));
    else if (VAR_27->botdeathtype == VAR_13)
     FUNC_0(VAR_27, "death_rail",
       VAR_28,
       FUNC_4(VAR_27->botdeathtype),
       ((void*)0));
    else
     FUNC_0(VAR_27, "death_bfg",
       VAR_28,
       FUNC_4(VAR_27->botdeathtype),
       ((void*)0));
   }

   else if (FUNC_8() < FUNC_11(VAR_27->character, VAR_1, 0, 1)) {
    FUNC_0(VAR_27, "death_insult",
       VAR_28,
       FUNC_4(VAR_27->botdeathtype),
       ((void*)0));
   }
   else {
    FUNC_0(VAR_27, "death_praise",
       VAR_28,
       FUNC_4(VAR_27->botdeathtype),
       ((void*)0));
   }
  }
  VAR_27->chatto = VAR_2;
 }
 VAR_27->lastchat_time = FUNC_6();
 return VAR_26;
}
