
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, "CABLE_STATE_AC");
 if (VAR_3)
  goto err1;
 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  goto err2;

 VAR_3 = FUNC_2(VAR_1, "CABLE_STATE_USB");
 if (VAR_3)
  goto err2;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  goto err3;

 return 0;

err3:
 FUNC_1(VAR_1);
err2:
 FUNC_1(VAR_0);
err1:
 return VAR_3;
}
