
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int ranksperctlr; } ;



__attribute__((used)) static int FUNC_0(const struct mem_ctl_info *VAR_0, int VAR_1)
{
 const struct i5100_priv *VAR_2 = VAR_0->pvt_info;

 return VAR_1 % VAR_2->ranksperctlr;
}
