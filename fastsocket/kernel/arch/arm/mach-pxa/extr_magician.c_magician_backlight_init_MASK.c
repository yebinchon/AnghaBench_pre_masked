
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, "BL_POWER");
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_1(VAR_1, "BL_POWER2");
 if (VAR_3)
  goto err2;
 return 0;

err2:
 FUNC_0(VAR_0);
err:
 return VAR_3;
}
