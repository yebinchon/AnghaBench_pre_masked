
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isci_phy {int protocol; int sm; TYPE_1__* link_layer_registers; } ;
struct TYPE_2__ {int phy_configuration; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct isci_phy *VAR_3)
{




 u32 VAR_4;

 VAR_4 = FUNC_1(&VAR_3->link_layer_registers->phy_configuration);
 VAR_4 |= FUNC_0(VAR_1);
 FUNC_3(VAR_4,
        &VAR_3->link_layer_registers->phy_configuration);

 FUNC_2(&VAR_3->sm, VAR_2);

 VAR_3->protocol = VAR_0;
}
