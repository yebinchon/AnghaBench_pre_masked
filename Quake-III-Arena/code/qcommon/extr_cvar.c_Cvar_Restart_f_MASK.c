
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int var ;
struct TYPE_4__ {int flags; struct TYPE_4__* next; scalar_t__ resetString; scalar_t__ name; scalar_t__ latchedString; scalar_t__ string; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_4 ;

void FUNC_3( void ) {
 cvar_t *VAR_5;
 cvar_t **VAR_6;

 VAR_6 = &VAR_4;
 while ( 1 ) {
  VAR_5 = *VAR_6;
  if ( !VAR_5 ) {
   break;
  }



  if ( VAR_5->flags & ( VAR_2 | VAR_0 | VAR_1 ) ) {
   VAR_6 = &VAR_5->next;
   continue;
  }


  if ( VAR_5->flags & VAR_3 ) {
   *VAR_6 = VAR_5->next;
   if ( VAR_5->name ) {
    FUNC_2( VAR_5->name );
   }
   if ( VAR_5->string ) {
    FUNC_2( VAR_5->string );
   }
   if ( VAR_5->latchedString ) {
    FUNC_2( VAR_5->latchedString );
   }
   if ( VAR_5->resetString ) {
    FUNC_2( VAR_5->resetString );
   }


   FUNC_0( VAR_5, 0, sizeof( VAR_5 ) );
   continue;
  }

  FUNC_1( VAR_5->name, VAR_5->resetString );

  VAR_6 = &VAR_5->next;
 }
}
