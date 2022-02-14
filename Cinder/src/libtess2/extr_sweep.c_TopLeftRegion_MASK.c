
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* eUp; } ;
struct TYPE_17__ {TYPE_2__* eUp; scalar_t__ fixUpperEdge; } ;
struct TYPE_16__ {int mesh; } ;
struct TYPE_15__ {int Lnext; int * Org; } ;
struct TYPE_14__ {int Sym; } ;
typedef int TESSvertex ;
typedef TYPE_3__ TESStesselator ;
typedef int TESShalfEdge ;
typedef TYPE_4__ ActiveRegion ;


 int FUNC_0 (TYPE_3__*,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;
 TYPE_8__* FUNC_2 (TYPE_4__*) ;
 int * FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static ActiveRegion *FUNC_4( TESStesselator *VAR_0, ActiveRegion *VAR_1 )
{
 TESSvertex *VAR_2 = VAR_1->eUp->Org;
 TESShalfEdge *VAR_3;


 do {
  VAR_1 = FUNC_1( VAR_1 );
 } while( VAR_1->eUp->Org == VAR_2 );




 if( VAR_1->fixUpperEdge ) {
  VAR_3 = FUNC_3( VAR_0->mesh, FUNC_2(VAR_1)->eUp->Sym, VAR_1->eUp->Lnext );
  if (VAR_3 == ((void*)0)) return ((void*)0);
  if ( !FUNC_0( VAR_0, VAR_1, VAR_3 ) ) return ((void*)0);
  VAR_1 = FUNC_1( VAR_1 );
 }
 return VAR_1;
}
