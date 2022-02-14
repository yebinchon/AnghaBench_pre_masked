
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct sas_internal {TYPE_1__* dft; } ;
struct TYPE_6__ {TYPE_2__* shost; } ;
struct sas_ha_struct {TYPE_3__ core; } ;
struct asd_sas_phy {scalar_t__ error; int phy_events_pending; struct sas_ha_struct* ha; } ;
struct asd_sas_event {struct asd_sas_phy* phy; } ;
struct TYPE_5__ {int transportt; } ;
struct TYPE_4__ {int (* lldd_control_phy ) (struct asd_sas_phy*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct asd_sas_phy*,int ,int *) ;
 struct asd_sas_event* FUNC_2 (struct work_struct*) ;
 struct sas_internal* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_2)
{
 struct asd_sas_event *VAR_3 = FUNC_2(VAR_2);
 struct asd_sas_phy *VAR_4 = VAR_3->phy;
 struct sas_ha_struct *VAR_5 = VAR_4->ha;
 struct sas_internal *VAR_6 =
  FUNC_3(VAR_5->core.shost->transportt);

 FUNC_0(VAR_0, &VAR_4->phy_events_pending);

 VAR_4->error = 0;
 VAR_6->dft->lldd_control_phy(VAR_4, VAR_1, ((void*)0));
}
