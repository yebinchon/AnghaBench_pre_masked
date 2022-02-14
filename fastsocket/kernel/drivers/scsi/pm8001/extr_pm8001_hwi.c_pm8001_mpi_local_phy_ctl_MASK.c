
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pm8001_hba_info {int dummy; } ;
struct local_phy_ctl_resp {int phyop_phyid; int status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

int FUNC_3(struct pm8001_hba_info *VAR_2, void *VAR_3)
{
 struct local_phy_ctl_resp *VAR_4 =
  (struct local_phy_ctl_resp *)(VAR_3 + 4);
 u32 VAR_5 = FUNC_1(VAR_4->status);
 u32 VAR_6 = FUNC_1(VAR_4->phyop_phyid) & VAR_0;
 u32 VAR_7 = FUNC_1(VAR_4->phyop_phyid) & VAR_1;
 if (VAR_5 != 0) {
  FUNC_0(VAR_2,
   FUNC_2("%x phy execute %x phy op failed!\n",
   VAR_6, VAR_7));
 } else
  FUNC_0(VAR_2,
   FUNC_2("%x phy execute %x phy op success!\n",
   VAR_6, VAR_7));
 return 0;
}
