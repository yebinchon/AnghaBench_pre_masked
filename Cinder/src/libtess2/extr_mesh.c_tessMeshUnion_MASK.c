
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_25__ {TYPE_1__* prev; struct TYPE_25__* next; } ;
struct TYPE_24__ {TYPE_5__* Sym; struct TYPE_24__* next; } ;
struct TYPE_22__ {TYPE_2__* prev; struct TYPE_22__* next; } ;
struct TYPE_23__ {TYPE_8__ eHead; TYPE_6__ vHead; TYPE_9__ fHead; } ;
struct TYPE_21__ {TYPE_4__* next; } ;
struct TYPE_20__ {TYPE_3__* Sym; } ;
struct TYPE_19__ {TYPE_8__* next; } ;
struct TYPE_18__ {TYPE_6__* next; } ;
struct TYPE_17__ {TYPE_9__* next; } ;
struct TYPE_16__ {int userData; int (* memfree ) (int ,TYPE_7__*) ;} ;
typedef TYPE_6__ TESSvertex ;
typedef TYPE_7__ TESSmesh ;
typedef TYPE_8__ TESShalfEdge ;
typedef TYPE_9__ TESSface ;
typedef TYPE_10__ TESSalloc ;


 int FUNC_0 (int ,TYPE_7__*) ;

TESSmesh *FUNC_1( TESSalloc* VAR_0, TESSmesh *VAR_1, TESSmesh *VAR_2 )
{
 TESSface *VAR_3 = &VAR_1->fHead;
 TESSvertex *VAR_4 = &VAR_1->vHead;
 TESShalfEdge *VAR_5 = &VAR_1->eHead;
 TESSface *VAR_6 = &VAR_2->fHead;
 TESSvertex *VAR_7 = &VAR_2->vHead;
 TESShalfEdge *VAR_8 = &VAR_2->eHead;


 if( VAR_6->next != VAR_6 ) {
  VAR_3->prev->next = VAR_6->next;
  VAR_6->next->prev = VAR_3->prev;
  VAR_6->prev->next = VAR_3;
  VAR_3->prev = VAR_6->prev;
 }

 if( VAR_7->next != VAR_7 ) {
  VAR_4->prev->next = VAR_7->next;
  VAR_7->next->prev = VAR_4->prev;
  VAR_7->prev->next = VAR_4;
  VAR_4->prev = VAR_7->prev;
 }

 if( VAR_8->next != VAR_8 ) {
  VAR_5->Sym->next->Sym->next = VAR_8->next;
  VAR_8->next->Sym->next = VAR_5->Sym->next;
  VAR_8->Sym->next->Sym->next = VAR_5;
  VAR_5->Sym->next = VAR_8->Sym->next;
 }

 VAR_0->memfree( VAR_0->userData, VAR_2 );
 return VAR_1;
}
