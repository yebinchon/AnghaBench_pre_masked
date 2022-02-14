
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_bus {int bustype; int host_pci; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct b44 {TYPE_1__* sdev; } ;
struct TYPE_2__ {struct ssb_bus* bus; } ;


 char* VAR_0 ;
 char* VAR_1 ;




 int FUNC_0 (int) ;
 struct b44* FUNC_1 (struct net_device*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4 (struct net_device *VAR_2, struct ethtool_drvinfo *VAR_3)
{
 struct b44 *VAR_4 = FUNC_1(VAR_2);
 struct ssb_bus *VAR_5 = VAR_4->sdev->bus;

 FUNC_3(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_3(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 switch (VAR_5->bustype) {
 case 131:
  FUNC_3(VAR_3->bus_info, FUNC_2(VAR_5->host_pci), sizeof(VAR_3->bus_info));
  break;
 case 128:
  FUNC_3(VAR_3->bus_info, "SSB", sizeof(VAR_3->bus_info));
  break;
 case 130:
 case 129:
  FUNC_0(1);
  break;
 }
}
