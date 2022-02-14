
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numpoints; int * points; } ;
typedef TYPE_2__ winding_t ;
struct TYPE_6__ {float dist; int normal; } ;
struct TYPE_8__ {int* portalfront; int* portalflood; int* portalvis; scalar_t__ nummightsee; int leaf; TYPE_1__ plane; TYPE_2__* winding; scalar_t__ removed; } ;
typedef TYPE_3__ vportal_t ;


 scalar_t__ FUNC_0 (int*,int) ;
 float FUNC_1 (int ,int ) ;
 float VAR_0 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_1 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;

void FUNC_5 (int VAR_5)
{
 int VAR_6, VAR_7;
 vportal_t *VAR_8, *VAR_9;
 float VAR_10;
 winding_t *VAR_11;

 VAR_9 = VAR_4+VAR_5;

 if (VAR_9->removed)
  return;

 VAR_9->portalfront = FUNC_3 (VAR_3);
 FUNC_4 (VAR_9->portalfront, 0, VAR_3);

 VAR_9->portalflood = FUNC_3 (VAR_3);
 FUNC_4 (VAR_9->portalflood, 0, VAR_3);

 VAR_9->portalvis = FUNC_3 (VAR_3);
 FUNC_4 (VAR_9->portalvis, 0, VAR_3);

 for (VAR_6=0, VAR_8 = VAR_4 ; VAR_6<VAR_2*2 ; VAR_6++, VAR_8++)
 {
  if (VAR_6 == VAR_5)
   continue;
  if (VAR_8->removed)
   continue;
  VAR_11 = VAR_8->winding;
  for (VAR_7=0 ; VAR_7<VAR_11->numpoints ; VAR_7++)
  {
   VAR_10 = FUNC_1 (VAR_11->points[VAR_7], VAR_9->plane.normal)
    - VAR_9->plane.dist;
   if (VAR_10 > VAR_0)
    break;
  }
  if (VAR_7 == VAR_11->numpoints)
   continue;

  VAR_11 = VAR_9->winding;
  for (VAR_7=0 ; VAR_7<VAR_11->numpoints ; VAR_7++)
  {
   VAR_10 = FUNC_1 (VAR_11->points[VAR_7], VAR_8->plane.normal)
    - VAR_8->plane.dist;
   if (VAR_10 < -VAR_0)
    break;
  }
  if (VAR_7 == VAR_11->numpoints)
   continue;

  VAR_9->portalfront[VAR_6>>3] |= (1<<(VAR_6&7));
 }

 FUNC_2 (VAR_9, VAR_9->leaf);

 VAR_9->nummightsee = FUNC_0 (VAR_9->portalflood, VAR_2*2);

 VAR_1 += VAR_9->nummightsee;
}
