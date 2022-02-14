
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef int u32 ;
struct kwqe {int dummy; } ;
struct fcoe_kwqe_destroy {int dummy; } ;
struct cnic_local {int fcoe_init_cid; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
typedef int l5_data ;


 int FUNC_0 (struct cnic_local*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cnic_dev*,int ) ;
 int FUNC_2 (struct cnic_dev*,int ,int ,int ,union l5cm_specific_data*) ;
 int FUNC_3 (union l5cm_specific_data*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct cnic_dev *VAR_3, struct kwqe *VAR_4)
{
 struct fcoe_kwqe_destroy *VAR_5;
 union l5cm_specific_data VAR_6;
 struct cnic_local *VAR_7 = VAR_3->cnic_priv;
 int VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_3, VAR_2);

 VAR_5 = (struct fcoe_kwqe_destroy *) VAR_4;
 VAR_9 = FUNC_0(VAR_7, VAR_7->fcoe_init_cid);

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_8 = FUNC_2(VAR_3, VAR_1, VAR_9,
      VAR_0, &VAR_6);
 return VAR_8;
}
