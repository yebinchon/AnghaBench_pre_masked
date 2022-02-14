
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dscc4_dev_priv {int * scc_regs; } ;



__attribute__((used)) static inline u32 FUNC_0(struct dscc4_dev_priv *VAR_0, int VAR_1)
{
 return VAR_0->scc_regs[VAR_1 >> 2];
}
