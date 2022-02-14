
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* qboolean ;
struct TYPE_6__ {scalar_t__ integer; } ;
struct TYPE_5__ {scalar_t__ modificationCount; int integer; } ;
struct TYPE_4__ {int numPlayingClients; int warmupTime; scalar_t__ warmupModificationCount; int time; void* restarted; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (int,size_t) ;
 TYPE_3__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int) ;

void FUNC_7( void ) {


 if ( VAR_10.numPlayingClients == 0 ) {
  return;
 }

 if ( VAR_8.integer == VAR_4 ) {


  if ( VAR_10.numPlayingClients < 2 ) {
   FUNC_0();
  }


  if ( VAR_10.numPlayingClients != 2 ) {
   if ( VAR_10.warmupTime != -1 ) {
    VAR_10.warmupTime = -1;
    FUNC_5( VAR_0, FUNC_6("%i", VAR_10.warmupTime) );
    FUNC_1( "Warmup:\n" );
   }
   return;
  }

  if ( VAR_10.warmupTime == 0 ) {
   return;
  }


  if ( VAR_9.modificationCount != VAR_10.warmupModificationCount ) {
   VAR_10.warmupModificationCount = VAR_9.modificationCount;
   VAR_10.warmupTime = -1;
  }


  if ( VAR_10.warmupTime < 0 ) {
   if ( VAR_10.numPlayingClients == 2 ) {

    VAR_10.warmupTime = VAR_10.time + ( VAR_9.integer - 1 ) * 1000;
    FUNC_5( VAR_0, FUNC_6("%i", VAR_10.warmupTime) );
   }
   return;
  }


  if ( VAR_10.time > VAR_10.warmupTime ) {
   VAR_10.warmupTime += 10000;
   FUNC_3( "g_restarted", "1" );
   FUNC_4( VAR_1, "map_restart 0\n" );
   VAR_10.restarted = VAR_12;
   return;
  }
 } else if ( VAR_8.integer != VAR_2 && VAR_10.warmupTime != 0 ) {
  int VAR_13[VAR_6];
  qboolean VAR_14 = VAR_11;

  if ( VAR_8.integer > VAR_3 ) {
   VAR_13[VAR_5] = FUNC_2( -1, VAR_5 );
   VAR_13[VAR_7] = FUNC_2( -1, VAR_7 );

   if (VAR_13[VAR_7] < 1 || VAR_13[VAR_5] < 1) {
    VAR_14 = VAR_12;
   }
  } else if ( VAR_10.numPlayingClients < 2 ) {
   VAR_14 = VAR_12;
  }

  if ( VAR_14 ) {
   if ( VAR_10.warmupTime != -1 ) {
    VAR_10.warmupTime = -1;
    FUNC_5( VAR_0, FUNC_6("%i", VAR_10.warmupTime) );
    FUNC_1( "Warmup:\n" );
   }
   return;
  }

  if ( VAR_10.warmupTime == 0 ) {
   return;
  }


  if ( VAR_9.modificationCount != VAR_10.warmupModificationCount ) {
   VAR_10.warmupModificationCount = VAR_9.modificationCount;
   VAR_10.warmupTime = -1;
  }


  if ( VAR_10.warmupTime < 0 ) {

   VAR_10.warmupTime = VAR_10.time + ( VAR_9.integer - 1 ) * 1000;
   FUNC_5( VAR_0, FUNC_6("%i", VAR_10.warmupTime) );
   return;
  }


  if ( VAR_10.time > VAR_10.warmupTime ) {
   VAR_10.warmupTime += 10000;
   FUNC_3( "g_restarted", "1" );
   FUNC_4( VAR_1, "map_restart 0\n" );
   VAR_10.restarted = VAR_12;
   return;
  }
 }
}
