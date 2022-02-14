
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nv50_instobj_priv {TYPE_1__* mem; } ;
struct nv50_instmem_priv {int addr; int lock; } ;
struct nouveau_object {scalar_t__ engine; } ;
struct TYPE_2__ {int offset; } ;


 int FUNC_0 (struct nv50_instmem_priv*,int) ;
 int FUNC_1 (struct nv50_instmem_priv*,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static u32
FUNC_5(struct nouveau_object *VAR_0, u64 VAR_1)
{
 struct nv50_instmem_priv *VAR_2 = (void *)VAR_0->engine;
 struct nv50_instobj_priv *VAR_3 = (void *)VAR_0;
 unsigned long VAR_4;
 u64 VAR_5 = (VAR_3->mem->offset + VAR_1) & 0xffffff00000ULL;
 u64 VAR_6 = (VAR_3->mem->offset + VAR_1) & 0x000000fffffULL;
 u32 VAR_7;

 FUNC_2(&VAR_2->lock, VAR_4);
 if (FUNC_4(VAR_2->addr != VAR_5)) {
  FUNC_1(VAR_2, 0x001700, VAR_5 >> 16);
  VAR_2->addr = VAR_5;
 }
 VAR_7 = FUNC_0(VAR_2, 0x700000 + VAR_6);
 FUNC_3(&VAR_2->lock, VAR_4);
 return VAR_7;
}
