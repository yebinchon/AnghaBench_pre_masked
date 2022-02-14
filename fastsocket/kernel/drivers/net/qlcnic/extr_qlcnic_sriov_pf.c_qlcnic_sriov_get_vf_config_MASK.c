
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_vport {int max_tx_bw; int qos; int vlan; int mac; } ;
struct qlcnic_sriov {int num_vfs; TYPE_2__* vf_info; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct ifla_vf_info {int tx_rate; int vf; int qos; int vlan; int mac; } ;
struct TYPE_4__ {struct qlcnic_vport* vp; } ;
struct TYPE_3__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

int FUNC_3(struct net_device *VAR_4,
          int VAR_5, struct ifla_vf_info *VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_1(VAR_4);
 struct qlcnic_sriov *VAR_8 = VAR_7->ahw->sriov;
 struct qlcnic_vport *VAR_9;

 if (!FUNC_2(VAR_7))
  return -VAR_1;

 if (VAR_5 >= VAR_8->num_vfs)
  return -VAR_0;

 VAR_9 = VAR_8->vf_info[VAR_5].vp;
 FUNC_0(&VAR_6->mac, VAR_9->mac, VAR_2);
 VAR_6->vlan = VAR_9->vlan;
 VAR_6->qos = VAR_9->qos;
 if (VAR_9->max_tx_bw == VAR_3)
  VAR_6->tx_rate = 0;
 else
  VAR_6->tx_rate = VAR_9->max_tx_bw * 100;

 VAR_6->vf = VAR_5;
 return 0;
}
