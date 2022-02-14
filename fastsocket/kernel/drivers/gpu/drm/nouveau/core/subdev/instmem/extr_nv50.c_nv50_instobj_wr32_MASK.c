
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


 int FUNC_0 (struct nv50_instmem_priv*,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_object *VAR_0, u64 VAR_1, u32 VAR_2)
{
 struct nv50_instmem_priv *VAR_3 = (void *)VAR_0->engine;
 struct nv50_instobj_priv *VAR_4 = (void *)VAR_0;
 unsigned long VAR_5;
 u64 VAR_6 = (VAR_4->mem->offset + VAR_1) & 0xffffff00000ULL;
 u64 VAR_7 = (VAR_4->mem->offset + VAR_1) & 0x000000fffffULL;

 FUNC_1(&VAR_3->lock, VAR_5);
 if (FUNC_3(VAR_3->addr != VAR_6)) {
  FUNC_0(VAR_3, 0x001700, VAR_6 >> 16);
  VAR_3->addr = VAR_6;
 }
 FUNC_0(VAR_3, 0x700000 + VAR_7, VAR_2);
 FUNC_2(&VAR_3->lock, VAR_5);
}
