
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psif {int pclk; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct psif*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct psif *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4 = FUNC_2(VAR_2->pclk);


 VAR_3 = 100 * (VAR_4 / 1000000UL);

 if (VAR_3 > ((1<<VAR_0) - 1)) {
  VAR_3 = (1<<VAR_0) - 1;
  FUNC_3(&VAR_2->pdev->dev, "pclk too fast, "
    "prescaler set to max\n");
 }

 FUNC_1(VAR_2->pclk);
 FUNC_4(VAR_2, VAR_1, VAR_3);
 FUNC_0(VAR_2->pclk);
}
