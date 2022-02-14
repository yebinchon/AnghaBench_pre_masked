
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct qlcnic_macvlan_mbx {int mac_addr0; int mac_addr1; int mac_addr2; int mac_addr3; int mac_addr4; int mac_addr5; scalar_t__ vlan; } ;
struct TYPE_5__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {TYPE_3__* pdev; TYPE_1__* recv_ctx; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (int*,struct qlcnic_macvlan_mbx*,int) ;
 int FUNC_2 (struct qlcnic_adapter*,int*) ;
 int FUNC_3 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_cmd_args*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_6(struct qlcnic_adapter *VAR_6, u8 *VAR_7,
       u16 VAR_8, u8 VAR_9)
{
 int VAR_10;
 u32 *VAR_11, VAR_12 = 0;
 struct qlcnic_cmd_args VAR_13;
 struct qlcnic_macvlan_mbx VAR_14;

 if (VAR_6->recv_ctx->state == VAR_2)
  return -VAR_0;

 VAR_10 = FUNC_3(&VAR_13, VAR_6, VAR_1);
 if (VAR_10)
  return VAR_10;

 if (VAR_8)
  VAR_9 = (VAR_9 == VAR_3 || VAR_9 == VAR_4) ?
       VAR_4 : VAR_5;

 VAR_13.req.arg[1] = VAR_9 | (1 << 8);
 FUNC_2(VAR_6, &VAR_12);
 VAR_13.req.arg[1] |= VAR_12;
 VAR_14.vlan = VAR_8;
 VAR_14.mac_addr0 = VAR_7[0];
 VAR_14.mac_addr1 = VAR_7[1];
 VAR_14.mac_addr2 = VAR_7[2];
 VAR_14.mac_addr3 = VAR_7[3];
 VAR_14.mac_addr4 = VAR_7[4];
 VAR_14.mac_addr5 = VAR_7[5];
 VAR_11 = &VAR_13.req.arg[2];
 FUNC_1(VAR_11, &VAR_14, sizeof(struct qlcnic_macvlan_mbx));
 VAR_10 = FUNC_5(VAR_6, &VAR_13);
 if (VAR_10)
  FUNC_0(&VAR_6->pdev->dev,
   "MAC-VLAN %s to CAM failed, err=%d.\n",
   ((VAR_9 == 1) ? "add " : "delete "), VAR_10);
 FUNC_4(&VAR_13);
 return VAR_10;
}
