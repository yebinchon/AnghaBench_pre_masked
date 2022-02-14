
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

int FUNC_3(struct qlcnic_adapter *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 == -VAR_0)
  return -VAR_0;

 if (VAR_4 == VAR_2) {
  if (FUNC_1(VAR_3))
   return -VAR_0;
 } else if (VAR_4 == VAR_1) {
  if (FUNC_0(VAR_3))
   return -VAR_0;
 }

 return 0;
}
