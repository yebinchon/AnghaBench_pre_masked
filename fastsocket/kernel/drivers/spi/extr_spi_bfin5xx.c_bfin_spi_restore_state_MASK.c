
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_data {TYPE_1__* pdev; struct chip_data* cur_chip; } ;
struct chip_data {int baud; int ctl_reg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct driver_data*,struct chip_data*) ;
 int FUNC_1 (struct driver_data*) ;
 int FUNC_2 (struct driver_data*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct driver_data*,int ) ;
 int FUNC_5 (struct driver_data*,int ) ;
 int FUNC_6 (struct driver_data*,int ) ;

__attribute__((used)) static void FUNC_7(struct driver_data *VAR_1)
{
 struct chip_data *VAR_2 = VAR_1->cur_chip;


 FUNC_6(VAR_1, VAR_0);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->pdev->dev, "restoring spi ctl state\n");


 FUNC_5(VAR_1, VAR_2->ctl_reg);
 FUNC_4(VAR_1, VAR_2->baud);

 FUNC_2(VAR_1);
 FUNC_0(VAR_1, VAR_2);
}
