
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device {int dev; } ;
struct gfar_private {int ndev; int regs; scalar_t__ tbi_node; scalar_t__ phy_node; } ;


 struct gfar_private* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct of_device *VAR_0)
{
 struct gfar_private *VAR_1 = FUNC_0(&VAR_0->dev);

 if (VAR_1->phy_node)
  FUNC_4(VAR_1->phy_node);
 if (VAR_1->tbi_node)
  FUNC_4(VAR_1->tbi_node);

 FUNC_1(&VAR_0->dev, ((void*)0));

 FUNC_5(VAR_1->ndev);
 FUNC_3(VAR_1->regs);
 FUNC_2(VAR_1->ndev);

 return 0;
}
