
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sas_ha_struct {scalar_t__ lldd_ha; struct asd_sas_phy** sas_phy; } ;
struct mvs_prv_info {size_t n_phy; struct mvs_info** mvi; } ;
struct mvs_info {int dummy; } ;
struct asd_sas_phy {int id; struct sas_ha_struct* ha; } ;
typedef enum phy_func { ____Placeholder_phy_func } phy_func ;
struct TYPE_2__ {size_t (* read_phy_ctl ) (struct mvs_info*,int) ;int (* phy_disable ) (struct mvs_info*,int) ;int (* phy_reset ) (struct mvs_info*,int,int) ;int (* phy_enable ) (struct mvs_info*,int) ;int (* phy_set_link_rate ) (struct mvs_info*,int,void*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;





 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mvs_info*,int,void*) ;
 size_t FUNC_2 (struct mvs_info*,int) ;
 int FUNC_3 (struct mvs_info*,int,int) ;
 int FUNC_4 (struct mvs_info*,int) ;
 int FUNC_5 (struct mvs_info*,int,int) ;
 int FUNC_6 (struct mvs_info*,int) ;

int FUNC_7(struct asd_sas_phy *VAR_3, enum phy_func VAR_4,
   void *VAR_5)
{
 int VAR_6 = 0, VAR_7 = VAR_3->id;
 u32 VAR_8, VAR_9 = 0, VAR_10;
 struct sas_ha_struct *VAR_11 = VAR_3->ha;
 struct mvs_info *VAR_12 = ((void*)0);

 while (VAR_11->sas_phy[VAR_9]) {
  if (VAR_11->sas_phy[VAR_9] == VAR_3)
   break;
  VAR_9++;
 }
 VAR_10 = VAR_9/((struct mvs_prv_info *)VAR_11->lldd_ha)->n_phy;
 VAR_12 = ((struct mvs_prv_info *)VAR_11->lldd_ha)->mvi[VAR_10];

 switch (VAR_4) {
 case 128:
  VAR_1->phy_set_link_rate(VAR_12, VAR_7, VAR_5);
  break;

 case 131:
  VAR_8 = VAR_1->read_phy_ctl(VAR_12, VAR_7);
  if (VAR_8 & VAR_2)
   break;
  VAR_1->phy_reset(VAR_12, VAR_7, 1);
  break;

 case 130:
  VAR_1->phy_enable(VAR_12, VAR_7);
  VAR_1->phy_reset(VAR_12, VAR_7, 0);
  break;

 case 132:
  VAR_1->phy_disable(VAR_12, VAR_7);
  break;
 case 129:
 default:
  VAR_6 = -VAR_0;
 }
 FUNC_0(200);
 return VAR_6;
}
