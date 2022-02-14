
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* eUp; int fixUpperEdge; } ;
struct TYPE_9__ {TYPE_3__* activeRegion; } ;
struct TYPE_8__ {int mesh; } ;
typedef TYPE_1__ TESStesselator ;
typedef TYPE_2__ TESShalfEdge ;
typedef TYPE_3__ ActiveRegion ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2( TESStesselator *VAR_1, ActiveRegion *VAR_2, TESShalfEdge *VAR_3 )



{
 FUNC_0( VAR_2->fixUpperEdge );
 if ( !FUNC_1( VAR_1->mesh, VAR_2->eUp ) ) return 0;
 VAR_2->fixUpperEdge = VAR_0;
 VAR_2->eUp = VAR_3;
 VAR_3->activeRegion = VAR_2;

 return 1;
}
