
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qlcnic_trans_list {scalar_t__ count; int lock; } ;
struct qlcnic_vf_info {int state; int * send_cmd; struct qlcnic_trans_list rcv_act; } ;
struct qlcnic_bc_trans {int list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_vf_info *VAR_3,
        struct qlcnic_bc_trans *VAR_4, u8 VAR_5)
{
 struct qlcnic_trans_list *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (VAR_5 == VAR_1) {
  VAR_6 = &VAR_3->rcv_act;
  FUNC_3(&VAR_6->lock, VAR_7);
  VAR_6->count--;
  FUNC_1(&VAR_4->list);
  if (VAR_6->count > 0)
   VAR_8 = 1;
  FUNC_4(&VAR_6->lock, VAR_7);
 }
 if (VAR_5 == VAR_0) {
  while (FUNC_5(VAR_2, &VAR_3->state))
   FUNC_2(100);
  VAR_3->send_cmd = ((void*)0);
  FUNC_0(VAR_2, &VAR_3->state);
 }
 return VAR_8;
}
