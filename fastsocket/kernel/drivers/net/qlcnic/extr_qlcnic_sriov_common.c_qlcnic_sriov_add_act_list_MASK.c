
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_trans_list {int lock; } ;
struct qlcnic_vf_info {struct qlcnic_trans_list rcv_act; } ;
struct qlcnic_sriov {int dummy; } ;
struct qlcnic_bc_trans {int dummy; } ;


 int FUNC_0 (struct qlcnic_sriov*,struct qlcnic_vf_info*,struct qlcnic_bc_trans*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_sriov *VAR_0,
         struct qlcnic_vf_info *VAR_1,
         struct qlcnic_bc_trans *VAR_2)
{
 struct qlcnic_trans_list *VAR_3 = &VAR_1->rcv_act;

 FUNC_1(&VAR_3->lock);

 FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_2(&VAR_3->lock);
 return 0;
}
