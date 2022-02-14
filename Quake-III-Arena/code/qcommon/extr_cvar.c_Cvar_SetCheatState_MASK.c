
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int resetString; int name; int string; int * latchedString; struct TYPE_3__* next; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3( void ) {
 cvar_t *VAR_2;


 for ( VAR_2 = VAR_1 ; VAR_2 ; VAR_2 = VAR_2->next ) {
  if ( VAR_2->flags & VAR_0 ) {


      if (VAR_2->latchedString)
      {
        FUNC_1(VAR_2->latchedString);
        VAR_2->latchedString = ((void*)0);
      }
   if (FUNC_2(VAR_2->resetString,VAR_2->string)) {
        FUNC_0( VAR_2->name, VAR_2->resetString );
   }
  }
 }
}
