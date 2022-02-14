
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qlcnic_hardware_context {int dummy; } ;
struct qlcnic_bc_hdr {int dummy; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int FUNC_0 (struct qlcnic_hardware_context*,int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_0,
         u32 *VAR_1, u32 *VAR_2, u32 VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_0->ahw;
 u32 VAR_5;
 u8 VAR_6, VAR_7 = 2, VAR_8, VAR_9;

 VAR_8 = (sizeof(struct qlcnic_bc_hdr) / sizeof(u32));
 VAR_7 = (VAR_3 / sizeof(u32)) + VAR_8;

 VAR_5 = FUNC_1(FUNC_0(VAR_4, 0));
 for (VAR_6 = 2, VAR_9 = 0; VAR_9 < VAR_8; VAR_6++, VAR_9++)
  *(VAR_1++) = FUNC_1(FUNC_0(VAR_4, VAR_6));
 for (; VAR_9 < VAR_7; VAR_6++, VAR_9++)
  *(VAR_2++) = FUNC_1(FUNC_0(VAR_4, VAR_6));
}
