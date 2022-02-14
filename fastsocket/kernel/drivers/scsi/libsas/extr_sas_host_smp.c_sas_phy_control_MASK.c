
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sas_phy_linkrates {int minimum_linkrate; int maximum_linkrate; } ;
struct sas_internal {TYPE_3__* dft; } ;
struct TYPE_5__ {TYPE_1__* shost; } ;
struct sas_ha_struct {size_t num_phys; struct asd_sas_phy** sas_phy; TYPE_2__ core; } ;
struct asd_sas_phy {int dummy; } ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;
struct TYPE_6__ {scalar_t__ (* lldd_control_phy ) (struct asd_sas_phy*,size_t,struct sas_phy_linkrates*) ;} ;
struct TYPE_4__ {int transportt; } ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct asd_sas_phy*) ;
 scalar_t__ FUNC_1 (struct asd_sas_phy*,size_t,struct sas_phy_linkrates*) ;
 struct sas_internal* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sas_ha_struct *VAR_4, u8 VAR_5,
       u8 VAR_6, enum sas_linkrate VAR_7,
       enum sas_linkrate VAR_8, u8 *VAR_9)
{
 struct sas_internal *VAR_10 =
  FUNC_2(VAR_4->core.shost->transportt);
 struct sas_phy_linkrates VAR_11;
 struct asd_sas_phy *VAR_12;

 if (VAR_5 >= VAR_4->num_phys) {
  VAR_9[2] = VAR_2;
  return;
 }

 VAR_12 = VAR_4->sas_phy[VAR_5];
 switch (VAR_6) {
 case 129:
 case 130:
 case 131:
 case 132:
 case 133:
 case 134:
 case 128:
  break;

 default:
  VAR_9[2] = VAR_3;
  return;
 }

 VAR_11.minimum_linkrate = VAR_7;
 VAR_11.maximum_linkrate = VAR_8;


 if (VAR_6 == 130 && FUNC_0(VAR_12) == 0) {
  VAR_9[2] = VAR_0;
  return;
 }

 if (VAR_10->dft->lldd_control_phy(VAR_12, VAR_6, &VAR_11))
  VAR_9[2] = VAR_1;
 else
  VAR_9[2] = VAR_0;
}
