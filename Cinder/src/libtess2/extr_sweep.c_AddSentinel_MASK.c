
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * nodeUp; void* dirty; int sentinel; void* fixUpperEdge; void* inside; scalar_t__ windingNumber; TYPE_4__* eUp; } ;
struct TYPE_12__ {TYPE_2__* Dst; TYPE_1__* Org; } ;
struct TYPE_11__ {int env; int dict; TYPE_2__* event; int mesh; int regionPool; } ;
struct TYPE_10__ {void* t; void* s; } ;
struct TYPE_9__ {void* t; void* s; } ;
typedef TYPE_3__ TESStesselator ;
typedef void* TESSreal ;
typedef TYPE_4__ TESShalfEdge ;
typedef TYPE_5__ ActiveRegion ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (int ,int) ;
 TYPE_4__* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( TESStesselator *VAR_2, TESSreal VAR_3, TESSreal VAR_4, TESSreal VAR_5 )




{
 TESShalfEdge *VAR_6;
 ActiveRegion *VAR_7 = (ActiveRegion *)FUNC_0( VAR_2->regionPool );
 if (VAR_7 == ((void*)0)) FUNC_2(VAR_2->env,1);

 VAR_6 = FUNC_3( VAR_2->mesh );
 if (VAR_6 == ((void*)0)) FUNC_2(VAR_2->env,1);

 VAR_6->Org->s = VAR_4;
 VAR_6->Org->t = VAR_5;
 VAR_6->Dst->s = VAR_3;
 VAR_6->Dst->t = VAR_5;
 VAR_2->event = VAR_6->Dst;

 VAR_7->eUp = VAR_6;
 VAR_7->windingNumber = 0;
 VAR_7->inside = VAR_0;
 VAR_7->fixUpperEdge = VAR_0;
 VAR_7->sentinel = VAR_1;
 VAR_7->dirty = VAR_0;
 VAR_7->nodeUp = FUNC_1( VAR_2->dict, VAR_7 );
 if (VAR_7->nodeUp == ((void*)0)) FUNC_2(VAR_2->env,1);
}
