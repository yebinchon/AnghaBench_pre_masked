
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qlcnic_hardware_context {int dummy; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 int FUNC_1 (int) ;

u32 FUNC_2(struct qlcnic_adapter *VAR_3, u32 *VAR_4)
{
 u32 VAR_5;
 struct qlcnic_hardware_context *VAR_6 = VAR_3->ahw;

 do {
  VAR_5 = FUNC_0(VAR_6, VAR_0);
  if (++(*VAR_4) > VAR_1) {
   VAR_5 = VAR_2;
   break;
  }
  FUNC_1(1);
 } while (!VAR_5);
 return VAR_5;
}
