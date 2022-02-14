
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ inside; struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_2__ fHead; } ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESSface ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

int FUNC_1( TESSmesh *VAR_0 )
{
 TESSface *VAR_1, *VAR_2;


 for( VAR_1 = VAR_0->fHead.next; VAR_1 != &VAR_0->fHead; VAR_1 = VAR_2 ) {

  VAR_2 = VAR_1->next;
  if( VAR_1->inside ) {
   if ( !FUNC_0( VAR_0, VAR_1 ) ) return 0;
  }
 }

 return 1;
}
