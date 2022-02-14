
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isci_phy {TYPE_1__* transport_layer_registers; } ;
struct TYPE_2__ {int control; int stp_rni; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct isci_phy *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 FUNC_2(VAR_2, &VAR_1->transport_layer_registers->stp_rni);





 VAR_3 = FUNC_1(&VAR_1->transport_layer_registers->control);
 VAR_3 |= FUNC_0(VAR_0);
 FUNC_2(VAR_3, &VAR_1->transport_layer_registers->control);
}
