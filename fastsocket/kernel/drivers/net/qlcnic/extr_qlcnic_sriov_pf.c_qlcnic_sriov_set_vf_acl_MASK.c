
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_vport {int spoofchk; int* mac; scalar_t__ vlan_mode; int vlan; } ;
struct TYPE_9__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_4__ req; } ;
struct qlcnic_adapter {TYPE_5__* pdev; TYPE_3__* ahw; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {TYPE_2__* sriov; } ;
struct TYPE_7__ {TYPE_1__* vf_info; } ;
struct TYPE_6__ {struct qlcnic_vport* vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,int) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_6, u8 VAR_7)
{
 struct qlcnic_cmd_args VAR_8;
 struct qlcnic_vport *VAR_9;
 int VAR_10, VAR_11;
 u8 *VAR_12;

 VAR_11 = FUNC_4(VAR_6, VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9 = VAR_6->ahw->sriov->vf_info[VAR_11].vp;
 VAR_10 = FUNC_1(&VAR_8, VAR_6, VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_8.req.arg[1] = 0x3 | VAR_7 << 16;
 if (VAR_9->spoofchk == 1) {
  VAR_12 = VAR_9->mac;
  VAR_8.req.arg[2] |= VAR_0 | VAR_1 | VAR_3;
  VAR_8.req.arg[4] = VAR_12[5] | VAR_12[4] << 8 | VAR_12[3] << 16 |
     VAR_12[2] << 24;
  VAR_8.req.arg[5] = VAR_12[1] | VAR_12[0] << 8;
 }

 if (VAR_9->vlan_mode == VAR_5) {
  VAR_8.req.arg[2] |= VAR_2;
  VAR_8.req.arg[3] |= VAR_9->vlan << 8;
 }

 VAR_10 = FUNC_3(VAR_6, &VAR_8);
 if (VAR_10)
  FUNC_0(&VAR_6->pdev->dev, "Failed to set ACL, err=%d\n",
   VAR_10);

 FUNC_2(&VAR_8);
 return VAR_10;
}
