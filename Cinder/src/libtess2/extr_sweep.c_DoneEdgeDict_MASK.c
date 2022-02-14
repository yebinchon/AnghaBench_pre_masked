
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fixUpperEdge; scalar_t__ windingNumber; int sentinel; } ;
struct TYPE_6__ {int dict; int alloc; } ;
typedef TYPE_1__ TESStesselator ;
typedef TYPE_2__ ActiveRegion ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( TESStesselator *VAR_0 )
{
 ActiveRegion *VAR_1;
 int VAR_2 = 0;

 while( (VAR_1 = (ActiveRegion *)FUNC_3( FUNC_4( VAR_0->dict ))) != ((void*)0) ) {





  if( ! VAR_1->sentinel ) {
   FUNC_1( VAR_1->fixUpperEdge );
   FUNC_1( ++VAR_2 == 1 );
  }
  FUNC_1( VAR_1->windingNumber == 0 );
  FUNC_0( VAR_0, VAR_1 );

 }
 FUNC_2( &VAR_0->alloc, VAR_0->dict );
}
