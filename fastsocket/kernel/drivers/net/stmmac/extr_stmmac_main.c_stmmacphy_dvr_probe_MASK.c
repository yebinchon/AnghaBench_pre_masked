
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct plat_stmmacphy_data {int bus_id; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_0)
{
 struct plat_stmmacphy_data *VAR_1;
 VAR_1 = (struct plat_stmmacphy_data *)((VAR_0->dev).platform_data);

 FUNC_0("stmmacphy_dvr_probe: added phy for bus %d\n",
        VAR_1->bus_id);

 return 0;
}
