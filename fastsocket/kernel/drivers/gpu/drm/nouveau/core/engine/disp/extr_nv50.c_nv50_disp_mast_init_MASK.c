
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_disp_priv {int dummy; } ;
struct nv50_disp_dmac {int push; int base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv50_disp_dmac*,char*,int) ;
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


 FUNC_2(VAR_2, 0x610028, 0x00010001, 0x00010001);


 if ((FUNC_3(VAR_2, 0x610200) & 0x009f0000) == 0x00020000)
  FUNC_2(VAR_2, 0x610200, 0x00800000, 0x00800000);
 if ((FUNC_3(VAR_2, 0x610200) & 0x003f0000) == 0x00030000)
  FUNC_2(VAR_2, 0x610200, 0x00600000, 0x00600000);


 FUNC_5(VAR_2, 0x610204, VAR_3->push);
 FUNC_5(VAR_2, 0x610208, 0x00010000);
 FUNC_5(VAR_2, 0x61020c, 0x00000000);
 FUNC_2(VAR_2, 0x610200, 0x00000010, 0x00000010);
 FUNC_5(VAR_2, 0x640000, 0x00000000);
 FUNC_5(VAR_2, 0x610200, 0x01000013);


 if (!FUNC_4(VAR_2, 0x610200, 0x80000000, 0x00000000)) {
  FUNC_1(VAR_3, "init: 0x%08x\n", FUNC_3(VAR_2, 0x610200));
  return -VAR_0;
 }

 return 0;
}
