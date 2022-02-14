
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * activeRegion; scalar_t__ winding; int * Lface; int * Org; struct TYPE_8__* Lnext; struct TYPE_8__* Onext; struct TYPE_8__* Sym; struct TYPE_8__* next; } ;
struct TYPE_9__ {TYPE_2__ eSym; TYPE_2__ e; } ;
struct TYPE_7__ {int edgeBucket; } ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESShalfEdge ;
typedef TYPE_3__ EdgePair ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static TESShalfEdge *FUNC_1( TESSmesh* VAR_0, TESShalfEdge *VAR_1 )
{
 TESShalfEdge *VAR_2;
 TESShalfEdge *VAR_3;
 TESShalfEdge *VAR_4;
 EdgePair *VAR_5 = (EdgePair *)FUNC_0( VAR_0->edgeBucket );
 if (VAR_5 == ((void*)0)) return ((void*)0);

 VAR_2 = &VAR_5->e;
 VAR_3 = &VAR_5->eSym;


 if( VAR_1->Sym < VAR_1 ) { VAR_1 = VAR_1->Sym; }




 VAR_4 = VAR_1->Sym->next;
 VAR_3->next = VAR_4;
 VAR_4->Sym->next = VAR_2;
 VAR_2->next = VAR_1;
 VAR_1->Sym->next = VAR_3;

 VAR_2->Sym = VAR_3;
 VAR_2->Onext = VAR_2;
 VAR_2->Lnext = VAR_3;
 VAR_2->Org = ((void*)0);
 VAR_2->Lface = ((void*)0);
 VAR_2->winding = 0;
 VAR_2->activeRegion = ((void*)0);

 VAR_3->Sym = VAR_2;
 VAR_3->Onext = VAR_3;
 VAR_3->Lnext = VAR_2;
 VAR_3->Org = ((void*)0);
 VAR_3->Lface = ((void*)0);
 VAR_3->winding = 0;
 VAR_3->activeRegion = ((void*)0);

 return VAR_2;
}
