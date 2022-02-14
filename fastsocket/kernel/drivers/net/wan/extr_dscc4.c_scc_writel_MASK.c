
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct dscc4_dev_priv {scalar_t__ base_addr; int * scc_regs; } ;


 scalar_t__ FUNC_0 (struct dscc4_dev_priv*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(u32 VAR_0, struct dscc4_dev_priv *VAR_1,
         struct net_device *VAR_2, int VAR_3)
{




 VAR_1->scc_regs[VAR_3 >> 2] = VAR_0;
 FUNC_1(VAR_0, VAR_1->base_addr + FUNC_0(VAR_1) + VAR_3);
}
