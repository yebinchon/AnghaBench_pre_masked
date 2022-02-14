
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nomadik_nand_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct nomadik_nand_platform_data {int (* exit ) () ;} ;
struct nomadik_nand_host {int addr_va; int data_va; int cmd_va; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nomadik_nand_host*) ;
 struct nomadik_nand_host* FUNC_2 (struct platform_device*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct nomadik_nand_host *VAR_1 = FUNC_2(VAR_0);
 struct nomadik_nand_platform_data *VAR_2 = VAR_0->dev.platform_data;

 if (VAR_2->exit)
  VAR_2->exit();

 if (VAR_1) {
  FUNC_0(VAR_1->cmd_va);
  FUNC_0(VAR_1->data_va);
  FUNC_0(VAR_1->addr_va);
  FUNC_1(VAR_1);
 }
 return 0;
}
