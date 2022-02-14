
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_dev_addr {int dummy; } ;
struct uwb_dev {int dev_addr; } ;
struct device {int dummy; } ;


 struct uwb_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct uwb_dev_addr*,int *) ;

int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct uwb_dev *VAR_2 = FUNC_0(VAR_0);
 struct uwb_dev_addr *VAR_3 = VAR_1;
 if (!FUNC_1(VAR_3, &VAR_2->dev_addr))
  return !0;
 return 0;
}
