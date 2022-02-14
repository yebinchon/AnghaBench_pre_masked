
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int numpoints; int * points; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_20__ {size_t leaf; int* portalflood; float radius; TYPE_1__* winding; int origin; scalar_t__ removed; TYPE_4__* passages; int status; } ;
typedef TYPE_2__ vportal_t ;
struct TYPE_21__ {float dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_22__ {int* cansee; struct TYPE_22__* next; } ;
typedef TYPE_4__ passage_t ;
struct TYPE_23__ {int numportals; TYPE_2__** portals; } ;
typedef TYPE_5__ leaf_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ,TYPE_3__*,int) ;
 float FUNC_1 (int ,int ) ;
 int VAR_0 ;
 float VAR_1 ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (char*,int) ;
 TYPE_5__* VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_4__*,int ,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__** VAR_8 ;
 int VAR_9 ;

void FUNC_7(int VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 float VAR_17;
 vportal_t *VAR_18, *VAR_19, *VAR_20;
 leaf_t *VAR_21;
 passage_t *VAR_22, *VAR_23;
 plane_t VAR_24[VAR_0*2];
 winding_t *VAR_25;
 winding_t VAR_26, VAR_27, *VAR_28;





 VAR_18 = VAR_8[VAR_10];

 if (VAR_18->removed)
 {
  VAR_18->status = VAR_9;
  return;
 }

 VAR_23 = ((void*)0);
 VAR_21 = &VAR_2[VAR_18->leaf];
 for (VAR_11 = 0; VAR_11 < VAR_21->numportals; VAR_11++)
 {
  VAR_20 = VAR_21->portals[VAR_11];
  if (VAR_20->removed)
   continue;

  VAR_22 = (passage_t *) FUNC_4(sizeof(passage_t) + VAR_4);
  FUNC_6(VAR_22, 0, sizeof(passage_t) + VAR_4);
  VAR_15 = FUNC_0(VAR_18->winding, VAR_20->winding, VAR_6, VAR_24, VAR_0*2);
  VAR_15 += FUNC_0(VAR_20->winding, VAR_18->winding, VAR_7, &VAR_24[VAR_15], VAR_0*2-VAR_15);

  VAR_22->next = ((void*)0);
  if (VAR_23)
   VAR_23->next = VAR_22;
  else
   VAR_18->passages = VAR_22;
  VAR_23 = VAR_22;

  VAR_16 = 0;

  for (VAR_12 = 0; VAR_12 < VAR_3 * 2; VAR_12++)
  {
   VAR_19 = &VAR_5[VAR_12];
   if (VAR_19->removed)
    continue;
   if ( ! (VAR_20->portalflood[VAR_12 >> 3] & (1<<(VAR_12&7)) ) )
    continue;
   if ( ! (VAR_18->portalflood[VAR_12 >> 3] & (1<<(VAR_12&7)) ) )
    continue;
   for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
   {

    VAR_17 = FUNC_1 (VAR_19->origin, VAR_24[VAR_13].normal) - VAR_24[VAR_13].dist;

    if (VAR_17 < -VAR_19->radius + VAR_1)
     break;
    VAR_25 = VAR_19->winding;
    for (VAR_14 = 0; VAR_14 < VAR_25->numpoints; VAR_14++)
    {
     VAR_17 = FUNC_1 (VAR_25->points[VAR_14], VAR_24[VAR_13].normal) - VAR_24[VAR_13].dist;

     if (VAR_17 > VAR_1)
      break;
    }

    if (VAR_14 >= VAR_25->numpoints)
     break;
   }
   if (VAR_13 < VAR_15)
    continue;
   FUNC_5(&VAR_26, VAR_19->winding, sizeof(winding_t));
   for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
   {
    VAR_28 = FUNC_2(&VAR_26, &VAR_27, &VAR_24[VAR_13]);
    if (VAR_28 == &VAR_27)
     FUNC_5(&VAR_26, &VAR_27, sizeof(winding_t));
    if (VAR_28 == ((void*)0))
     break;
   }
   if (VAR_13 < VAR_15)
    continue;
   VAR_22->cansee[VAR_12 >> 3] |= (1<<(VAR_12&7));
   VAR_16++;
  }
 }
}
