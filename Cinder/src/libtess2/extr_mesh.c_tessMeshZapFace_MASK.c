
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* anEdge; } ;
struct TYPE_14__ {struct TYPE_14__* next; struct TYPE_14__* prev; TYPE_2__* anEdge; } ;
struct TYPE_13__ {int Oprev; struct TYPE_13__* Onext; TYPE_9__* Org; struct TYPE_13__* Sym; int * Rface; int * Lface; struct TYPE_13__* Lnext; } ;
struct TYPE_12__ {int faceBucket; } ;
typedef TYPE_1__ TESSmesh ;
typedef TYPE_2__ TESShalfEdge ;
typedef TYPE_3__ TESSface ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_9__*,int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;

void FUNC_4( TESSmesh *VAR_0, TESSface *VAR_1 )
{
 TESShalfEdge *VAR_2 = VAR_1->anEdge;
 TESShalfEdge *VAR_3, *VAR_4, *VAR_5;
 TESSface *VAR_6, *VAR_7;


 VAR_4 = VAR_2->Lnext;
 do {
  VAR_3 = VAR_4;
  VAR_4 = VAR_3->Lnext;

  VAR_3->Lface = ((void*)0);
  if( VAR_3->Rface == ((void*)0) ) {


   if( VAR_3->Onext == VAR_3 ) {
    FUNC_1( VAR_0, VAR_3->Org, ((void*)0) );
   } else {

    VAR_3->Org->anEdge = VAR_3->Onext;
    FUNC_2( VAR_3, VAR_3->Oprev );
   }
   VAR_5 = VAR_3->Sym;
   if( VAR_5->Onext == VAR_5 ) {
    FUNC_1( VAR_0, VAR_5->Org, ((void*)0) );
   } else {

    VAR_5->Org->anEdge = VAR_5->Onext;
    FUNC_2( VAR_5, VAR_5->Oprev );
   }
   FUNC_0( VAR_0, VAR_3 );
  }
 } while( VAR_3 != VAR_2 );


 VAR_6 = VAR_1->prev;
 VAR_7 = VAR_1->next;
 VAR_7->prev = VAR_6;
 VAR_6->next = VAR_7;

 FUNC_3( VAR_0->faceBucket, VAR_1 );
}
