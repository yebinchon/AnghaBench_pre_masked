
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* Onext; TYPE_1__* Sym; } ;
struct TYPE_5__ {TYPE_2__* Lnext; } ;
typedef TYPE_2__ TESShalfEdge ;



__attribute__((used)) static void FUNC_0( TESShalfEdge *VAR_0, TESShalfEdge *VAR_1 )
{
 TESShalfEdge *VAR_2 = VAR_0->Onext;
 TESShalfEdge *VAR_3 = VAR_1->Onext;

 VAR_2->Sym->Lnext = VAR_1;
 VAR_3->Sym->Lnext = VAR_0;
 VAR_0->Onext = VAR_3;
 VAR_1->Onext = VAR_2;
}
