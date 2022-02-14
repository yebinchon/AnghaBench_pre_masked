
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* portalfront; int* portalflood; int leaf; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_7__ {int numportals; TYPE_1__** portals; } ;
typedef TYPE_2__ leaf_t ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0 (vportal_t *VAR_2, int VAR_3)
{
 int VAR_4;
 leaf_t *VAR_5;
 vportal_t *VAR_6;
 int VAR_7;

 VAR_5 = &VAR_0[VAR_3];

 for (VAR_4=0 ; VAR_4<VAR_5->numportals ; VAR_4++)
 {
  VAR_6 = VAR_5->portals[VAR_4];
  if (VAR_6->removed)
   continue;
  VAR_7 = VAR_6 - VAR_1;
  if ( ! (VAR_2->portalfront[VAR_7>>3] & (1<<(VAR_7&7)) ) )
   continue;

  if (VAR_2->portalflood[VAR_7>>3] & (1<<(VAR_7&7)) )
   continue;

  VAR_2->portalflood[VAR_7>>3] |= (1<<(VAR_7&7));

  FUNC_0 (VAR_2, VAR_6->leaf);
 }
}
