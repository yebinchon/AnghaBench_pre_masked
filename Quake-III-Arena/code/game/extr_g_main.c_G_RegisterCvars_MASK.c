
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_7__ {scalar_t__ teamShader; TYPE_2__* vmCvar; int modificationCount; int cvarFlags; int defaultString; int cvarName; } ;
typedef TYPE_1__ cvarTable_t ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {int modificationCount; } ;
struct TYPE_9__ {int warmupModificationCount; } ;
struct TYPE_8__ {int modificationCount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 () ;
 TYPE_6__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (char*,char*) ;

void FUNC_4( void ) {
 int VAR_8;
 cvarTable_t *VAR_9;
 qboolean VAR_10 = VAR_6;

 for ( VAR_8 = 0, VAR_9 = VAR_3 ; VAR_8 < VAR_4 ; VAR_8++, VAR_9++ ) {
  FUNC_2( VAR_9->vmCvar, VAR_9->cvarName,
   VAR_9->defaultString, VAR_9->cvarFlags );
  if ( VAR_9->vmCvar )
   VAR_9->modificationCount = VAR_9->vmCvar->modificationCount;

  if (VAR_9->teamShader) {
   VAR_10 = VAR_7;
  }
 }

 if (VAR_10) {
  FUNC_1();
 }


 if ( VAR_1.integer < 0 || VAR_1.integer >= VAR_0 ) {
  FUNC_0( "g_gametype %i is out of range, defaulting to 0\n", VAR_1.integer );
  FUNC_3( "g_gametype", "0" );
 }

 VAR_5.warmupModificationCount = VAR_2.modificationCount;
}
