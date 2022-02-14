
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int contents; } ;
struct TYPE_7__ {int damage; int spawnflags; int use; TYPE_1__ r; int touch; int noise_index; } ;
typedef TYPE_2__ gentity_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3( gentity_t *VAR_3 ) {
 FUNC_1 (VAR_3);

 VAR_3->noise_index = FUNC_0( "sound/world/electro.wav" );
 VAR_3->touch = VAR_1;

 if ( !VAR_3->damage ) {
  VAR_3->damage = 5;
 }

 VAR_3->r.contents = VAR_0;

 if ( VAR_3->spawnflags & 2 ) {
  VAR_3->use = VAR_2;
 }


 if ( ! (VAR_3->spawnflags & 1) ) {
  FUNC_2 (VAR_3);
 }
}
