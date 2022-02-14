
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; scalar_t__ portalvis; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_6__ {int merged; int numportals; TYPE_1__** portals; } ;
typedef TYPE_2__ leaf_t ;
typedef int byte ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (scalar_t__,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (char*,int,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

void FUNC_5 (int VAR_11)
{
 leaf_t *VAR_12;
 byte VAR_13[VAR_1/8];
 byte VAR_14[VAR_0/8];
 int VAR_15, VAR_16;
 int VAR_17, VAR_18;
 vportal_t *VAR_19;
 int VAR_20;



 VAR_18 = VAR_11;
 while(VAR_4[VAR_18].merged >= 0)
  VAR_18 = VAR_4[VAR_18].merged;

 FUNC_3 (VAR_13, 0, VAR_5);
 VAR_12 = &VAR_4[VAR_18];
 for (VAR_15 = 0; VAR_15 < VAR_12->numportals; VAR_15++)
 {
  VAR_19 = VAR_12->portals[VAR_15];
  if (VAR_19->removed)
   continue;

  if (VAR_19->status != VAR_8)
   FUNC_0 ("portal not done");
  for (VAR_16=0 ; VAR_16<VAR_6 ; VAR_16++)
   ((long *)VAR_13)[VAR_16] |= ((long *)VAR_19->portalvis)[VAR_16];
  VAR_20 = VAR_19 - VAR_7;
  VAR_13[VAR_20>>3] |= 1<<(VAR_20&7);
 }

 FUNC_3 (VAR_14, 0, VAR_3);

 VAR_14[VAR_18>>3] |= (1<<(VAR_18&7));

 VAR_17 = FUNC_1 (VAR_13, VAR_14);






 VAR_17++;

 VAR_9 += VAR_17;

 FUNC_4 ("cluster %4i : %4i visible\n", VAR_11, VAR_17);

 FUNC_2 (VAR_10 + VAR_2 + VAR_11*VAR_3, VAR_14, VAR_3);
}
