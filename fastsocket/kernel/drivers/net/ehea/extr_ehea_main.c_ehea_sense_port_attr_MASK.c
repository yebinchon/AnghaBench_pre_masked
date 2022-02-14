
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct hcp_ehea_port_cb0 {int port_mac_addr; int port_speed; int num_default_qps; } ;
struct ehea_port {int mac_addr; int full_duplex; int autoneg; int num_mcs; int num_def_qps; void* port_speed; int logical_port_id; TYPE_1__* adapter; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 scalar_t__ VAR_11 ;
 int FUNC_1 (struct hcp_ehea_port_cb0*,int,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,struct hcp_ehea_port_cb0*) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct ehea_port*) ;
 scalar_t__ VAR_12 ;

int FUNC_8(struct ehea_port *VAR_13)
{
 int VAR_14;
 u64 VAR_15;
 struct hcp_ehea_port_cb0 *VAR_16;


 VAR_16 = (void *)FUNC_5(VAR_8);
 if (!VAR_16) {
  FUNC_2("no mem for cb0");
  VAR_14 = -VAR_7;
  goto out;
 }

 VAR_15 = FUNC_3(VAR_13->adapter->handle,
          VAR_13->logical_port_id, VAR_9,
          FUNC_0(VAR_10, 0xFFFF),
          VAR_16);
 if (VAR_15 != VAR_11) {
  VAR_14 = -VAR_6;
  goto out_free;
 }


 VAR_13->mac_addr = VAR_16->port_mac_addr << 16;

 if (!FUNC_6((u8 *)&VAR_13->mac_addr)) {
  VAR_14 = -VAR_0;
  goto out_free;
 }


 switch (VAR_16->port_speed) {
 case 129:
  VAR_13->port_speed = VAR_3;
  VAR_13->full_duplex = 0;
  break;
 case 130:
  VAR_13->port_speed = VAR_3;
  VAR_13->full_duplex = 1;
  break;
 case 132:
  VAR_13->port_speed = VAR_1;
  VAR_13->full_duplex = 0;
  break;
 case 133:
  VAR_13->port_speed = VAR_1;
  VAR_13->full_duplex = 1;
  break;
 case 128:
  VAR_13->port_speed = VAR_4;
  VAR_13->full_duplex = 1;
  break;
 case 131:
  VAR_13->port_speed = VAR_2;
  VAR_13->full_duplex = 1;
  break;
 default:
  VAR_13->port_speed = 0;
  VAR_13->full_duplex = 0;
  break;
 }

 VAR_13->autoneg = 1;
 VAR_13->num_mcs = VAR_16->num_default_qps;


 if (VAR_12)
  VAR_13->num_def_qps = VAR_16->num_default_qps;
 else
  VAR_13->num_def_qps = 1;

 if (!VAR_13->num_def_qps) {
  VAR_14 = -VAR_5;
  goto out_free;
 }

 VAR_14 = 0;
out_free:
 if (VAR_14 || FUNC_7(VAR_13))
  FUNC_1(VAR_16, sizeof(*VAR_16), "ehea_sense_port_attr");
 FUNC_4((unsigned long)VAR_16);
out:
 return VAR_14;
}
