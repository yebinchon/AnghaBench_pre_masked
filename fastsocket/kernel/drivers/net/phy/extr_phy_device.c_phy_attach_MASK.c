
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct bus_type {int dummy; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 struct phy_device* FUNC_0 (int) ;
 struct device* FUNC_1 (struct bus_type*,int *,char const*) ;
 struct bus_type VAR_1 ;
 int FUNC_2 (struct net_device*,struct phy_device*,int ,int ) ;
 int FUNC_3 (char*,char const*) ;
 struct phy_device* FUNC_4 (struct device*) ;

struct phy_device *FUNC_5(struct net_device *VAR_2,
  const char *VAR_3, u32 VAR_4, phy_interface_t VAR_5)
{
 struct bus_type *VAR_6 = &VAR_1;
 struct phy_device *VAR_7;
 struct device *VAR_8;
 int VAR_9;



 VAR_8 = FUNC_1(VAR_6, ((void*)0), VAR_3);
 if (!VAR_8) {
  FUNC_3("PHY %s not found\n", VAR_3);
  return FUNC_0(-VAR_0);
 }
 VAR_7 = FUNC_4(VAR_8);

 VAR_9 = FUNC_2(VAR_2, VAR_7, VAR_4, VAR_5);
 if (VAR_9)
  return FUNC_0(VAR_9);

 return VAR_7;
}
