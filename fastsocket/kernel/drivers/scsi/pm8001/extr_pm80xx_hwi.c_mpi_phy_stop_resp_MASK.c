
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pm8001_phy {scalar_t__ phy_state; } ;
struct pm8001_hba_info {struct pm8001_phy* phy; } ;
struct phy_stop_resp {int phyid; int status; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,size_t) ;

__attribute__((used)) static int FUNC_3(struct pm8001_hba_info *VAR_0, void *VAR_1)
{
 struct phy_stop_resp *VAR_2 =
  (struct phy_stop_resp *)(VAR_1 + 4);
 u32 VAR_3 =
  FUNC_1(VAR_2->status);
 u32 VAR_4 =
  FUNC_1(VAR_2->phyid);
 struct pm8001_phy *VAR_5 = &VAR_0->phy[VAR_4];
 FUNC_0(VAR_0,
   FUNC_2("phy:0x%x status:0x%x\n",
     VAR_4, VAR_3));
 if (VAR_3 == 0)
  VAR_5->phy_state = 0;
 return 0;
}
