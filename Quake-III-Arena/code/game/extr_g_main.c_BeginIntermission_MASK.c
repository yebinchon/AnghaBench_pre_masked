
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ health; int inuse; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {int maxclients; scalar_t__ time; scalar_t__ intermissiontime; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__* VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,char*) ;

void FUNC_8( void ) {
 int VAR_6;
 gentity_t *VAR_7;

 if ( VAR_5.intermissiontime ) {
  return;
 }


 if ( VAR_3.integer == VAR_1 ) {
  FUNC_0();
 }

 VAR_5.intermissiontime = VAR_5.time;
 FUNC_1();
 if ( VAR_3.integer == VAR_0 ) {
  FUNC_5();
  FUNC_4();
 }



 for (VAR_6=0 ; VAR_6< VAR_5.maxclients ; VAR_6++) {
  VAR_7 = VAR_2 + VAR_6;
  if (!VAR_7->inuse)
   continue;

  if (VAR_7->health <= 0) {
   FUNC_6(VAR_7);
  }
  FUNC_2( VAR_7 );
 }


 FUNC_3();

}
