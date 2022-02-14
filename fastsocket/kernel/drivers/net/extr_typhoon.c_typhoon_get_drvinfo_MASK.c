
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct typhoon {scalar_t__ card_state; struct pci_dev* pdev; } ;
struct resp_desc {int parm2; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; int fw_version; } ;
struct cmd_desc {int dummy; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct cmd_desc*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct typhoon* FUNC_2 (struct net_device*) ;
 char* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,char*,int,int,int) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (struct typhoon*,int,struct cmd_desc*,int,struct resp_desc*) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_4, struct ethtool_drvinfo *VAR_5)
{
 struct typhoon *VAR_6 = FUNC_2(VAR_4);
 struct pci_dev *VAR_7 = VAR_6->pdev;
 struct cmd_desc VAR_8;
 struct resp_desc VAR_9[3];

 FUNC_4();
 if(VAR_6->card_state == VAR_2) {
  FUNC_6(VAR_5->fw_version, "Sleep image");
 } else {
  FUNC_0(&VAR_8, VAR_3);
  if(FUNC_7(VAR_6, 1, &VAR_8, 3, VAR_9) < 0) {
   FUNC_6(VAR_5->fw_version, "Unknown runtime");
  } else {
   u32 VAR_10 = FUNC_1(VAR_9[0].parm2);
   FUNC_5(VAR_5->fw_version, 32, "%02x.%03x.%03x",
     VAR_10 >> 24, (VAR_10 >> 12) & 0xfff,
     VAR_10 & 0xfff);
  }
 }

 FUNC_6(VAR_5->driver, VAR_0);
 FUNC_6(VAR_5->version, VAR_1);
 FUNC_6(VAR_5->bus_info, FUNC_3(VAR_7));
}
