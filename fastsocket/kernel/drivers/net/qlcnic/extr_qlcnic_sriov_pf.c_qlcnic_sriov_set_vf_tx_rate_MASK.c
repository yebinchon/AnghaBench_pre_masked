
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_vport {int max_tx_bw; int handle; } ;
struct qlcnic_vf_info {int state; struct qlcnic_vport* vp; } ;
struct qlcnic_sriov {int num_vfs; struct qlcnic_vf_info* vf_info; } ;
struct qlcnic_info {int max_tx_bw; int bit_offsets; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,char*,int ,int ) ;
 int FUNC_1 (struct net_device*,char*,int,int,int) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct net_device *VAR_7, int VAR_8, int VAR_9)
{
 struct qlcnic_adapter *VAR_10 = FUNC_2(VAR_7);
 struct qlcnic_sriov *VAR_11 = VAR_10->ahw->sriov;
 struct qlcnic_vf_info *VAR_12;
 struct qlcnic_info VAR_13;
 struct qlcnic_vport *VAR_14;
 u16 VAR_15;

 if (!FUNC_4(VAR_10))
  return -VAR_3;

 if (VAR_8 >= VAR_11->num_vfs)
  return -VAR_1;

 if (VAR_9 >= 10000 || VAR_9 < 100) {
  FUNC_0(VAR_7,
      "Invalid Tx rate, allowed range is [%d - %d]",
      VAR_6, VAR_5);
  return -VAR_1;
 }

 if (VAR_9 == 0)
  VAR_9 = 10000;

 VAR_12 = &VAR_11->vf_info[VAR_8];
 VAR_14 = VAR_12->vp;
 VAR_15 = VAR_14->handle;

 if (FUNC_6(VAR_4, &VAR_12->state)) {
  if (FUNC_3(VAR_10, &VAR_13, VAR_15))
   return -VAR_2;

  VAR_13.max_tx_bw = VAR_9 / 100;
  VAR_13.bit_offsets = VAR_0;

  if (FUNC_5(VAR_10, &VAR_13, VAR_15))
   return -VAR_2;
 }

 VAR_14->max_tx_bw = VAR_9 / 100;
 FUNC_1(VAR_7,
      "Setting Tx rate %d (Mbps), %d %% of PF bandwidth, for VF %d\n",
      VAR_9, VAR_14->max_tx_bw, VAR_8);
 return 0;
}
