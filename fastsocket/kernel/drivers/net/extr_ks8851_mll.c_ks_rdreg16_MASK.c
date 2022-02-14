
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ks_net {int cmd_reg_cache; int hw_addr; int hw_addr_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static u16 FUNC_2(struct ks_net *VAR_2, int VAR_3)
{
 VAR_2->cmd_reg_cache = (u16)VAR_3 | ((VAR_1 | VAR_0) << (VAR_3 & 0x02));
 FUNC_1(VAR_2->cmd_reg_cache, VAR_2->hw_addr_cmd);
 return FUNC_0(VAR_2->hw_addr);
}
