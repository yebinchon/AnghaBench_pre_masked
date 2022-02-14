
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 FUNC_0 ("In ohci_hcd_pxa27x_drv_probe");

 if (FUNC_1())
  return -VAR_0;

 return FUNC_2(&VAR_1, VAR_2);
}
