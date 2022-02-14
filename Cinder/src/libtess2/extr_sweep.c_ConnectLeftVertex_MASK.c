
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_34__ {TYPE_3__* Sym; } ;
struct TYPE_33__ {scalar_t__ fixUpperEdge; scalar_t__ inside; TYPE_3__* eUp; } ;
struct TYPE_32__ {struct TYPE_32__* Sym; struct TYPE_32__* Dnext; TYPE_7__* Lnext; int Dst; int Org; } ;
struct TYPE_31__ {int env; int mesh; int dict; } ;
struct TYPE_30__ {TYPE_7__* anEdge; } ;
typedef TYPE_1__ TESSvertex ;
typedef TYPE_2__ TESStesselator ;
typedef TYPE_3__ TESShalfEdge ;
typedef TYPE_4__ ActiveRegion ;


 int FUNC_0 (TYPE_2__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*,TYPE_7__*,TYPE_7__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*,TYPE_3__*) ;
 TYPE_4__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_4__*) ;
 int FUNC_11 (int ,int) ;
 TYPE_3__* FUNC_12 (int ,TYPE_3__*,TYPE_7__*) ;

__attribute__((used)) static void FUNC_13( TESStesselator *VAR_1, TESSvertex *VAR_2 )
{
 ActiveRegion *VAR_3, *VAR_4, *VAR_5;
 TESShalfEdge *VAR_6, *VAR_7, *VAR_8;
 ActiveRegion VAR_9;




 VAR_9.eUp = VAR_2->anEdge->Sym;

 VAR_3 = (ActiveRegion *)FUNC_9( FUNC_10( VAR_1->dict, &VAR_9 ));
 VAR_4 = FUNC_6( VAR_3 );
 VAR_6 = VAR_3->eUp;
 VAR_7 = VAR_4->eUp;


 if( FUNC_4( VAR_6->Dst, VAR_2, VAR_6->Org ) == 0 ) {
  FUNC_3( VAR_1, VAR_3, VAR_2 );
  return;
 }




 VAR_5 = FUNC_8( VAR_7->Dst, VAR_6->Dst ) ? VAR_3 : VAR_4;

 if( VAR_3->inside || VAR_5->fixUpperEdge) {
  if( VAR_5 == VAR_3 ) {
   VAR_8 = FUNC_12( VAR_1->mesh, VAR_2->anEdge->Sym, VAR_6->Lnext );
   if (VAR_8 == ((void*)0)) FUNC_11(VAR_1->env,1);
  } else {
   TESShalfEdge *VAR_10= FUNC_12( VAR_1->mesh, VAR_7->Dnext, VAR_2->anEdge);
   if (VAR_10 == ((void*)0)) FUNC_11(VAR_1->env,1);

   VAR_8 = VAR_10->Sym;
  }
  if( VAR_5->fixUpperEdge ) {
   if ( !FUNC_5( VAR_1, VAR_5, VAR_8 ) ) FUNC_11(VAR_1->env,1);
  } else {
   FUNC_2( VAR_1, FUNC_0( VAR_1, VAR_3, VAR_8 ));
  }
  FUNC_7( VAR_1, VAR_2 );
 } else {



  FUNC_1( VAR_1, VAR_3, VAR_2->anEdge, VAR_2->anEdge, ((void*)0), VAR_0 );
 }
}
