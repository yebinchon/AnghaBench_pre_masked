
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int inside; int marked; int * trail; TYPE_1__* anEdge; struct TYPE_7__* prev; struct TYPE_7__* next; } ;
struct TYPE_6__ {struct TYPE_6__* Lnext; TYPE_2__* Lface; } ;
typedef TYPE_1__ TESShalfEdge ;
typedef TYPE_2__ TESSface ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( TESSface *VAR_1, TESShalfEdge *VAR_2, TESSface *VAR_3 )
{
 TESShalfEdge *VAR_4;
 TESSface *VAR_5;
 TESSface *VAR_6 = VAR_1;

 FUNC_0(VAR_6 != ((void*)0));


 VAR_5 = VAR_3->prev;
 VAR_6->prev = VAR_5;
 VAR_5->next = VAR_6;
 VAR_6->next = VAR_3;
 VAR_3->prev = VAR_6;

 VAR_6->anEdge = VAR_2;
 VAR_6->trail = ((void*)0);
 VAR_6->marked = VAR_0;




 VAR_6->inside = VAR_3->inside;


 VAR_4 = VAR_2;
 do {
  VAR_4->Lface = VAR_6;
  VAR_4 = VAR_4->Lnext;
 } while( VAR_4 != VAR_2 );
}
