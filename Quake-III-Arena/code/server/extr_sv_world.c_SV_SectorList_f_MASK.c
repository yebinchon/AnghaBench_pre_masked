
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* entities; } ;
typedef TYPE_1__ worldSector_t ;
struct TYPE_5__ {struct TYPE_5__* nextEntityInWorldSector; } ;
typedef TYPE_2__ svEntity_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_1__* VAR_1 ;

void FUNC_1( void ) {
 int VAR_2, VAR_3;
 worldSector_t *VAR_4;
 svEntity_t *VAR_5;

 for ( VAR_2 = 0 ; VAR_2 < VAR_0 ; VAR_2++ ) {
  VAR_4 = &VAR_1[VAR_2];

  VAR_3 = 0;
  for ( VAR_5 = VAR_4->entities ; VAR_5 ; VAR_5 = VAR_5->nextEntityInWorldSector ) {
   VAR_3++;
  }
  FUNC_0( "sector %i: %i entities\n", VAR_2, VAR_3 );
 }
}
