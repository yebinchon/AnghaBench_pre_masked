
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_ulp_ops {int (* cnic_get_stats ) (int ) ;} ;
struct cnic_local {int * ulp_handle; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cnic_ulp_ops** VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct cnic_dev *VAR_3, int VAR_4)
{
 struct cnic_local *VAR_5 = VAR_3->cnic_priv;
 struct cnic_ulp_ops *VAR_6;
 int VAR_7;

 FUNC_0(&VAR_1);
 VAR_6 = VAR_2[VAR_4];
 if (VAR_6 && VAR_6->cnic_get_stats)
  VAR_7 = VAR_6->cnic_get_stats(VAR_5->ulp_handle[VAR_4]);
 else
  VAR_7 = -VAR_0;
 FUNC_1(&VAR_1);
 return VAR_7;
}
