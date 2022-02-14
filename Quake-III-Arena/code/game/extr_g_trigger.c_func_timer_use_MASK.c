
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nextthink; struct TYPE_6__* activator; } ;
typedef TYPE_1__ gentity_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( gentity_t *VAR_0, gentity_t *VAR_1, gentity_t *VAR_2 ) {
 VAR_0->activator = VAR_2;


 if ( VAR_0->nextthink ) {
  VAR_0->nextthink = 0;
  return;
 }


 FUNC_0 (VAR_0);
}
