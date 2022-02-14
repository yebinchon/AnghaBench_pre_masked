
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_28__ {int client; } ;
typedef TYPE_1__ gentity_t ;
typedef int cmd ;
struct TYPE_29__ {scalar_t__ intermissiontime; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_24 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_25 (int ,char*,int) ;
 int FUNC_26 (int,int ) ;
 int FUNC_27 (char*,char*) ;

void FUNC_28( int VAR_7 ) {
 gentity_t *VAR_8;
 char VAR_9[VAR_0];

 VAR_8 = VAR_3 + VAR_7;
 if ( !VAR_8->client ) {
  return;
 }


 FUNC_25( 0, VAR_9, sizeof( VAR_9 ) );

 if (FUNC_24 (VAR_9, "say") == 0) {
  FUNC_11 (VAR_8, VAR_1, VAR_5);
  return;
 }
 if (FUNC_24 (VAR_9, "say_team") == 0) {
  FUNC_11 (VAR_8, VAR_2, VAR_5);
  return;
 }
 if (FUNC_24 (VAR_9, "tell") == 0) {
  FUNC_18 ( VAR_8 );
  return;
 }
 if (FUNC_24 (VAR_9, "vsay") == 0) {
  FUNC_21 (VAR_8, VAR_1, VAR_5, VAR_5);
  return;
 }
 if (FUNC_24 (VAR_9, "vsay_team") == 0) {
  FUNC_21 (VAR_8, VAR_2, VAR_5, VAR_5);
  return;
 }
 if (FUNC_24 (VAR_9, "vtell") == 0) {
  FUNC_20 ( VAR_8, VAR_5 );
  return;
 }
 if (FUNC_24 (VAR_9, "vosay") == 0) {
  FUNC_21 (VAR_8, VAR_1, VAR_5, VAR_6);
  return;
 }
 if (FUNC_24 (VAR_9, "vosay_team") == 0) {
  FUNC_21 (VAR_8, VAR_2, VAR_5, VAR_6);
  return;
 }
 if (FUNC_24 (VAR_9, "votell") == 0) {
  FUNC_20 ( VAR_8, VAR_6 );
  return;
 }
 if (FUNC_24 (VAR_9, "vtaunt") == 0) {
  FUNC_19 ( VAR_8 );
  return;
 }
 if (FUNC_24 (VAR_9, "score") == 0) {
  FUNC_12 (VAR_8);
  return;
 }


 if (VAR_4.intermissiontime) {
  FUNC_11 (VAR_8, VAR_5, VAR_6);
  return;
 }

 if (FUNC_24 (VAR_9, "give") == 0)
  FUNC_5 (VAR_8);
 else if (FUNC_24 (VAR_9, "god") == 0)
  FUNC_6 (VAR_8);
 else if (FUNC_24 (VAR_9, "notarget") == 0)
  FUNC_10 (VAR_8);
 else if (FUNC_24 (VAR_9, "noclip") == 0)
  FUNC_9 (VAR_8);
 else if (FUNC_24 (VAR_9, "kill") == 0)
  FUNC_7 (VAR_8);
 else if (FUNC_24 (VAR_9, "teamtask") == 0)
  FUNC_15 (VAR_8);
 else if (FUNC_24 (VAR_9, "levelshot") == 0)
  FUNC_8 (VAR_8);
 else if (FUNC_24 (VAR_9, "follow") == 0)
  FUNC_3 (VAR_8);
 else if (FUNC_24 (VAR_9, "follownext") == 0)
  FUNC_2 (VAR_8, 1);
 else if (FUNC_24 (VAR_9, "followprev") == 0)
  FUNC_2 (VAR_8, -1);
 else if (FUNC_24 (VAR_9, "team") == 0)
  FUNC_17 (VAR_8);
 else if (FUNC_24 (VAR_9, "where") == 0)
  FUNC_23 (VAR_8);
 else if (FUNC_24 (VAR_9, "callvote") == 0)
  FUNC_1 (VAR_8);
 else if (FUNC_24 (VAR_9, "vote") == 0)
  FUNC_22 (VAR_8);
 else if (FUNC_24 (VAR_9, "callteamvote") == 0)
  FUNC_0 (VAR_8);
 else if (FUNC_24 (VAR_9, "teamvote") == 0)
  FUNC_16 (VAR_8);
 else if (FUNC_24 (VAR_9, "gc") == 0)
  FUNC_4( VAR_8 );
 else if (FUNC_24 (VAR_9, "setviewpos") == 0)
  FUNC_13( VAR_8 );
 else if (FUNC_24 (VAR_9, "stats") == 0)
  FUNC_14( VAR_8 );
 else
  FUNC_26( VAR_7, FUNC_27("print \"unknown cmd %s\n\"", VAR_9 ) );
}
