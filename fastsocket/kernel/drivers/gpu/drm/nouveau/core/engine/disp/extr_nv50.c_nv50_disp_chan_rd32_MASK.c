
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct nv50_disp_priv {int dummy; } ;
struct nv50_disp_chan {int chid; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int FUNC_0 (struct nv50_disp_priv*,scalar_t__) ;

u32
FUNC_1(struct nouveau_object *VAR_0, u64 VAR_1)
{
 struct nv50_disp_priv *VAR_2 = (void *)VAR_0->engine;
 struct nv50_disp_chan *VAR_3 = (void *)VAR_0;
 return FUNC_0(VAR_2, 0x640000 + (VAR_3->chid * 0x1000) + VAR_1);
}
