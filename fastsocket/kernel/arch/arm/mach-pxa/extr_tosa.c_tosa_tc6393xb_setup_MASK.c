
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, "CARD_VCC_ON");
 if (VAR_2)
  goto err_req;

 VAR_2 = FUNC_0(VAR_0, 1);
 if (VAR_2)
  goto err_dir;

 return VAR_2;

err_dir:
 FUNC_1(VAR_0);
err_req:
 return VAR_2;
}
