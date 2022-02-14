
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* nic_ops; } ;
struct TYPE_2__ {scalar_t__ (* init_driver ) (struct qlcnic_adapter*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*,int) ;
 int FUNC_4 (struct qlcnic_adapter*,int) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_7(struct qlcnic_adapter *VAR_1)
{
 int VAR_2;


 FUNC_4(VAR_1, 1);

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1);

 if (FUNC_0(VAR_1)) {
  FUNC_3(VAR_1, 1);
  return -VAR_0;
 }

 if (VAR_1->nic_ops->init_driver(VAR_1)) {
  FUNC_3(VAR_1, 1);
  return -VAR_0;
 }

 FUNC_2(VAR_1);

 return 0;
}
