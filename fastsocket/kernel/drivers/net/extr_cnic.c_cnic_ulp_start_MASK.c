
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_ulp_ops {int (* cnic_start ) (int ) ;} ;
struct cnic_local {int * ulp_flags; int * ulp_handle; struct cnic_ulp_ops** ulp_ops; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct cnic_dev *VAR_4)
{
 struct cnic_local *VAR_5 = VAR_4->cnic_priv;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct cnic_ulp_ops *VAR_7;

  FUNC_1(&VAR_3);
  VAR_7 = VAR_5->ulp_ops[VAR_6];
  if (!VAR_7 || !VAR_7->cnic_start) {
   FUNC_2(&VAR_3);
   continue;
  }
  FUNC_3(VAR_1, &VAR_5->ulp_flags[VAR_6]);
  FUNC_2(&VAR_3);

  if (!FUNC_5(VAR_2, &VAR_5->ulp_flags[VAR_6]))
   VAR_7->cnic_start(VAR_5->ulp_handle[VAR_6]);

  FUNC_0(VAR_1, &VAR_5->ulp_flags[VAR_6]);
 }
}
