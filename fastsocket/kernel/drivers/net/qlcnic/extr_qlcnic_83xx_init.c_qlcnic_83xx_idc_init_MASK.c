
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int ,int) ;
 int FUNC_5 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_1)
{
 int VAR_2 = -VAR_0;

 FUNC_5(VAR_1);

 if (FUNC_0(VAR_1))
  return VAR_2;

 if (!FUNC_1(VAR_1)) {
  if (FUNC_3(VAR_1))
   return -VAR_0;
 } else {
  if (FUNC_2(VAR_1))
   return -VAR_0;
 }

 FUNC_4(VAR_1, 0, 1);

 return 0;
}
