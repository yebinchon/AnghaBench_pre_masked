
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_net {int hw_addr_cmd; int cmd_reg_cache; int cmd_reg_cache_int; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ks_net *VAR_0)
{
 VAR_0->cmd_reg_cache = VAR_0->cmd_reg_cache_int;
 FUNC_0(VAR_0->cmd_reg_cache, VAR_0->hw_addr_cmd);
}
