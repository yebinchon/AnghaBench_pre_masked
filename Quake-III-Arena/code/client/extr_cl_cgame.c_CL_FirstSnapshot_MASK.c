
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int snapFlags; scalar_t__ serverTime; } ;
struct TYPE_10__ {TYPE_1__ snap; scalar_t__ oldServerTime; scalar_t__ serverTimeDelta; } ;
struct TYPE_9__ {scalar_t__* string; } ;
struct TYPE_8__ {scalar_t__ timeDemoBaseTime; } ;
struct TYPE_7__ {scalar_t__ realtime; int state; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 TYPE_5__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;

void FUNC_3( void ) {

 if ( VAR_2.snap.snapFlags & VAR_1 ) {
  return;
 }
 VAR_5.state = VAR_0;


 VAR_2.serverTimeDelta = VAR_2.snap.serverTime - VAR_5.realtime;
 VAR_2.oldServerTime = VAR_2.snap.serverTime;

 VAR_4.timeDemoBaseTime = VAR_2.snap.serverTime;





 if ( VAR_3->string[0] ) {
  FUNC_0( VAR_3->string );
  FUNC_1( "activeAction", "" );
 }

 FUNC_2();
}
