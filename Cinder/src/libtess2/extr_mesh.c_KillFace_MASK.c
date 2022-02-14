
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; struct TYPE_10__* prev; TYPE_2__* anEdge; } ;
struct TYPE_9__ {struct TYPE_9__* Lnext; TYPE_3__* Lface; } ;
struct TYPE_8__ {int faceBucket; } ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESShalfEdge ;
typedef TYPE_3__ TESSface ;


 int FUNC_0 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1( TESSmesh *VAR_0, TESSface *VAR_1, TESSface *VAR_2 )
{
 TESShalfEdge *VAR_3, *VAR_4 = VAR_1->anEdge;
 TESSface *VAR_5, *VAR_6;


 VAR_3 = VAR_4;
 do {
  VAR_3->Lface = VAR_2;
  VAR_3 = VAR_3->Lnext;
 } while( VAR_3 != VAR_4 );


 VAR_5 = VAR_1->prev;
 VAR_6 = VAR_1->next;
 VAR_6->prev = VAR_5;
 VAR_5->next = VAR_6;

 FUNC_0( VAR_0->faceBucket, VAR_1 );
}
