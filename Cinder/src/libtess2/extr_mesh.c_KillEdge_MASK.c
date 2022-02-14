
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* Sym; } ;
struct TYPE_6__ {int edgeBucket; } ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESShalfEdge ;


 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( TESSmesh *VAR_0, TESShalfEdge *VAR_1 )
{
 TESShalfEdge *VAR_2, *VAR_3;


 if( VAR_1->Sym < VAR_1 ) { VAR_1 = VAR_1->Sym; }


 VAR_3 = VAR_1->next;
 VAR_2 = VAR_1->Sym->next;
 VAR_3->Sym->next = VAR_2;
 VAR_2->Sym->next = VAR_3;

 FUNC_0( VAR_0->edgeBucket, VAR_1 );
}
