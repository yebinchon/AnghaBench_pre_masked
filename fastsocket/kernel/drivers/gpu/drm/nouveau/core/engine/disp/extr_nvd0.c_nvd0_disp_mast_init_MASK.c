
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_disp_priv {int dummy; } ;
struct nv50_disp_dmac {int push; int base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv50_disp_dmac*,char*,int ) ;
 int FUNC_2 (struct nv50_disp_priv*,int,int,int) ;
 int FUNC_3 (struct nv50_disp_priv*,int) ;
 int FUNC_4 (struct nv50_disp_priv*,int,int,int) ;
 int FUNC_5 (struct nv50_disp_priv*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_1)
{
 struct nv50_disp_priv *VAR_2 = (void *)VAR_1->engine;
 struct nv50_disp_dmac *VAR_3 = (void *)VAR_1;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->base);
 if (VAR_4)
  return VAR_4;


 FUNC_2(VAR_2, 0x610090, 0x00000001, 0x00000001);
 FUNC_2(VAR_2, 0x6100a0, 0x00000001, 0x00000001);


 FUNC_5(VAR_2, 0x610494, VAR_3->push);
 FUNC_5(VAR_2, 0x610498, 0x00010000);
 FUNC_5(VAR_2, 0x61049c, 0x00000001);
 FUNC_2(VAR_2, 0x610490, 0x00000010, 0x00000010);
 FUNC_5(VAR_2, 0x640000, 0x00000000);
 FUNC_5(VAR_2, 0x610490, 0x01000013);


 if (!FUNC_4(VAR_2, 0x610490, 0x80000000, 0x00000000)) {
  FUNC_1(VAR_3, "init: 0x%08x\n", FUNC_3(VAR_2, 0x610490));
  return -VAR_0;
 }

 return 0;
}
