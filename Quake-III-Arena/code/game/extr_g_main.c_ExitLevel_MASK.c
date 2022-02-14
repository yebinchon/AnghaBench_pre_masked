
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ connected; } ;
struct TYPE_7__ {scalar_t__* persistant; } ;
struct TYPE_9__ {TYPE_2__ pers; TYPE_1__ ps; } ;
typedef TYPE_3__ gclient_t ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {TYPE_3__* clients; scalar_t__* teamScores; scalar_t__ intermissiontime; int * changemap; scalar_t__ restarted; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 size_t VAR_4 ;
 int FUNC_2 () ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,char*) ;

void FUNC_4 (void) {
 int VAR_11;
 gclient_t *VAR_12;


 FUNC_0();



 if ( VAR_7.integer == VAR_3 ) {
  if ( !VAR_9.restarted ) {
   FUNC_2();
   FUNC_3( VAR_2, "map_restart 0\n" );
   VAR_9.restarted = VAR_10;
   VAR_9.changemap = ((void*)0);
   VAR_9.intermissiontime = 0;
  }
  return;
 }


 FUNC_3( VAR_2, "vstr nextmap\n" );
 VAR_9.changemap = ((void*)0);
 VAR_9.intermissiontime = 0;


 VAR_9.teamScores[VAR_6] = 0;
 VAR_9.teamScores[VAR_5] = 0;
 for ( VAR_11=0 ; VAR_11< VAR_8.integer ; VAR_11++ ) {
  VAR_12 = VAR_9.clients + VAR_11;
  if ( VAR_12->pers.connected != VAR_0 ) {
   continue;
  }
  VAR_12->ps.persistant[VAR_4] = 0;
 }


 FUNC_1();



 for (VAR_11=0 ; VAR_11< VAR_8.integer ; VAR_11++) {
  if ( VAR_9.clients[VAR_11].pers.connected == VAR_0 ) {
   VAR_9.clients[VAR_11].pers.connected = VAR_1;
  }
 }

}
