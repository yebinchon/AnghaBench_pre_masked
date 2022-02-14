
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct qlcnic_vport {int* mac; } ;
struct qlcnic_macvlan_mbx {int mac_addr0; int mac_addr1; int mac_addr2; int mac_addr3; int mac_addr4; int mac_addr5; scalar_t__ vlan; } ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (int*,struct qlcnic_macvlan_mbx*,int) ;
 scalar_t__ FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_5 (struct qlcnic_adapter*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_7,
           struct qlcnic_vport *VAR_8,
           u16 VAR_9, u16 VAR_10, u8 VAR_11)
{
 struct qlcnic_cmd_args VAR_12;
 struct qlcnic_macvlan_mbx VAR_13;
 u8 *VAR_14;
 int VAR_15;
 u32 *VAR_16;
 int VAR_17;

 if (FUNC_2(&VAR_12, VAR_7, VAR_3))
  return -VAR_2;

 VAR_17 = FUNC_5(VAR_7, VAR_9);
 if (VAR_17 < 0) {
  VAR_15 = -VAR_1;
  goto out;
 }

 if (VAR_10)
  VAR_11 = ((VAR_11 == VAR_4 || VAR_11 == VAR_5) ?
        VAR_5 : VAR_6);

 VAR_12.req.arg[1] = VAR_11 | (1 << 8) | (3 << 6);
 VAR_12.req.arg[1] |= ((VAR_17 & 0xffff) << 16) | VAR_0;

 VAR_14 = VAR_8->mac;
 VAR_13.vlan = VAR_10;
 VAR_13.mac_addr0 = VAR_14[0];
 VAR_13.mac_addr1 = VAR_14[1];
 VAR_13.mac_addr2 = VAR_14[2];
 VAR_13.mac_addr3 = VAR_14[3];
 VAR_13.mac_addr4 = VAR_14[4];
 VAR_13.mac_addr5 = VAR_14[5];
 VAR_16 = &VAR_12.req.arg[2];
 FUNC_1(VAR_16, &VAR_13, sizeof(struct qlcnic_macvlan_mbx));

 VAR_15 = FUNC_4(VAR_7, &VAR_12);

 if (VAR_15)
  FUNC_0(&VAR_7->pdev->dev,
   "MAC-VLAN %s to CAM failed, err=%d.\n",
   ((VAR_11 == 1) ? "add " : "delete "), VAR_15);

out:
 FUNC_3(&VAR_12);
 return VAR_15;
}
