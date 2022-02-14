
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {scalar_t__ modificationCount; scalar_t__ teamShader; TYPE_2__* vmCvar; int cvarName; scalar_t__ trackChange; } ;
typedef TYPE_1__ cvarTable_t ;
struct TYPE_5__ {scalar_t__ modificationCount; int string; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,int ) ;

void FUNC_4( void ) {
 int VAR_4;
 cvarTable_t *VAR_5;
 qboolean VAR_6 = VAR_2;

 for ( VAR_4 = 0, VAR_5 = VAR_0 ; VAR_4 < VAR_1 ; VAR_4++, VAR_5++ ) {
  if ( VAR_5->vmCvar ) {
   FUNC_1( VAR_5->vmCvar );

   if ( VAR_5->modificationCount != VAR_5->vmCvar->modificationCount ) {
    VAR_5->modificationCount = VAR_5->vmCvar->modificationCount;

    if ( VAR_5->trackChange ) {
     FUNC_2( -1, FUNC_3("print \"Server: %s changed to %s\n\"",
      VAR_5->cvarName, VAR_5->vmCvar->string ) );
    }

    if (VAR_5->teamShader) {
     VAR_6 = VAR_3;
    }
   }
  }
 }

 if (VAR_6) {
  FUNC_0();
 }
}
