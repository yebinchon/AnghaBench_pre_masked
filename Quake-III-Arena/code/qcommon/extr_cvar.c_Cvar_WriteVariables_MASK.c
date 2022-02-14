
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fileHandle_t ;
struct TYPE_3__ {int flags; scalar_t__ string; int name; scalar_t__ latchedString; struct TYPE_3__* next; } ;
typedef TYPE_1__ cvar_t ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int ,scalar_t__) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 TYPE_1__* VAR_1 ;

void FUNC_3( fileHandle_t VAR_2 ) {
 cvar_t *VAR_3;
 char VAR_4[1024];

 for (VAR_3 = VAR_1 ; VAR_3 ; VAR_3 = VAR_3->next) {
  if( FUNC_2( VAR_3->name, "cl_cdkey" ) == 0 ) {
   continue;
  }
  if( VAR_3->flags & VAR_0 ) {

   if ( VAR_3->latchedString ) {
    FUNC_0 (VAR_4, sizeof(VAR_4), "seta %s \"%s\"\n", VAR_3->name, VAR_3->latchedString);
   } else {
    FUNC_0 (VAR_4, sizeof(VAR_4), "seta %s \"%s\"\n", VAR_3->name, VAR_3->string);
   }
   FUNC_1 (VAR_2, "%s", VAR_4);
  }
 }
}
