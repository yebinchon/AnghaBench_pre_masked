
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int has_link_events; int link_duplex; void* module_type; void* link_autoneg; int link_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qlcnic_adapter*,int) ;

__attribute__((used)) static void FUNC_5(struct qlcnic_adapter *VAR_2,
     u32 VAR_3[])
{
 u8 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_3[3]) & 1;
 VAR_2->ahw->link_speed = FUNC_3(VAR_3[2]);
 VAR_2->ahw->link_autoneg = FUNC_2(FUNC_3(VAR_3[3]));
 VAR_2->ahw->module_type = FUNC_2(FUNC_1(VAR_3[3]));
 VAR_5 = FUNC_0(FUNC_3(VAR_3[3]));
 if (VAR_5)
  VAR_2->ahw->link_duplex = VAR_0;
 else
  VAR_2->ahw->link_duplex = VAR_1;
 VAR_2->ahw->has_link_events = 1;
 FUNC_4(VAR_2, VAR_4);
}
