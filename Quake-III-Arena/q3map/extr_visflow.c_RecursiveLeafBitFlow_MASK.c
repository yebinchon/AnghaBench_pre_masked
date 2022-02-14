
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int leaf; scalar_t__ portalflood; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_6__ {int numportals; TYPE_1__** portals; } ;
typedef TYPE_2__ leaf_t ;
typedef int byte ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_0 (int VAR_4, byte *VAR_5, byte *VAR_6)
{
 vportal_t *VAR_7;
 leaf_t *VAR_8;
 int VAR_9, VAR_10;
 long VAR_11;
 int VAR_12;
 byte VAR_13[VAR_0/8];

 VAR_8 = &VAR_1[VAR_4];


 for (VAR_9=0 ; VAR_9<VAR_8->numportals ; VAR_9++)
 {
  VAR_7 = VAR_8->portals[VAR_9];
  if (VAR_7->removed)
   continue;
  VAR_12 = VAR_7 - VAR_3;


  if (! (VAR_5[VAR_12>>3] & (1<<(VAR_12&7)) ) )
   continue;


  VAR_11 = 0;
  for (VAR_10=0 ; VAR_10<VAR_2 ; VAR_10++)
  {
   ((long *)VAR_13)[VAR_10] = ((long *)VAR_5)[VAR_10]
    & ((long *)VAR_7->portalflood)[VAR_10];
   VAR_11 |= ((long *)VAR_13)[VAR_10] & ~((long *)VAR_6)[VAR_10];
  }

  if (!VAR_11)
   continue;

  VAR_6[VAR_12>>3] |= (1<<(VAR_12&7));

  FUNC_0 (VAR_7->leaf, VAR_13, VAR_6);
 }
}
