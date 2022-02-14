
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_device {int dummy; } ;
struct bcma_bus {int drv_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcma_bus*,char*,...) ;
 struct bcma_device* FUNC_1 (struct bcma_bus*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bcma_bus*) ;
 int FUNC_4 (struct bcma_device*) ;

void FUNC_5(struct bcma_bus *VAR_4)
{
 struct bcma_device *VAR_5[3];
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_4->drv_cc);
 if (VAR_6 == -VAR_3)
  FUNC_0(VAR_4, "Some GPIOs are still in use.\n");
 else if (VAR_6)
  FUNC_0(VAR_4, "Can not unregister GPIO driver: %i\n", VAR_6);

 VAR_5[0] = FUNC_1(VAR_4, VAR_1);
 VAR_5[1] = FUNC_1(VAR_4, VAR_2);
 VAR_5[2] = FUNC_1(VAR_4, VAR_0);

 FUNC_3(VAR_4);

 FUNC_4(VAR_5[2]);
 FUNC_4(VAR_5[1]);
 FUNC_4(VAR_5[0]);
}
