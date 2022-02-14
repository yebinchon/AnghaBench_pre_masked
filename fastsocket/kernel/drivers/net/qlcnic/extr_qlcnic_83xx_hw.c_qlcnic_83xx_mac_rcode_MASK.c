
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qlcnic_adapter {int ahw; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;

u32 FUNC_2(struct qlcnic_adapter *VAR_4)
{
 u32 VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_1(FUNC_0(VAR_4->ahw, 2));
 VAR_6 = (u8)VAR_5;
 if (VAR_6 == VAR_3 ||
     VAR_6 == VAR_2 ||
     VAR_6 == VAR_1)
  return VAR_0;
 return 1;
}
