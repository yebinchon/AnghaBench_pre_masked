
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct sas_internal {TYPE_3__* dft; } ;
struct TYPE_5__ {TYPE_1__* shost; } ;
struct sas_ha_struct {TYPE_2__ core; } ;
struct asd_sas_port {int dummy; } ;
struct asd_sas_phy {int error; scalar_t__ enabled; int phy_events_pending; struct asd_sas_port* port; struct sas_ha_struct* ha; } ;
struct asd_sas_event {struct asd_sas_phy* phy; } ;
struct TYPE_6__ {int (* lldd_control_phy ) (struct asd_sas_phy*,int ,int *) ;} ;
struct TYPE_4__ {int transportt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct asd_sas_phy*,int) ;
 int FUNC_2 (struct asd_sas_phy*,int ,int *) ;
 int FUNC_3 (struct asd_sas_phy*,int ,int *) ;
 struct asd_sas_event* FUNC_4 (struct work_struct*) ;
 struct sas_internal* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_3)
{
 struct asd_sas_event *VAR_4 = FUNC_4(VAR_3);
 struct asd_sas_phy *VAR_5 = VAR_4->phy;
 struct sas_ha_struct *VAR_6 = VAR_5->ha;
 struct asd_sas_port *VAR_7 = VAR_5->port;
 struct sas_internal *VAR_8 =
  FUNC_5(VAR_6->core.shost->transportt);

 FUNC_0(VAR_0, &VAR_5->phy_events_pending);

 FUNC_1(VAR_5, 1);

 if (!VAR_7 && VAR_5->enabled && VAR_8->dft->lldd_control_phy) {
  VAR_5->error++;
  switch (VAR_5->error) {
  case 1:
  case 2:
   VAR_8->dft->lldd_control_phy(VAR_5, VAR_2,
       ((void*)0));
   break;
  case 3:
  default:
   VAR_5->error = 0;
   VAR_5->enabled = 0;
   VAR_8->dft->lldd_control_phy(VAR_5, VAR_1, ((void*)0));
   break;
  }
 }
}
