
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* Onext; TYPE_1__* Org; } ;
struct TYPE_9__ {int vertexBucket; } ;
struct TYPE_8__ {struct TYPE_8__* next; struct TYPE_8__* prev; TYPE_3__* anEdge; } ;
typedef TYPE_1__ TESSvertex ;
typedef TYPE_2__ TESSmesh ;
typedef TYPE_3__ TESShalfEdge ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( TESSmesh *VAR_0, TESSvertex *VAR_1, TESSvertex *VAR_2 )
{
 TESShalfEdge *VAR_3, *VAR_4 = VAR_1->anEdge;
 TESSvertex *VAR_5, *VAR_6;


 VAR_3 = VAR_4;
 do {
  VAR_3->Org = VAR_2;
  VAR_3 = VAR_3->Onext;
 } while( VAR_3 != VAR_4 );


 VAR_5 = VAR_1->prev;
 VAR_6 = VAR_1->next;
 VAR_6->prev = VAR_5;
 VAR_5->next = VAR_6;

 FUNC_0( VAR_0->vertexBucket, VAR_1 );
}
