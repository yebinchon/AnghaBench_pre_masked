
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_disp_priv {int dummy; } ;
struct nv50_disp_dmac {int base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nv50_disp_dmac*,char*,int ) ;
 int FUNC_2 (struct nv50_disp_priv*,int,int,int) ;
 int FUNC_3 (struct nv50_disp_priv*,int) ;
 int FUNC_4 (struct nv50_disp_priv*,int,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_1, bool VAR_2)
{
 struct nv50_disp_priv *VAR_3 = (void *)VAR_1->engine;
 struct nv50_disp_dmac *VAR_4 = (void *)VAR_1;


 FUNC_2(VAR_3, 0x610490, 0x00000010, 0x00000000);
 FUNC_2(VAR_3, 0x610490, 0x00000003, 0x00000000);
 if (!FUNC_4(VAR_3, 0x610490, 0x001e0000, 0x00000000)) {
  FUNC_1(VAR_4, "fini: 0x%08x\n", FUNC_3(VAR_3, 0x610490));
  if (VAR_2)
   return -VAR_0;
 }


 FUNC_2(VAR_3, 0x610090, 0x00000001, 0x00000000);
 FUNC_2(VAR_3, 0x6100a0, 0x00000001, 0x00000000);

 return FUNC_0(&VAR_4->base, VAR_2);
}
