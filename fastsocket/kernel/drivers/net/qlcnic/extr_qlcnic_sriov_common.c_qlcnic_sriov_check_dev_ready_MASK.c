
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qlcnic_adapter {scalar_t__ fw_fail_cnt; int ahw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_4)
{
 u32 VAR_5;

 do {
  FUNC_1(20);
  if (++VAR_4->fw_fail_cnt > VAR_3)
   return -VAR_0;
  VAR_5 = FUNC_0(VAR_4->ahw, VAR_2);
 } while (VAR_5 != VAR_1);

 return 0;
}
