
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int fw_work; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_adapter *VAR_1)
{
 while (FUNC_1(VAR_0, &VAR_1->state))
  FUNC_2(10000, 11000);

 FUNC_0(&VAR_1->fw_work);
}
