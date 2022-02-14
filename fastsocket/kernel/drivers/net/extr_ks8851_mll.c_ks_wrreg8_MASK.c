
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ks_net {int cmd_reg_cache; int hw_addr; int hw_addr_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct ks_net *VAR_1, int VAR_2, u8 VAR_3)
{
 u8 VAR_4 = (VAR_2 & 0x03);
 u16 VAR_5 = (u16)(VAR_3 << ((VAR_2 & 1) << 3));
 VAR_1->cmd_reg_cache = (u16)VAR_2 | (VAR_0 << VAR_4);
 FUNC_0(VAR_1->cmd_reg_cache, VAR_1->hw_addr_cmd);
 FUNC_0(VAR_5, VAR_1->hw_addr);
}
