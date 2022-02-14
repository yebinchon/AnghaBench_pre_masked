
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {float dist; int normal; } ;
struct TYPE_21__ {size_t leaf; scalar_t__ status; float radius; TYPE_2__ plane; void* winding; int origin; scalar_t__ portalflood; scalar_t__ portalvis; scalar_t__ removed; TYPE_8__* passages; } ;
typedef TYPE_4__ vportal_t ;
struct TYPE_24__ {float dist; int normal; } ;
struct TYPE_18__ {TYPE_7__ portalplane; } ;
struct TYPE_22__ {TYPE_3__* base; TYPE_1__ pstack_head; } ;
typedef TYPE_5__ threaddata_t ;
struct TYPE_23__ {int* numseperators; int* mightsee; int* freewindings; struct TYPE_23__* next; void* pass; void* source; TYPE_7__** seperators; TYPE_4__* portal; TYPE_2__ portalplane; scalar_t__ depth; TYPE_9__* leaf; } ;
typedef TYPE_6__ pstack_t ;
typedef TYPE_7__ plane_t ;
struct TYPE_25__ {scalar_t__ cansee; struct TYPE_25__* next; } ;
typedef TYPE_8__ passage_t ;
struct TYPE_26__ {int numportals; TYPE_4__** portals; } ;
typedef TYPE_9__ leaf_t ;
struct TYPE_20__ {int* portalvis; float radius; int origin; } ;


 void* FUNC_0 (void*,void*,void*,int ,TYPE_6__*) ;
 float FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 void* FUNC_3 (void*,TYPE_6__*,TYPE_7__*) ;
 TYPE_9__* VAR_0 ;
 int FUNC_4 (long*,long*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void FUNC_5 (vportal_t *VAR_8, threaddata_t *VAR_9, pstack_t *VAR_10)
{
 pstack_t VAR_11;
 vportal_t *VAR_12;
 leaf_t *VAR_13;
 plane_t VAR_14;
 passage_t *VAR_15, *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 long *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24, VAR_25;
 int VAR_26;



 VAR_13 = &VAR_0[VAR_8->leaf];


 VAR_10->next = &VAR_11;

 VAR_11.next = ((void*)0);
 VAR_11.leaf = VAR_13;
 VAR_11.portal = ((void*)0);
 VAR_11.depth = VAR_10->depth + 1;






 VAR_21 = (long *)VAR_9->base->portalvis;

 VAR_15 = VAR_8->passages;
 VAR_16 = VAR_15;

 for (VAR_17 = 0; VAR_17 < VAR_13->numportals; VAR_17++, VAR_15 = VAR_16)
 {
  VAR_12 = VAR_13->portals[VAR_17];
  if (VAR_12->removed)
   continue;
  VAR_16 = VAR_15->next;
  VAR_26 = VAR_12 - VAR_3;

  if ( ! (VAR_10->mightsee[VAR_26 >> 3] & (1<<(VAR_26&7)) ) )
   continue;

  VAR_22 = (long *)VAR_10->mightsee;
  VAR_23 = (long *)VAR_15->cansee;
  VAR_20 = (long *)VAR_11.mightsee;
  FUNC_4(VAR_20, VAR_22, VAR_1);
  if (VAR_12->status == VAR_6)
   VAR_24 = (long *) VAR_12->portalvis;
  else
   VAR_24 = (long *) VAR_12->portalflood;
  VAR_25 = 0;
  for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++)
  {
   if (*VAR_20)
   {
    *VAR_20 &= *VAR_23++ & *VAR_24++;
    VAR_25 |= (*VAR_20 & ~VAR_21[VAR_18]);
   }
   else
   {
    VAR_23++;
    VAR_24++;
   }
   VAR_20++;
  }

  if (!VAR_25 && (VAR_9->base->portalvis[VAR_26>>3] & (1<<(VAR_26&7))) )
  {
   continue;
  }


  VAR_11.portalplane = VAR_12->plane;
  FUNC_2 (VAR_7, VAR_12->plane.normal, VAR_14.normal);
  VAR_14.dist = -VAR_12->plane.dist;



  VAR_11.portal = VAR_12;
  VAR_11.next = ((void*)0);
  VAR_11.freewindings[0] = 1;
  VAR_11.freewindings[1] = 1;
  VAR_11.freewindings[2] = 1;


  {
   float VAR_27;

   VAR_27 = FUNC_1 (VAR_12->origin, VAR_9->pstack_head.portalplane.normal);
   VAR_27 -= VAR_9->pstack_head.portalplane.dist;
   if (VAR_27 < -VAR_12->radius)
   {
    continue;
   }
   else if (VAR_27 > VAR_12->radius)
   {
    VAR_11.pass = VAR_12->winding;
   }
   else
   {
    VAR_11.pass = FUNC_3 (VAR_12->winding, &VAR_11, &VAR_9->pstack_head.portalplane);
    if (!VAR_11.pass)
     continue;
   }
  }
  {
   float VAR_28;

   VAR_28 = FUNC_1 (VAR_9->base->origin, VAR_12->plane.normal);
   VAR_28 -= VAR_12->plane.dist;


   if (VAR_28 > VAR_9->base->radius)
   {
    continue;
   }


   else if (VAR_28 < -VAR_9->base->radius)
   {
    VAR_11.source = VAR_10->source;
   }
   else
   {
    VAR_11.source = FUNC_3 (VAR_10->source, &VAR_11, &VAR_14);

    if (!VAR_11.source)
     continue;
   }
  }






  if (!VAR_10->pass)
  {


   VAR_9->base->portalvis[VAR_26>>3] |= (1<<(VAR_26&7));

   FUNC_5 (VAR_12, VAR_9, &VAR_11);
   continue;
  }
  VAR_11.pass = FUNC_0 (VAR_11.source, VAR_10->pass, VAR_11.pass, VAR_4, &VAR_11);

  if (!VAR_11.pass)
   continue;
  VAR_11.pass = FUNC_0 (VAR_10->pass, VAR_11.source, VAR_11.pass, VAR_5, &VAR_11);

  if (!VAR_11.pass)
   continue;


  VAR_9->base->portalvis[VAR_26>>3] |= (1<<(VAR_26&7));


  FUNC_5(VAR_12, VAR_9, &VAR_11);

  VAR_11.next = ((void*)0);
 }
}
