
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct qlcnic_vport {int spoofchk; int mac; int max_tx_bw; } ;
struct TYPE_6__ {int lock; int wait_list; } ;
struct TYPE_5__ {int lock; int wait_list; } ;
struct qlcnic_back_channel {struct workqueue_struct* bc_trans_wq; struct workqueue_struct* bc_async_wq; int async_list; } ;
struct qlcnic_vf_info {int num_vfs; struct qlcnic_vf_info* vf_info; struct qlcnic_vport* vp; int trans_work; int ch_free_cmpl; TYPE_2__ rcv_pend; TYPE_1__ rcv_act; int send_cmd_lock; int pci_func; struct qlcnic_adapter* adapter; struct qlcnic_back_channel bc; } ;
struct qlcnic_sriov {int num_vfs; struct qlcnic_sriov* vf_info; struct qlcnic_vport* vp; int trans_work; int ch_free_cmpl; TYPE_2__ rcv_pend; TYPE_1__ rcv_act; int send_cmd_lock; int pci_func; struct qlcnic_adapter* adapter; struct qlcnic_back_channel bc; } ;
struct qlcnic_adapter {TYPE_4__* ahw; TYPE_3__* pdev; } ;
struct TYPE_8__ {struct qlcnic_vf_info* sriov; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 struct workqueue_struct* FUNC_2 (char*) ;
 int FUNC_3 (struct workqueue_struct*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct qlcnic_vf_info*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_11 (struct qlcnic_adapter*) ;
 int VAR_4 ;
 int FUNC_12 (struct qlcnic_adapter*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct qlcnic_adapter *VAR_5, int VAR_6)
{
 struct qlcnic_sriov *VAR_7;
 struct qlcnic_back_channel *VAR_8;
 struct workqueue_struct *VAR_9;
 struct qlcnic_vport *VAR_10;
 struct qlcnic_vf_info *VAR_11;
 int VAR_12, VAR_13;

 if (!FUNC_10(VAR_5))
  return -VAR_0;

 VAR_7 = FUNC_8(sizeof(struct qlcnic_sriov), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_5->ahw->sriov = VAR_7;
 VAR_7->num_vfs = VAR_6;
 VAR_8 = &VAR_7->bc;
 VAR_7->vf_info = FUNC_8(sizeof(struct qlcnic_vf_info) *
     VAR_6, VAR_2);
 if (!VAR_7->vf_info) {
  VAR_12 = -VAR_1;
  goto qlcnic_free_sriov;
 }

 VAR_9 = FUNC_2("bc-trans");
 if (VAR_9 == ((void*)0)) {
  VAR_12 = -VAR_1;
  FUNC_4(&VAR_5->pdev->dev,
   "Cannot create bc-trans workqueue\n");
  goto qlcnic_free_vf_info;
 }

 VAR_8->bc_trans_wq = VAR_9;

 VAR_9 = FUNC_2("async");
 if (VAR_9 == ((void*)0)) {
  VAR_12 = -VAR_1;
  FUNC_4(&VAR_5->pdev->dev, "Cannot create async workqueue\n");
  goto qlcnic_destroy_trans_wq;
 }

 VAR_8->bc_async_wq = VAR_9;
 FUNC_0(&VAR_8->async_list);

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_11 = &VAR_7->vf_info[VAR_13];
  VAR_11->adapter = VAR_5;
  VAR_11->pci_func = FUNC_12(VAR_5, VAR_13);
  FUNC_9(&VAR_11->send_cmd_lock);
  FUNC_0(&VAR_11->rcv_act.wait_list);
  FUNC_0(&VAR_11->rcv_pend.wait_list);
  FUNC_14(&VAR_11->rcv_act.lock);
  FUNC_14(&VAR_11->rcv_pend.lock);
  FUNC_6(&VAR_11->ch_free_cmpl);

  FUNC_1(&VAR_11->trans_work, VAR_4);

  if (FUNC_11(VAR_5)) {
   VAR_10 = FUNC_8(sizeof(struct qlcnic_vport), VAR_2);
   if (!VAR_10) {
    VAR_12 = -VAR_1;
    goto qlcnic_destroy_async_wq;
   }
   VAR_7->vf_info[VAR_13].vp = VAR_10;
   VAR_10->max_tx_bw = VAR_3;
   VAR_10->spoofchk = 1;
   FUNC_13(VAR_10->mac);
   FUNC_5(&VAR_5->pdev->dev,
     "MAC Address %pM is configured for VF %d\n",
     VAR_10->mac, VAR_13);
  }
 }

 return 0;

qlcnic_destroy_async_wq:
 FUNC_3(VAR_8->bc_async_wq);

qlcnic_destroy_trans_wq:
 FUNC_3(VAR_8->bc_trans_wq);

qlcnic_free_vf_info:
 FUNC_7(VAR_7->vf_info);

qlcnic_free_sriov:
 FUNC_7(VAR_5->ahw->sriov);
 return VAR_12;
}
