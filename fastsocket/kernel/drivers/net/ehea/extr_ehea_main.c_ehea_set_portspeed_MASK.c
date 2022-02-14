
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct hcp_ehea_port_cb4 {int port_speed; } ;
struct ehea_port {int autoneg; int full_duplex; scalar_t__ phy_link; int netdev; void* port_speed; int logical_port_id; TYPE_1__* adapter; } ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;






 scalar_t__ VAR_13 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,struct hcp_ehea_port_cb4*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,struct hcp_ehea_port_cb4*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_14 ;

int FUNC_8(struct ehea_port *VAR_15, u32 VAR_16)
{
 struct hcp_ehea_port_cb4 *VAR_17;
 u64 VAR_18;
 int VAR_19 = 0;

 VAR_17 = (void *)FUNC_5(VAR_9);
 if (!VAR_17) {
  FUNC_0("no mem for cb4");
  VAR_19 = -VAR_7;
  goto out;
 }

 VAR_17->port_speed = VAR_16;

 FUNC_6(VAR_15->netdev);

 VAR_18 = FUNC_1(VAR_15->adapter->handle,
           VAR_15->logical_port_id,
           VAR_11, VAR_12, VAR_17);
 if (VAR_18 == VAR_13) {
  VAR_15->autoneg = VAR_16 == VAR_5 ? 1 : 0;

  VAR_18 = FUNC_2(VAR_15->adapter->handle,
           VAR_15->logical_port_id,
           VAR_11, VAR_12,
           VAR_17);
  if (VAR_18 == VAR_13) {
   switch (VAR_17->port_speed) {
   case 129:
    VAR_15->port_speed = VAR_3;
    VAR_15->full_duplex = 0;
    break;
   case 130:
    VAR_15->port_speed = VAR_3;
    VAR_15->full_duplex = 1;
    break;
   case 132:
    VAR_15->port_speed = VAR_1;
    VAR_15->full_duplex = 0;
    break;
   case 133:
    VAR_15->port_speed = VAR_1;
    VAR_15->full_duplex = 1;
    break;
   case 128:
    VAR_15->port_speed = VAR_4;
    VAR_15->full_duplex = 1;
    break;
   case 131:
    VAR_15->port_speed = VAR_2;
    VAR_15->full_duplex = 1;
    break;
   default:
    VAR_15->port_speed = 0;
    VAR_15->full_duplex = 0;
    break;
   }
  } else {
   FUNC_0("Failed sensing port speed");
   VAR_19 = -VAR_6;
  }
 } else {
  if (VAR_18 == VAR_10) {
   FUNC_3("Hypervisor denied setting port speed");
   VAR_19 = -VAR_8;
  } else {
   VAR_19 = -VAR_6;
   FUNC_0("Failed setting port speed");
  }
 }
 if (!VAR_14 || (VAR_15->phy_link == VAR_0))
  FUNC_7(VAR_15->netdev);

 FUNC_4((unsigned long)VAR_17);
out:
 return VAR_19;
}
