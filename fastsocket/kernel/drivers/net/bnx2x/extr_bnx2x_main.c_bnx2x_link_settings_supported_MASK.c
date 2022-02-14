
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int* supported; void* phy_addr; int * link_config; } ;
struct TYPE_8__ {int num_phys; int multi_phy_config; int* speed_cap_mask; TYPE_1__* phy; } ;
struct bnx2x {TYPE_4__ port; TYPE_3__ link_params; } ;
struct TYPE_10__ {TYPE_2__* port_hw_config; } ;
struct TYPE_7__ {int external_phy_config2; int external_phy_config; } ;
struct TYPE_6__ {int supported; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;


 TYPE_5__ VAR_24 ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_25, u32 VAR_26)
{
 int VAR_27 = 0, VAR_28, VAR_29 = FUNC_2(VAR_25);


 VAR_25->port.supported[0] = 0;
 VAR_25->port.supported[1] = 0;
 switch (VAR_25->link_params.num_phys) {
 case 1:
  VAR_25->port.supported[0] = VAR_25->link_params.phy[VAR_2].supported;
  VAR_27 = 1;
  break;
 case 2:
  VAR_25->port.supported[0] = VAR_25->link_params.phy[VAR_0].supported;
  VAR_27 = 1;
  break;
 case 3:
  if (VAR_25->link_params.multi_phy_config &
      VAR_6) {
   VAR_25->port.supported[1] =
    VAR_25->link_params.phy[VAR_0].supported;
   VAR_25->port.supported[0] =
    VAR_25->link_params.phy[VAR_1].supported;
  } else {
   VAR_25->port.supported[0] =
    VAR_25->link_params.phy[VAR_0].supported;
   VAR_25->port.supported[1] =
    VAR_25->link_params.phy[VAR_1].supported;
  }
  VAR_27 = 2;
  break;
 }

 if (!(VAR_25->port.supported[0] || VAR_25->port.supported[1])) {
  FUNC_1("NVRAM config error. BAD phy config. PHY1 config 0x%x, PHY2 config 0x%x\n",
      FUNC_5(VAR_25,
      VAR_24.port_hw_config[VAR_29].external_phy_config),
      FUNC_5(VAR_25,
      VAR_24.port_hw_config[VAR_29].external_phy_config2));
   return;
 }

 if (FUNC_3(VAR_25))
  VAR_25->port.phy_addr = FUNC_4(VAR_25, VAR_3);
 else {
  switch (VAR_26) {
  case 128:
   VAR_25->port.phy_addr = FUNC_4(
    VAR_25, VAR_4 + VAR_29*0x10);
   break;
  case 129:
   VAR_25->port.phy_addr = FUNC_4(
    VAR_25, VAR_5 + VAR_29*0x18);
   break;
  default:
   FUNC_1("BAD switch_cfg link_config 0x%x\n",
      VAR_25->port.link_config[0]);
   return;
  }
 }
 FUNC_0("phy_addr 0x%x\n", VAR_25->port.phy_addr);

 for (VAR_28 = 0; VAR_28 < VAR_27; VAR_28++) {
  if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
    VAR_11))
   VAR_25->port.supported[VAR_28] &= ~VAR_21;

  if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
    VAR_10))
   VAR_25->port.supported[VAR_28] &= ~VAR_20;

  if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
    VAR_8))
   VAR_25->port.supported[VAR_28] &= ~VAR_19;

  if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
    VAR_7))
   VAR_25->port.supported[VAR_28] &= ~VAR_18;

  if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
     VAR_12))
   VAR_25->port.supported[VAR_28] &= ~(VAR_17 |
           VAR_16);

  if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
     VAR_14))
   VAR_25->port.supported[VAR_28] &= ~VAR_23;

  if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
     VAR_9))
   VAR_25->port.supported[VAR_28] &= ~VAR_15;

  if (!(VAR_25->link_params.speed_cap_mask[VAR_28] &
     VAR_13))
   VAR_25->port.supported[VAR_28] &= ~VAR_22;
 }

 FUNC_0("supported 0x%x 0x%x\n", VAR_25->port.supported[0],
         VAR_25->port.supported[1]);
}
