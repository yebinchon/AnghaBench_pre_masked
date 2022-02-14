
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct cafe_priv* priv; } ;
struct cafe_priv {int ctl1; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_1, int VAR_2)
{
 struct cafe_priv *VAR_3 = VAR_1->priv;

 FUNC_0(&VAR_3->pdev->dev, "select_chip %d\n", VAR_2);



 if (VAR_2)
  VAR_3->ctl1 |= VAR_0;
 else
  VAR_3->ctl1 &= ~VAR_0;
}
