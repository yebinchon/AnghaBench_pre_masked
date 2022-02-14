
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sas_ha_struct {int (* notify_phy_event ) (TYPE_1__*,int ) ;} ;
struct done_list_struct {int* status_block; } ;
struct TYPE_6__ {int iproto; int linkrate; } ;
struct asd_phy {TYPE_1__ sas_phy; } ;
struct asd_ha_struct {struct asd_phy* phys; struct sas_ha_struct sas_ha; } ;
struct asd_ascb {struct asd_ha_struct* ha; } ;


 int FUNC_0 (char*,int,...) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct asd_ha_struct*,int,int) ;
 int FUNC_2 (struct asd_phy*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_8(struct asd_ascb *VAR_6,
      struct done_list_struct *VAR_7)
{
 struct asd_ha_struct *VAR_8 = VAR_6->ha;
 struct sas_ha_struct *VAR_9 = &VAR_8->sas_ha;
 int VAR_10 = VAR_7->status_block[0] & VAR_0;
 struct asd_phy *VAR_11 = &VAR_8->phys[VAR_10];

 u8 VAR_12 = VAR_7->status_block[1] & VAR_5;
 u8 VAR_13 = VAR_7->status_block[2];

 switch (VAR_12) {
 case 131:

  FUNC_0("phy%d: device unplugged\n", VAR_10);
  FUNC_1(VAR_8, VAR_10, 0);
  FUNC_3(&VAR_11->sas_phy);
  VAR_9->notify_phy_event(&VAR_11->sas_phy, VAR_1);
  break;
 case 130:

  FUNC_1(VAR_8, VAR_10, 1);
  FUNC_2(VAR_11, VAR_13);
  FUNC_0("phy%d device plugged: lrate:0x%x, proto:0x%x\n",
       VAR_10, VAR_11->sas_phy.linkrate, VAR_11->sas_phy.iproto);
  VAR_9->notify_phy_event(&VAR_11->sas_phy, VAR_2);
  break;
 case 128:

  FUNC_1(VAR_8, VAR_10, 1);
  VAR_9->notify_phy_event(&VAR_11->sas_phy, VAR_4);
  break;
 case 132:
 case 129:
  FUNC_0("phy%d error while OOB: oob status:0x%x\n", VAR_10,
       VAR_7->status_block[1]);
  FUNC_1(VAR_8, VAR_10, 0);
  FUNC_3(&VAR_11->sas_phy);
  VAR_9->notify_phy_event(&VAR_11->sas_phy, VAR_3);
  break;
 }
}
