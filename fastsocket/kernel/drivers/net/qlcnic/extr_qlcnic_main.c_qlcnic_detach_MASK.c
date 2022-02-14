
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {scalar_t__ is_up; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;

void FUNC_6(struct qlcnic_adapter *VAR_1)
{
 if (VAR_1->is_up != VAR_0)
  return;

 FUNC_5(VAR_1);

 FUNC_0(VAR_1);
 FUNC_4(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 VAR_1->is_up = 0;
}
