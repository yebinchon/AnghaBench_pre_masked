
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kcqe {int dummy; } ;
struct cnic_ulp_ops {int (* indicate_kcqes ) (int ,struct kcqe**,int ) ;} ;
struct cnic_local {int * ulp_handle; int * ulp_ops; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 scalar_t__ FUNC_0 (struct cnic_ulp_ops*) ;
 struct cnic_ulp_ops* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,struct kcqe**,int ) ;

__attribute__((used)) static void FUNC_5(struct cnic_dev *VAR_0, int VAR_1,
       struct kcqe *VAR_2[], u32 VAR_3)
{
 struct cnic_local *VAR_4 = VAR_0->cnic_priv;
 struct cnic_ulp_ops *VAR_5;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_4->ulp_ops[VAR_1]);
 if (FUNC_0(VAR_5)) {
  VAR_5->indicate_kcqes(VAR_4->ulp_handle[VAR_1],
       VAR_2, VAR_3);
 }
 FUNC_3();
}
