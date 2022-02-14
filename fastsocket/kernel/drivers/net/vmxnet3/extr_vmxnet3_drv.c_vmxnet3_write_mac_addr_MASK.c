
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vmxnet3_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_adapter *VAR_2, u8 *VAR_3)
{
 u32 VAR_4;

 VAR_4 = *(u32 *)VAR_3;
 FUNC_0(VAR_2, VAR_1, VAR_4);

 VAR_4 = (VAR_3[5] << 8) | VAR_3[4];
 FUNC_0(VAR_2, VAR_0, VAR_4);
}
