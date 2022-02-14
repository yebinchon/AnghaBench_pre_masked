
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vblank; } ;
struct nv50_disp_priv {int super; int supervisor; TYPE_1__ base; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nv50_disp_priv*) ;
 int FUNC_2 (struct nv50_disp_priv*,int) ;
 int FUNC_3 (struct nv50_disp_priv*,int,int) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct nouveau_subdev *VAR_0)
{
 struct nv50_disp_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2 = FUNC_2(VAR_1, 0x610020);
 u32 VAR_3 = FUNC_2(VAR_1, 0x610024);

 if (VAR_2 & 0x001f0000) {
  FUNC_1(VAR_1);
  VAR_2 &= ~0x001f0000;
 }

 if (VAR_3 & 0x00000004) {
  FUNC_0(VAR_1->base.vblank, 0);
  FUNC_3(VAR_1, 0x610024, 0x00000004);
  VAR_3 &= ~0x00000004;
 }

 if (VAR_3 & 0x00000008) {
  FUNC_0(VAR_1->base.vblank, 1);
  FUNC_3(VAR_1, 0x610024, 0x00000008);
  VAR_3 &= ~0x00000008;
 }

 if (VAR_3 & 0x00000070) {
  VAR_1->super = (VAR_3 & 0x00000070);
  FUNC_4(&VAR_1->supervisor);
  FUNC_3(VAR_1, 0x610024, VAR_1->super);
  VAR_3 &= ~0x00000070;
 }
}
