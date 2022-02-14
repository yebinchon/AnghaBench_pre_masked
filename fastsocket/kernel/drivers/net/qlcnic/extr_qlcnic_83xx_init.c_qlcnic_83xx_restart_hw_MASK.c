
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int ) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_9(struct qlcnic_adapter *VAR_6)
{
 u32 VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_7(VAR_6);


 VAR_7 = FUNC_0(VAR_6->ahw, VAR_3);
 if (!(VAR_7 & VAR_4))
  FUNC_8(VAR_6);
 FUNC_4(VAR_6);

 if (FUNC_3(VAR_6))
  return VAR_8;

 if (VAR_5) {
  if (FUNC_5(VAR_6))
   return VAR_8;
 } else {
  FUNC_1(VAR_6, VAR_1,
        VAR_2);
 }

 FUNC_6(VAR_6);
 if (FUNC_2(VAR_6))
  return -VAR_0;

 return 0;
}
