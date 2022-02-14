
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {TYPE_1__* eUp; } ;
struct TYPE_20__ {int mesh; int dict; int event; int pq; } ;
struct TYPE_19__ {int anEdge; } ;
struct TYPE_18__ {int Org; } ;
typedef TYPE_2__ TESSvertex ;
typedef TYPE_3__ TESStesselator ;
typedef TYPE_4__ ActiveRegion ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

int FUNC_15( TESStesselator *VAR_0 )







{
 TESSvertex *VAR_1, *VAR_2;







 FUNC_5( VAR_0 );
 if ( !FUNC_4( VAR_0 ) ) return 0;
 FUNC_3( VAR_0 );

 while( (VAR_1 = (TESSvertex *)FUNC_12( VAR_0->pq )) != ((void*)0) ) {
  for( ;; ) {
   VAR_2 = (TESSvertex *)FUNC_13( VAR_0->pq );
   if( VAR_2 == ((void*)0) || ! FUNC_9( VAR_2, VAR_1 )) break;
   VAR_2 = (TESSvertex *)FUNC_12( VAR_0->pq );
   FUNC_7( VAR_0, VAR_1->anEdge, VAR_2->anEdge );
  }
  FUNC_8( VAR_0, VAR_1 );
 }


 VAR_0->event = ((ActiveRegion *) FUNC_10( FUNC_11( VAR_0->dict )))->eUp->Org;
 FUNC_0( VAR_0 );
 FUNC_1( VAR_0 );
 FUNC_2( VAR_0 );

 if ( !FUNC_6( VAR_0, VAR_0->mesh ) ) return 0;
 FUNC_14( VAR_0->mesh );

 return 1;
}
