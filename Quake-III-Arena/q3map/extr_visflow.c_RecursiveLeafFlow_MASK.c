
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {float dist; int normal; } ;
struct TYPE_19__ {scalar_t__ status; float radius; int leaf; TYPE_3__ plane; void* winding; int origin; scalar_t__ portalflood; scalar_t__ portalvis; scalar_t__ removed; } ;
typedef TYPE_4__ vportal_t ;
struct TYPE_22__ {float dist; int normal; } ;
struct TYPE_16__ {TYPE_7__ portalplane; } ;
struct TYPE_20__ {TYPE_2__* base; TYPE_1__ pstack_head; int c_chains; } ;
typedef TYPE_5__ threaddata_t ;
struct TYPE_21__ {int* numseperators; int* mightsee; int* freewindings; struct TYPE_21__* next; void* pass; void* source; TYPE_7__** seperators; TYPE_4__* portal; TYPE_3__ portalplane; scalar_t__ depth; TYPE_8__* leaf; } ;
typedef TYPE_6__ pstack_t ;
typedef TYPE_7__ plane_t ;
struct TYPE_23__ {int numportals; TYPE_4__** portals; } ;
typedef TYPE_8__ leaf_t ;
struct TYPE_17__ {int* portalvis; float radius; int origin; } ;


 void* FUNC_0 (void*,void*,void*,int ,TYPE_6__*) ;
 float FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 void* FUNC_3 (void*,TYPE_6__*,TYPE_7__*) ;
 TYPE_8__* VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void FUNC_4 (int VAR_7, threaddata_t *VAR_8, pstack_t *VAR_9)
{
 pstack_t VAR_10;
 vportal_t *VAR_11;
 plane_t VAR_12;
 leaf_t *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 long *VAR_17, *VAR_18, *VAR_19, *VAR_20, VAR_21;
 int VAR_22;

 VAR_8->c_chains++;

 VAR_13 = &VAR_0[VAR_7];


 VAR_9->next = &VAR_10;

 VAR_10.next = ((void*)0);
 VAR_10.leaf = VAR_13;
 VAR_10.portal = ((void*)0);
 VAR_10.depth = VAR_9->depth + 1;






 VAR_18 = (long *)VAR_10.mightsee;
 VAR_20 = (long *)VAR_8->base->portalvis;


 for (VAR_14 = 0; VAR_14 < VAR_13->numportals; VAR_14++)
 {
  VAR_11 = VAR_13->portals[VAR_14];
  if (VAR_11->removed)
   continue;
  VAR_22 = VAR_11 - VAR_2;
  if ( ! (VAR_9->mightsee[VAR_22 >> 3] & (1<<(VAR_22&7)) ) )
  {
   continue;
  }


  if (VAR_11->status == VAR_5)
  {
   VAR_17 = (long *)VAR_11->portalvis;
  }
  else
  {
   VAR_17 = (long *)VAR_11->portalflood;
  }

  VAR_21 = 0;
  VAR_19 = (long *)VAR_9->mightsee;
  for (VAR_15=0 ; VAR_15<VAR_1 ; VAR_15++)
  {
   VAR_18[VAR_15] = VAR_19[VAR_15] & VAR_17[VAR_15];
   VAR_21 |= (VAR_18[VAR_15] & ~VAR_20[VAR_15]);
  }

  if (!VAR_21 &&
   (VAR_8->base->portalvis[VAR_22>>3] & (1<<(VAR_22&7))) )
  {
   continue;
  }


  VAR_10.portalplane = VAR_11->plane;
  FUNC_2 (VAR_6, VAR_11->plane.normal, VAR_12.normal);
  VAR_12.dist = -VAR_11->plane.dist;



  VAR_10.portal = VAR_11;
  VAR_10.next = ((void*)0);
  VAR_10.freewindings[0] = 1;
  VAR_10.freewindings[1] = 1;
  VAR_10.freewindings[2] = 1;


  {
   float VAR_23;

   VAR_23 = FUNC_1 (VAR_11->origin, VAR_8->pstack_head.portalplane.normal);
   VAR_23 -= VAR_8->pstack_head.portalplane.dist;
   if (VAR_23 < -VAR_11->radius)
   {
    continue;
   }
   else if (VAR_23 > VAR_11->radius)
   {
    VAR_10.pass = VAR_11->winding;
   }
   else
   {
    VAR_10.pass = FUNC_3 (VAR_11->winding, &VAR_10, &VAR_8->pstack_head.portalplane);
    if (!VAR_10.pass)
     continue;
   }
  }
  {
   float VAR_24;

   VAR_24 = FUNC_1 (VAR_8->base->origin, VAR_11->plane.normal);
   VAR_24 -= VAR_11->plane.dist;


   if (VAR_24 > VAR_8->base->radius)
   {
    continue;
   }


   else if (VAR_24 < -VAR_8->base->radius)
   {
    VAR_10.source = VAR_9->source;
   }
   else
   {
    VAR_10.source = FUNC_3 (VAR_9->source, &VAR_10, &VAR_12);

    if (!VAR_10.source)
     continue;
   }
  }






  if (!VAR_9->pass)
  {


   VAR_8->base->portalvis[VAR_22>>3] |= (1<<(VAR_22&7));

   FUNC_4 (VAR_11->leaf, VAR_8, &VAR_10);
   continue;
  }
  VAR_10.pass = FUNC_0 (VAR_10.source, VAR_9->pass, VAR_10.pass, VAR_3, &VAR_10);

  if (!VAR_10.pass)
   continue;
  VAR_10.pass = FUNC_0 (VAR_9->pass, VAR_10.source, VAR_10.pass, VAR_4, &VAR_10);

  if (!VAR_10.pass)
   continue;


  VAR_8->base->portalvis[VAR_22>>3] |= (1<<(VAR_22&7));


  FUNC_4 (VAR_11->leaf, VAR_8, &VAR_10);

  VAR_10.next = ((void*)0);
 }
}
