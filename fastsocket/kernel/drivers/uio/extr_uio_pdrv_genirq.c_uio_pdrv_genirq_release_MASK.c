
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_pdrv_genirq_platdata {TYPE_1__* pdev; } ;
struct uio_info {struct uio_pdrv_genirq_platdata* priv; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct uio_info *VAR_0, struct inode *VAR_1)
{
 struct uio_pdrv_genirq_platdata *VAR_2 = VAR_0->priv;


 FUNC_0(&VAR_2->pdev->dev);
 return 0;
}
