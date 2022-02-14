
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_hardware_context {int mbx_lock; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct qlcnic_hardware_context*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;
 u32 VAR_5, VAR_6;
 unsigned long VAR_7;

 FUNC_4(&VAR_4->mbx_lock, VAR_7);

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5 & VAR_2) {
  VAR_6 = FUNC_3(FUNC_0(VAR_4, 0));
  if (VAR_6 & VAR_1)
   FUNC_2(VAR_3);
 }

 FUNC_5(&VAR_4->mbx_lock, VAR_7);
}
