
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {TYPE_1__* ca; } ;
struct ib_device_attr {int fw_ver; } ;
struct ethtool_drvinfo {int driver; int version; int bus_info; int fw_version; } ;
struct TYPE_2__ {int dma_device; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,struct ib_device_attr*) ;
 char* VAR_1 ;
 int FUNC_2 (struct ib_device_attr*) ;
 struct ib_device_attr* FUNC_3 (int,int ) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int,char*,int,int,int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2,
         struct ethtool_drvinfo *VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_4(VAR_2);
 struct ib_device_attr *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (VAR_5 && !FUNC_1(VAR_4->ca, VAR_5))
  FUNC_5(VAR_3->fw_version, sizeof(VAR_3->fw_version),
    "%d.%d.%d", (int)(VAR_5->fw_ver >> 32),
    (int)(VAR_5->fw_ver >> 16) & 0xffff,
    (int)VAR_5->fw_ver & 0xffff);
 FUNC_2(VAR_5);

 FUNC_6(VAR_3->bus_info, FUNC_0(VAR_4->ca->dma_device),
  sizeof(VAR_3->bus_info));

 FUNC_6(VAR_3->version, VAR_1,
  sizeof(VAR_3->version));

 FUNC_6(VAR_3->driver, "ib_ipoib", sizeof(VAR_3->driver));
}
