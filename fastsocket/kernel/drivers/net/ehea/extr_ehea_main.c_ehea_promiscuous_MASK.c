
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct hcp_ehea_port_cb7 {int def_uc_qpn; } ;
struct ehea_port {int promisc; int logical_port_id; TYPE_3__* adapter; TYPE_2__* port_res; } ;
struct TYPE_6__ {int handle; } ;
struct TYPE_5__ {TYPE_1__* qp; } ;
struct TYPE_4__ {int fw_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,struct hcp_ehea_port_cb7*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 struct ehea_port* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3, int VAR_4)
{
 struct ehea_port *VAR_5 = FUNC_5(VAR_3);
 struct hcp_ehea_port_cb7 *VAR_6;
 u64 VAR_7;

 if (VAR_4 == VAR_5->promisc)
  return;

 VAR_6 = (void *)FUNC_4(VAR_0);
 if (!VAR_6) {
  FUNC_0("no mem for cb7");
  goto out;
 }


 VAR_6->def_uc_qpn = VAR_4 == 1 ? VAR_5->port_res[0].qp->fw_handle : 0;

 VAR_7 = FUNC_1(VAR_5->adapter->handle,
           VAR_5->logical_port_id,
           VAR_1, VAR_2, VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_7, VAR_4);
  goto out;
 }

 VAR_5->promisc = VAR_4;
out:
 FUNC_3((unsigned long)VAR_6);
 return;
}
