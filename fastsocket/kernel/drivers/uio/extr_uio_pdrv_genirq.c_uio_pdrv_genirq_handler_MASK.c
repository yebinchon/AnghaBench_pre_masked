
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_pdrv_genirq_platdata {int flags; } ;
struct uio_info {struct uio_pdrv_genirq_platdata* priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, struct uio_info *VAR_2)
{
 struct uio_pdrv_genirq_platdata *VAR_3 = VAR_2->priv;





 if (!FUNC_1(0, &VAR_3->flags))
  FUNC_0(VAR_1);

 return VAR_0;
}
