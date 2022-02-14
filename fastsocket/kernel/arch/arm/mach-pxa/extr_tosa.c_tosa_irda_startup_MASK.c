
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct device*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, "IrDA TX");
 if (VAR_5)
  goto err_tx;
 VAR_5 = FUNC_0(VAR_2, 0);
 if (VAR_5)
  goto err_tx_dir;

 VAR_5 = FUNC_2(VAR_3, "IrDA powerdown");
 if (VAR_5)
  goto err_pwr;

 VAR_5 = FUNC_0(VAR_3, 0);
 if (VAR_5)
  goto err_pwr_dir;

 FUNC_3(VAR_4, VAR_1 | VAR_0);

 return 0;

err_pwr_dir:
 FUNC_1(VAR_3);
err_pwr:
err_tx_dir:
 FUNC_1(VAR_2);
err_tx:
 return VAR_5;
}
