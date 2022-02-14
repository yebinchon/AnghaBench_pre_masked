
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct sas_phy {size_t number; TYPE_2__ dev; } ;
struct sas_internal {TYPE_1__* dft; } ;
struct TYPE_8__ {TYPE_3__* shost; } ;
struct sas_ha_struct {TYPE_4__ core; struct asd_sas_phy** sas_phy; } ;
struct asd_sas_phy {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_7__ {int transportt; } ;
struct TYPE_5__ {int (* lldd_control_phy ) (struct asd_sas_phy*,int ,int *) ;} ;


 int VAR_0 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int FUNC_2 (struct sas_phy*) ;
 scalar_t__ FUNC_3 (struct sas_phy*) ;
 int FUNC_4 (struct asd_sas_phy*,int ,int *) ;
 struct sas_internal* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sas_phy *VAR_1)
{
 if (FUNC_3(VAR_1)) {
  struct Scsi_Host *VAR_2 = FUNC_1(VAR_1->dev.parent);
  struct sas_ha_struct *VAR_3 = FUNC_0(VAR_2);
  struct asd_sas_phy *VAR_4 = VAR_3->sas_phy[VAR_1->number];
  struct sas_internal *VAR_5 =
   FUNC_5(VAR_3->core.shost->transportt);

  return VAR_5->dft->lldd_control_phy(VAR_4, VAR_0, ((void*)0));
 }

 return FUNC_2(VAR_1);
}
