
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
struct TYPE_2__ {struct device_driver gendrv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device_driver*,int *) ;
 int FUNC_1 (struct device_driver*,int *) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct device_driver *VAR_5 = &VAR_4.gendrv;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, &VAR_2);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_5, &VAR_0);
 if (VAR_6)
  goto err_try_direct_io;
 VAR_6 = FUNC_0(VAR_5, &VAR_1);
 if (VAR_6)
  goto err_attr_fixed_buf;
 VAR_6 = FUNC_0(VAR_5, &VAR_3);
 if (VAR_6)
  goto err_attr_max_sg;

 return 0;

err_attr_max_sg:
 FUNC_1(VAR_5, &VAR_1);
err_attr_fixed_buf:
 FUNC_1(VAR_5, &VAR_0);
err_try_direct_io:
 FUNC_1(VAR_5, &VAR_2);
 return VAR_6;
}
