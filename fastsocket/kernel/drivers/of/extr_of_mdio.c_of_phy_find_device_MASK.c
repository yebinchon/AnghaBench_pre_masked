
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,int *,struct device_node*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct phy_device* FUNC_1 (struct device*) ;

struct phy_device *FUNC_2(struct device_node *VAR_2)
{
 struct device *VAR_3;
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_0(&VAR_0, ((void*)0), VAR_2, VAR_1);
 return VAR_3 ? FUNC_1(VAR_3) : ((void*)0);
}
