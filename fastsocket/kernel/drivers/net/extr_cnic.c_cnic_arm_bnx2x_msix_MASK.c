
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cnic_local {int bnx2x_igu_sb_id; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cnic_dev*,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct cnic_dev *VAR_2, u32 VAR_3)
{
 struct cnic_local *VAR_4 = VAR_2->cnic_priv;

 FUNC_0(VAR_2, VAR_4->bnx2x_igu_sb_id, VAR_0, VAR_3,
      VAR_1, 1);
}
