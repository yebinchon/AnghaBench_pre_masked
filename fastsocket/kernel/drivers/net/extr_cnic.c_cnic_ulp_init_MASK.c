
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_ulp_ops {int (* cnic_init ) (struct cnic_dev*) ;} ;
struct cnic_local {int * ulp_flags; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cnic_ulp_ops** VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cnic_dev*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct cnic_ulp_ops*) ;
 int FUNC_5 (struct cnic_ulp_ops*) ;

__attribute__((used)) static void FUNC_6(struct cnic_dev *VAR_4)
{
 int VAR_5;
 struct cnic_local *VAR_6 = VAR_4->cnic_priv;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct cnic_ulp_ops *VAR_7;

  FUNC_0(&VAR_2);
  VAR_7 = VAR_3[VAR_5];
  if (!VAR_7 || !VAR_7->cnic_init) {
   FUNC_1(&VAR_2);
   continue;
  }
  FUNC_4(VAR_7);
  FUNC_1(&VAR_2);

  if (!FUNC_3(VAR_1, &VAR_6->ulp_flags[VAR_5]))
   VAR_7->cnic_init(VAR_4);

  FUNC_5(VAR_7);
 }
}
