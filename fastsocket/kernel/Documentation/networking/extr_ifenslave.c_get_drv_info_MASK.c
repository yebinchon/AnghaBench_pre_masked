
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {scalar_t__ ifr_data; int ifr_name; } ;
struct ethtool_drvinfo {int fw_version; int driver; int cmd; } ;
typedef int ifr ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,int) ;
 char* FUNC_5 (int ,char**,int ) ;
 int FUNC_6 (char*,char*,...) ;

__attribute__((used)) static int FUNC_7(char *VAR_9)
{
 struct ifreq VAR_10;
 struct ethtool_drvinfo VAR_11;
 char *VAR_12;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 FUNC_4(VAR_10.ifr_name, VAR_9, VAR_3);
 VAR_10.ifr_data = (caddr_t)&VAR_11;

 VAR_11.cmd = VAR_2;
 FUNC_4(VAR_11.driver, "ifenslave", 32);
 FUNC_2(VAR_11.fw_version, 32, "%d", VAR_0);

 if (FUNC_0(VAR_8, VAR_4, &VAR_10) < 0) {
  if (VAR_6 == VAR_1) {
   goto out;
  }

  VAR_7 = VAR_6;
  FUNC_6("Master '%s': Error: get bonding info failed %s\n",
   VAR_9, FUNC_3(VAR_7));
  return 1;
 }

 VAR_5 = FUNC_5(VAR_11.fw_version, &VAR_12, 0);
 if (*VAR_12) {
                FUNC_6("Master '%s': Error: got invalid string as an ABI "
   "version from the bonding module\n",
   VAR_9);
  return 1;
 }

out:
 FUNC_6("ABI ver is %d\n", VAR_5);

 return 0;
}
