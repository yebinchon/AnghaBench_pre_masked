
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__* anEdge; } ;
struct TYPE_17__ {int anEdge; } ;
struct TYPE_16__ {int Oprev; struct TYPE_16__* Onext; TYPE_9__* Org; TYPE_7__* Lface; TYPE_7__* Rface; struct TYPE_16__* Sym; } ;
struct TYPE_15__ {int faceBucket; } ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESShalfEdge ;
typedef int TESSface ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_7__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_9__*,int *) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6( TESSmesh *VAR_2, TESShalfEdge *VAR_3 )
{
 TESShalfEdge *VAR_4 = VAR_3->Sym;
 int VAR_5 = VAR_0;




 if( VAR_3->Lface != VAR_3->Rface ) {

  VAR_5 = VAR_1;
  FUNC_1( VAR_2, VAR_3->Lface, VAR_3->Rface );
 }

 if( VAR_3->Onext == VAR_3 ) {
  FUNC_2( VAR_2, VAR_3->Org, ((void*)0) );
 } else {

  VAR_3->Rface->anEdge = VAR_3->Oprev;
  VAR_3->Org->anEdge = VAR_3->Onext;

  FUNC_4( VAR_3, VAR_3->Oprev );
  if( ! VAR_5 ) {
   TESSface *VAR_6= (TESSface*)FUNC_5( VAR_2->faceBucket );
   if (VAR_6 == ((void*)0)) return 0;


   FUNC_3( VAR_6, VAR_3, VAR_3->Lface );
  }
 }




 if( VAR_4->Onext == VAR_4 ) {
  FUNC_2( VAR_2, VAR_4->Org, ((void*)0) );
  FUNC_1( VAR_2, VAR_4->Lface, ((void*)0) );
 } else {

  VAR_3->Lface->anEdge = VAR_4->Oprev;
  VAR_4->Org->anEdge = VAR_4->Onext;
  FUNC_4( VAR_4, VAR_4->Oprev );
 }


 FUNC_0( VAR_2, VAR_3 );

 return 1;
}
