
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int flash_mfg_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int ,int ) ;

int FUNC_5(struct qlcnic_adapter *VAR_6)
{
 int VAR_7, VAR_8;

 if (FUNC_0(VAR_6))
  return -VAR_0;

 FUNC_4(VAR_6, VAR_1,
         VAR_3);
 FUNC_4(VAR_6, VAR_2,
         VAR_5);
 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_6);
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_6, VAR_4);
 if (VAR_8 == -VAR_0)
  return -VAR_0;

 VAR_6->flash_mfg_id = (VAR_8 & 0xFF);
 FUNC_3(VAR_6);

 return 0;
}
