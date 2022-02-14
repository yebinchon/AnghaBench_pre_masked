
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_6, VAR_1,
         VAR_3);
 FUNC_2(VAR_6, VAR_2,
         VAR_5);
 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6, VAR_4);
 return VAR_7 & 0xFF;
}
