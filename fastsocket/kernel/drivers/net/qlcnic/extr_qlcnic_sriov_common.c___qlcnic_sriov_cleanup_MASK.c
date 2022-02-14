
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_back_channel {int bc_trans_wq; int bc_async_wq; } ;
struct qlcnic_vf_info {int num_vfs; struct qlcnic_vf_info* vf_info; struct qlcnic_vf_info* vp; int rcv_act; int trans_work; int rcv_pend; struct qlcnic_back_channel bc; } ;
struct qlcnic_sriov {int num_vfs; struct qlcnic_sriov* vf_info; struct qlcnic_sriov* vp; int rcv_act; int trans_work; int rcv_pend; struct qlcnic_back_channel bc; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {struct qlcnic_vf_info* sriov; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qlcnic_vf_info*) ;
 int FUNC_3 (struct qlcnic_back_channel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qlcnic_adapter*) ;

void FUNC_6(struct qlcnic_adapter *VAR_0)
{
 struct qlcnic_sriov *VAR_1 = VAR_0->ahw->sriov;
 struct qlcnic_back_channel *VAR_2 = &VAR_1->bc;
 struct qlcnic_vf_info *VAR_3;
 int VAR_4;

 if (!FUNC_5(VAR_0))
  return;

 FUNC_3(VAR_2);
 FUNC_1(VAR_2->bc_async_wq);

 for (VAR_4 = 0; VAR_4 < VAR_1->num_vfs; VAR_4++) {
  VAR_3 = &VAR_1->vf_info[VAR_4];
  FUNC_4(&VAR_3->rcv_pend);
  FUNC_0(&VAR_3->trans_work);
  FUNC_4(&VAR_3->rcv_act);
 }

 FUNC_1(VAR_2->bc_trans_wq);

 for (VAR_4 = 0; VAR_4 < VAR_1->num_vfs; VAR_4++)
  FUNC_2(VAR_1->vf_info[VAR_4].vp);

 FUNC_2(VAR_1->vf_info);
 FUNC_2(VAR_0->ahw->sriov);
}
