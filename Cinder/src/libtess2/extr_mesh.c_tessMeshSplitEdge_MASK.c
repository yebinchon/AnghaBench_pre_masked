
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int winding; struct TYPE_10__* Sym; int Rface; TYPE_1__* Dst; TYPE_1__* Org; struct TYPE_10__* Oprev; } ;
struct TYPE_9__ {TYPE_2__* anEdge; } ;
typedef int TESSmesh ;
typedef TYPE_2__ TESShalfEdge ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;

TESShalfEdge *FUNC_2( TESSmesh *VAR_0, TESShalfEdge *VAR_1 )
{
 TESShalfEdge *VAR_2;
 TESShalfEdge *VAR_3= FUNC_1( VAR_0, VAR_1 );
 if (VAR_3 == ((void*)0)) return ((void*)0);

 VAR_2 = VAR_3->Sym;


 FUNC_0( VAR_1->Sym, VAR_1->Sym->Oprev );
 FUNC_0( VAR_1->Sym, VAR_2 );


 VAR_1->Dst = VAR_2->Org;
 VAR_2->Dst->anEdge = VAR_2->Sym;
 VAR_2->Rface = VAR_1->Rface;
 VAR_2->winding = VAR_1->winding;
 VAR_2->Sym->winding = VAR_1->Sym->winding;

 return VAR_2;
}
