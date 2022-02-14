
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {TYPE_2__* eUp; int fixUpperEdge; } ;
struct TYPE_19__ {scalar_t__ Org; struct TYPE_19__* Oprev; struct TYPE_19__* Onext; int Sym; int Lprev; } ;
struct TYPE_18__ {int env; int mesh; } ;
typedef TYPE_1__ TESStesselator ;
typedef TYPE_2__ TESShalfEdge ;
typedef TYPE_3__ ActiveRegion ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int) ;
 TYPE_2__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static TESShalfEdge *FUNC_6( TESStesselator *VAR_1,
           ActiveRegion *VAR_2, ActiveRegion *VAR_3 )
{
 ActiveRegion *VAR_4, *VAR_5;
 TESShalfEdge *VAR_6, *VAR_7;

 VAR_5 = VAR_2;
 VAR_7 = VAR_2->eUp;
 while( VAR_5 != VAR_3 ) {
  VAR_5->fixUpperEdge = VAR_0;
  VAR_4 = FUNC_2( VAR_5 );
  VAR_6 = VAR_4->eUp;
  if( VAR_6->Org != VAR_7->Org ) {
   if( ! VAR_4->fixUpperEdge ) {






    FUNC_0( VAR_1, VAR_5 );
    break;
   }



   VAR_6 = FUNC_4( VAR_1->mesh, VAR_7->Lprev, VAR_6->Sym );
   if (VAR_6 == ((void*)0)) FUNC_3(VAR_1->env,1);
   if ( !FUNC_1( VAR_1, VAR_4, VAR_6 ) ) FUNC_3(VAR_1->env,1);
  }


  if( VAR_7->Onext != VAR_6 ) {
   if ( !FUNC_5( VAR_1->mesh, VAR_6->Oprev, VAR_6 ) ) FUNC_3(VAR_1->env,1);
   if ( !FUNC_5( VAR_1->mesh, VAR_7, VAR_6 ) ) FUNC_3(VAR_1->env,1);
  }
  FUNC_0( VAR_1, VAR_5 );
  VAR_7 = VAR_4->eUp;
  VAR_5 = VAR_4;
 }
 return VAR_7;
}
