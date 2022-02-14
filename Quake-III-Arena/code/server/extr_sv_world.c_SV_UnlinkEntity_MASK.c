
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* entities; } ;
typedef TYPE_2__ worldSector_t ;
struct TYPE_10__ {struct TYPE_10__* nextEntityInWorldSector; TYPE_2__* worldSector; } ;
typedef TYPE_3__ svEntity_t ;
struct TYPE_8__ {int linked; } ;
struct TYPE_11__ {TYPE_1__ r; } ;
typedef TYPE_4__ sharedEntity_t ;


 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;

void FUNC_2( sharedEntity_t *VAR_1 ) {
 svEntity_t *VAR_2;
 svEntity_t *VAR_3;
 worldSector_t *VAR_4;

 VAR_2 = FUNC_1( VAR_1 );

 VAR_1->r.linked = VAR_0;

 VAR_4 = VAR_2->worldSector;
 if ( !VAR_4 ) {
  return;
 }
 VAR_2->worldSector = ((void*)0);

 if ( VAR_4->entities == VAR_2 ) {
  VAR_4->entities = VAR_2->nextEntityInWorldSector;
  return;
 }

 for ( VAR_3 = VAR_4->entities ; VAR_3 ; VAR_3 = VAR_3->nextEntityInWorldSector ) {
  if ( VAR_3->nextEntityInWorldSector == VAR_2 ) {
   VAR_3->nextEntityInWorldSector = VAR_2->nextEntityInWorldSector;
   return;
  }
 }

 FUNC_0( "WARNING: SV_UnlinkEntity: not found in worldSector\n" );
}
