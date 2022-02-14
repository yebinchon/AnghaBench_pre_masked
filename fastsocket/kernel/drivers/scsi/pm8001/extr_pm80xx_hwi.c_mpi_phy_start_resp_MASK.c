
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pm8001_phy {int phy_state; int enable_completion; } ;
struct pm8001_hba_info {scalar_t__ flags; struct pm8001_phy* phy; } ;
struct phy_start_resp {int phyid; int status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,size_t) ;

__attribute__((used)) static int FUNC_4(struct pm8001_hba_info *VAR_1, void *VAR_2)
{
 struct phy_start_resp *VAR_3 =
  (struct phy_start_resp *)(VAR_2 + 4);
 u32 VAR_4 =
  FUNC_2(VAR_3->status);
 u32 VAR_5 =
  FUNC_2(VAR_3->phyid);
 struct pm8001_phy *VAR_6 = &VAR_1->phy[VAR_5];

 FUNC_0(VAR_1,
  FUNC_3("phy start resp status:0x%x, phyid:0x%x\n",
    VAR_4, VAR_5));
 if (VAR_4 == 0) {
  VAR_6->phy_state = 1;
  if (VAR_1->flags == VAR_0)
   FUNC_1(VAR_6->enable_completion);
 }
 return 0;

}
