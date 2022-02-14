
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*,int,int ) ;
 int FUNC_5 (struct qlcnic_adapter*,int,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_2)
{
 FUNC_5(VAR_2, 1, 0);
 FUNC_4(VAR_2, 1, 0);

 if (VAR_1) {
  FUNC_3(VAR_2, 0);
 } else {
  if (FUNC_0(VAR_2)) {
   FUNC_1(VAR_2, 0);
   return -VAR_0;
  } else {
   FUNC_2(VAR_2, 0);
  }
 }
 return 0;
}
