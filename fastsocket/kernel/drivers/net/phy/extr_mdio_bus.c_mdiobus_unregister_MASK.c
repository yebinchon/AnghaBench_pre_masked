
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {scalar_t__ state; TYPE_1__** phy_map; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mii_bus *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->state != VAR_0);
 VAR_3->state = VAR_1;

 FUNC_1(&VAR_3->dev);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3->phy_map[VAR_4])
   FUNC_2(&VAR_3->phy_map[VAR_4]->dev);
  VAR_3->phy_map[VAR_4] = ((void*)0);
 }
}
