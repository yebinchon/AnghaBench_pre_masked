
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct completion {int dummy; } ;
struct qlcnic_vf_info {int state; struct completion ch_free_cmpl; } ;
struct qlcnic_bc_trans {int trans_state; struct qlcnic_vf_info* vf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct qlcnic_bc_trans*,int ) ;
 int FUNC_2 (struct completion*,int ) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_bc_trans *VAR_3,
            u8 VAR_4)
{
 struct qlcnic_vf_info *VAR_5 = VAR_3->vf;
 struct completion *VAR_6 = &VAR_5->ch_free_cmpl;

 if (!FUNC_2(VAR_6, VAR_2)) {
  VAR_3->trans_state = VAR_0;
  return;
 }

 FUNC_0(VAR_1, &VAR_5->state);
 FUNC_1(VAR_3, VAR_4);
}
