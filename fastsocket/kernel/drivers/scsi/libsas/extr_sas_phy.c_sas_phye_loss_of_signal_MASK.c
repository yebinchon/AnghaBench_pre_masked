
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct asd_sas_phy {scalar_t__ error; int phy_events_pending; } ;
struct asd_sas_event {struct asd_sas_phy* phy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct asd_sas_phy*,int) ;
 struct asd_sas_event* FUNC_2 (struct work_struct*) ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_1)
{
 struct asd_sas_event *VAR_2 = FUNC_2(VAR_1);
 struct asd_sas_phy *VAR_3 = VAR_2->phy;

 FUNC_0(VAR_0, &VAR_3->phy_events_pending);
 VAR_3->error = 0;
 FUNC_1(VAR_3, 1);
}
