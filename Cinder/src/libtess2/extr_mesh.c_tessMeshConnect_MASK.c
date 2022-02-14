
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_19__ {TYPE_10__* Lface; int Org; int Dst; struct TYPE_19__* Lnext; struct TYPE_19__* Sym; } ;
struct TYPE_18__ {int faceBucket; } ;
struct TYPE_17__ {TYPE_2__* anEdge; } ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESShalfEdge ;
typedef int TESSface ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_10__*,TYPE_10__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_10__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;

TESShalfEdge *FUNC_5( TESSmesh *VAR_2, TESShalfEdge *VAR_3, TESShalfEdge *VAR_4 )
{
 TESShalfEdge *VAR_5;
 int VAR_6 = VAR_0;
 TESShalfEdge *VAR_7 = FUNC_1( VAR_2, VAR_3 );
 if (VAR_7 == ((void*)0)) return ((void*)0);

 VAR_5 = VAR_7->Sym;

 if( VAR_4->Lface != VAR_3->Lface ) {

  VAR_6 = VAR_1;
  FUNC_0( VAR_2, VAR_4->Lface, VAR_3->Lface );
 }


 FUNC_3( VAR_7, VAR_3->Lnext );
 FUNC_3( VAR_5, VAR_4 );


 VAR_7->Org = VAR_3->Dst;
 VAR_5->Org = VAR_4->Org;
 VAR_7->Lface = VAR_5->Lface = VAR_3->Lface;


 VAR_3->Lface->anEdge = VAR_5;

 if( ! VAR_6 ) {
  TESSface *VAR_8= (TESSface*)FUNC_4( VAR_2->faceBucket );
  if (VAR_8 == ((void*)0)) return ((void*)0);


  FUNC_2( VAR_8, VAR_7, VAR_3->Lface );
 }
 return VAR_7;
}
