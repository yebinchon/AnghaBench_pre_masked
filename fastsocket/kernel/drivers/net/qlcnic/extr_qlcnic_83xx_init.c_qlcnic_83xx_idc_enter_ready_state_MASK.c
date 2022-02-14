
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int ahw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_3,
          int VAR_4)
{
 if (VAR_4) {
  if (FUNC_1(VAR_3))
   return -VAR_0;
 }

 FUNC_0(VAR_3->ahw, VAR_2, VAR_1);
 if (VAR_4)
  FUNC_2(VAR_3);

 return 0;
}
