
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct asd_phy {TYPE_2__* id_frm_tok; TYPE_1__* phy_desc; } ;
struct asd_ha_struct {struct asd_phy* phys; } ;
struct TYPE_4__ {int dma_handle; } ;
struct TYPE_3__ {int phy_control_3; int phy_control_2; int phy_control_1; int phy_control_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct asd_ha_struct*,int,int) ;
 int FUNC_4 (struct asd_ha_struct*,int ,int ) ;
 int FUNC_5 (struct asd_ha_struct*,int ,int ) ;
 int FUNC_6 (struct asd_ha_struct*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct asd_ha_struct *VAR_8, int VAR_9)
{
 struct asd_phy *VAR_10 = &VAR_8->phys[VAR_9];

 FUNC_5(VAR_8, FUNC_0(VAR_9, VAR_3), 0);
 FUNC_5(VAR_8, FUNC_0(VAR_9, VAR_2),
      VAR_1);



 FUNC_5(VAR_8, FUNC_0(VAR_9, VAR_4),
      VAR_10->phy_desc->phy_control_0);
 FUNC_5(VAR_8, FUNC_0(VAR_9, VAR_5),
      VAR_10->phy_desc->phy_control_1);
 FUNC_5(VAR_8, FUNC_0(VAR_9, VAR_6),
      VAR_10->phy_desc->phy_control_2);
 FUNC_5(VAR_8, FUNC_0(VAR_9, VAR_7),
      VAR_10->phy_desc->phy_control_3);

 FUNC_6(VAR_8, FUNC_1(VAR_9),
       VAR_0);

 FUNC_4(VAR_8, FUNC_2(VAR_9),
      VAR_10->id_frm_tok->dma_handle);

 FUNC_3(VAR_8, VAR_9, 1);

 return 0;
}
