
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
typedef int phy_interface_t ;
struct TYPE_3__ {int archdata; } ;


 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_0 ;
 char* VAR_1 ;
 struct device_node* FUNC_1 (int *) ;
 int * FUNC_2 (struct device_node*,char*,int*) ;
 struct phy_device* FUNC_3 (struct net_device*,char*,void (*) (struct net_device*),int ,int ) ;
 int FUNC_4 (char*,char*,char*,int const) ;

struct phy_device *FUNC_5(struct net_device *VAR_2,
          void (*VAR_3)(struct net_device *),
          phy_interface_t VAR_4)
{
 struct device_node *VAR_5;
 char VAR_6[VAR_0 + 3];
 struct phy_device *VAR_7;
 const u32 *VAR_8;
 int VAR_9;

 if (!VAR_2->dev.parent)
  return ((void*)0);

 VAR_5 = FUNC_1(&VAR_2->dev.parent->archdata);
 if (!VAR_5)
  return ((void*)0);

 VAR_8 = FUNC_2(VAR_5, "fixed-link", &VAR_9);
 if (!VAR_8 || VAR_9 < sizeof(*VAR_8))
  return ((void*)0);

 FUNC_4(VAR_6, VAR_1, "0", VAR_8[0]);

 VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_3, 0, VAR_4);
 return FUNC_0(VAR_7) ? ((void*)0) : VAR_7;
}
