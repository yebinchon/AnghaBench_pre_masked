
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv04_graph_priv {int dummy; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int FUNC_0 (struct nv04_graph_priv*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_object *VAR_0, u32 VAR_1,
         void *VAR_2, u32 VAR_3)
{
 struct nv04_graph_priv *VAR_4 = (void *)VAR_0->engine;
 u32 VAR_5 = *(u32 *)VAR_2;
 u32 VAR_6 = VAR_5 & 0xffff, VAR_7;
 u32 VAR_8 = VAR_5 >> 16;
 if (VAR_6 & 0x8000)

  return 1;
 if (VAR_8 & 0x8000)

  VAR_8 |= 0xffff0000;
 VAR_7 = VAR_6 + VAR_8;
 VAR_7 &= 0x3ffff;
 FUNC_0(VAR_4, 0x40053c, VAR_6);
 FUNC_0(VAR_4, 0x400544, VAR_7);
 return 0;
}
