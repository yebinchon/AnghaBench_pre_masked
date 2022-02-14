
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_28__ {TYPE_3__* eUp; } ;
struct TYPE_27__ {struct TYPE_27__* Onext; int * activeRegion; } ;
struct TYPE_26__ {int env; TYPE_1__* event; } ;
struct TYPE_25__ {TYPE_3__* anEdge; } ;
typedef TYPE_1__ TESSvertex ;
typedef TYPE_2__ TESStesselator ;
typedef TYPE_3__ TESShalfEdge ;
typedef TYPE_4__ ActiveRegion ;


 int FUNC_0 (TYPE_2__*,TYPE_4__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 int VAR_0 ;
 TYPE_4__* FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8( TESStesselator *VAR_1, TESSvertex *VAR_2 )




{
 ActiveRegion *VAR_3, *VAR_4;
 TESShalfEdge *VAR_5, *VAR_6, *VAR_7;

 VAR_1->event = VAR_2;
 FUNC_3( VAR_1 );





 VAR_5 = VAR_2->anEdge;
 while( VAR_5->activeRegion == ((void*)0) ) {
  VAR_5 = VAR_5->Onext;
  if( VAR_5 == VAR_2->anEdge ) {

   FUNC_1( VAR_1, VAR_2 );
   return;
  }
 }
 VAR_3 = FUNC_6( VAR_1, VAR_5->activeRegion );
 if (VAR_3 == ((void*)0)) FUNC_7(VAR_1->env,1);
 VAR_4 = FUNC_5( VAR_3 );
 VAR_6 = VAR_4->eUp;
 VAR_7 = FUNC_4( VAR_1, VAR_4, ((void*)0) );






 if( VAR_7->Onext == VAR_6 ) {

  FUNC_2( VAR_1, VAR_3, VAR_7 );
 } else {
  FUNC_0( VAR_1, VAR_3, VAR_7->Onext, VAR_6, VAR_6, VAR_0 );
 }
}
