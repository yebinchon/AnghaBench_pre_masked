
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int Lface; int Org; int Dst; int Lnext; struct TYPE_12__* Sym; } ;
struct TYPE_11__ {int vertexBucket; } ;
typedef int TESSvertex ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESShalfEdge ;


 TYPE_2__* FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

TESShalfEdge *FUNC_4( TESSmesh *VAR_0, TESShalfEdge *VAR_1 )
{
 TESShalfEdge *VAR_2;
 TESShalfEdge *VAR_3 = FUNC_0( VAR_0, VAR_1 );
 if (VAR_3 == ((void*)0)) return ((void*)0);

 VAR_2 = VAR_3->Sym;


 FUNC_2( VAR_3, VAR_1->Lnext );


 VAR_3->Org = VAR_1->Dst;
 {
  TESSvertex *VAR_4= (TESSvertex*)FUNC_3( VAR_0->vertexBucket );
  if (VAR_4 == ((void*)0)) return ((void*)0);

  FUNC_1( VAR_4, VAR_2, VAR_3->Org );
 }
 VAR_3->Lface = VAR_2->Lface = VAR_1->Lface;

 return VAR_3;
}
