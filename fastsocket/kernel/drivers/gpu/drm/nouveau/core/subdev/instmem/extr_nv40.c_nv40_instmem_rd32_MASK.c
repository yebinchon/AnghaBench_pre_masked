
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct nv04_instmem_priv {scalar_t__ iomem; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32
FUNC_1(struct nouveau_object *VAR_0, u64 VAR_1)
{
 struct nv04_instmem_priv *VAR_2 = (void *)VAR_0;
 return FUNC_0(VAR_2->iomem + VAR_1);
}
