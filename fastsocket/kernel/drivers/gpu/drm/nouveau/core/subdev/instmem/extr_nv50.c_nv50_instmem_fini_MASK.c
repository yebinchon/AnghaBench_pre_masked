
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_instmem_priv {unsigned long long addr; int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_object *VAR_0, bool VAR_1)
{
 struct nv50_instmem_priv *VAR_2 = (void *)VAR_0;
 VAR_2->addr = ~0ULL;
 return FUNC_0(&VAR_2->base, VAR_1);
}
