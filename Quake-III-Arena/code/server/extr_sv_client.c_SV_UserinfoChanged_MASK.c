
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int remoteAddress; } ;
struct TYPE_7__ {int rate; int snapshotMsec; int userinfo; TYPE_1__ netchan; int name; } ;
typedef TYPE_2__ client_t ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int integer; } ;


 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_7 (char*) ;
 TYPE_3__* VAR_1 ;

void FUNC_8( client_t *VAR_2 ) {
 char *VAR_3;
 int VAR_4;


 FUNC_4( VAR_2->name, FUNC_1 (VAR_2->userinfo, "name"), sizeof(VAR_2->name) );





 if ( FUNC_5( VAR_2->netchan.remoteAddress ) && VAR_0->integer != 2 && VAR_1->integer == 1) {
  VAR_2->rate = 99999;
 } else {
  VAR_3 = FUNC_1 (VAR_2->userinfo, "rate");
  if (FUNC_7(VAR_3)) {
   VAR_4 = FUNC_6(VAR_3);
   VAR_2->rate = VAR_4;
   if (VAR_2->rate < 1000) {
    VAR_2->rate = 1000;
   } else if (VAR_2->rate > 90000) {
    VAR_2->rate = 90000;
   }
  } else {
   VAR_2->rate = 3000;
  }
 }
 VAR_3 = FUNC_1 (VAR_2->userinfo, "handicap");
 if (FUNC_7(VAR_3)) {
  VAR_4 = FUNC_6(VAR_3);
  if (VAR_4<=0 || VAR_4>100 || FUNC_7(VAR_3) > 4) {
   FUNC_0( VAR_2->userinfo, "handicap", "100" );
  }
 }


 VAR_3 = FUNC_1 (VAR_2->userinfo, "snaps");
 if (FUNC_7(VAR_3)) {
  VAR_4 = FUNC_6(VAR_3);
  if ( VAR_4 < 1 ) {
   VAR_4 = 1;
  } else if ( VAR_4 > 30 ) {
   VAR_4 = 30;
  }
  VAR_2->snapshotMsec = 1000/VAR_4;
 } else {
  VAR_2->snapshotMsec = 50;
 }





 VAR_3 = FUNC_1 (VAR_2->userinfo, "ip");
 if (!VAR_3[0])
 {

  if ( !FUNC_3(VAR_2->netchan.remoteAddress) )
   FUNC_0( VAR_2->userinfo, "ip", FUNC_2( VAR_2->netchan.remoteAddress ) );
  else

   FUNC_0( VAR_2->userinfo, "ip", "localhost" );
 }
}
