
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv50_disp_priv {int dummy; } ;
struct TYPE_2__ {int chid; } ;
struct nv50_disp_pioc {TYPE_1__ base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct nv50_disp_pioc*,char*,int ) ;
 int FUNC_2 (struct nv50_disp_priv*,int,int,int) ;
 int FUNC_3 (struct nv50_disp_priv*,int) ;
 int FUNC_4 (struct nv50_disp_priv*,int,int,int) ;
 int FUNC_5 (struct nv50_disp_priv*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_1)
{
 struct nv50_disp_priv *VAR_2 = (void *)VAR_1->engine;
 struct nv50_disp_pioc *VAR_3 = (void *)VAR_1;
 int VAR_4 = VAR_3->base.chid;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_3->base);
 if (VAR_5)
  return VAR_5;


 FUNC_2(VAR_2, 0x610090, 0x00000001 << VAR_4, 0x00000001 << VAR_4);
 FUNC_2(VAR_2, 0x6100a0, 0x00000001 << VAR_4, 0x00000001 << VAR_4);


 FUNC_5(VAR_2, 0x610490 + (VAR_4 * 0x10), 0x00000001);
 if (!FUNC_4(VAR_2, 0x610490 + (VAR_4 * 0x10), 0x00030000, 0x00010000)) {
  FUNC_1(VAR_3, "init: 0x%08x\n",
    FUNC_3(VAR_2, 0x610490 + (VAR_4 * 0x10)));
  return -VAR_0;
 }

 return 0;
}
