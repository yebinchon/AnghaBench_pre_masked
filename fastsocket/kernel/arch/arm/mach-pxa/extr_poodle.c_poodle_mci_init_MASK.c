
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, irq_handler_t VAR_3, void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0, "SD_PWR");
 if (VAR_5)
  goto err_free_2;

 VAR_5 = FUNC_2(VAR_1, "SD_PWR1");
 if (VAR_5)
  goto err_free_3;

 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_1, 0);

 return 0;

err_free_3:
 FUNC_1(VAR_0);
err_free_2:
 return VAR_5;
}
