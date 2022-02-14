
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* anEdge; struct TYPE_12__* next; } ;
struct TYPE_11__ {int Onext; struct TYPE_11__* Lnext; } ;
struct TYPE_10__ {TYPE_4__ fHead; } ;
struct TYPE_9__ {int mesh; } ;
typedef TYPE_1__ TESStesselator ;
typedef TYPE_2__ TESSmesh ;
typedef TYPE_3__ TESShalfEdge ;
typedef TYPE_4__ TESSface ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3( TESStesselator *VAR_0, TESSmesh *VAR_1 )
{
 TESSface *VAR_2, *VAR_3;
 TESShalfEdge *VAR_4;


 for( VAR_2 = VAR_1->fHead.next; VAR_2 != &VAR_1->fHead; VAR_2 = VAR_3 ) {
  VAR_3 = VAR_2->next;
  VAR_4 = VAR_2->anEdge;
  FUNC_1( VAR_4->Lnext != VAR_4 );

  if( VAR_4->Lnext->Lnext == VAR_4 ) {

   FUNC_0( VAR_4->Onext, VAR_4 );
   if ( !FUNC_2( VAR_0->mesh, VAR_4 ) ) return 0;
  }
 }
 return 1;
}
