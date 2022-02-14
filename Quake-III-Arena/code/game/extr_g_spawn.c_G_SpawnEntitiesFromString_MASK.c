
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int spawning; scalar_t__ numSpawnVars; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4( void ) {

 VAR_0.spawning = VAR_2;
 VAR_0.numSpawnVars = 0;




 if ( !FUNC_1() ) {
  FUNC_0( "SpawnEntities: no entities" );
 }
 FUNC_3();


 while( FUNC_1() ) {
  FUNC_2();
 }

 VAR_0.spawning = VAR_1;
}
