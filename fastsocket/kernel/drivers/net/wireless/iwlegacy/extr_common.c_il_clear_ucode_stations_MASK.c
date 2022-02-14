
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_stations; } ;
struct il_priv {int sta_lock; TYPE_1__* stations; TYPE_2__ hw_params; } ;
struct TYPE_3__ {int used; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(struct il_priv *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;
 bool VAR_4 = 0;

 FUNC_0("Clearing ucode stations in driver\n");

 FUNC_1(&VAR_1->sta_lock, VAR_3);
 for (VAR_2 = 0; VAR_2 < VAR_1->hw_params.max_stations; VAR_2++) {
  if (VAR_1->stations[VAR_2].used & VAR_0) {
   FUNC_0("Clearing ucode active for station %d\n", VAR_2);
   VAR_1->stations[VAR_2].used &= ~VAR_0;
   VAR_4 = 1;
  }
 }
 FUNC_2(&VAR_1->sta_lock, VAR_3);

 if (!VAR_4)
  FUNC_0("No active stations found to be cleared\n");
}
