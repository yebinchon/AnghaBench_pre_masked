
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vblank; } ;
struct nv04_disp_priv {TYPE_1__ base; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nv04_disp_priv*,int) ;
 int FUNC_2 (struct nv04_disp_priv*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_subdev *VAR_0)
{
 struct nv04_disp_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2 = FUNC_1(VAR_1, 0x600100);
 u32 VAR_3 = FUNC_1(VAR_1, 0x602100);

 if (VAR_2 & 0x00000001) {
  FUNC_0(VAR_1->base.vblank, 0);
  FUNC_2(VAR_1, 0x600100, 0x00000001);
 }

 if (VAR_3 & 0x00000001) {
  FUNC_0(VAR_1->base.vblank, 1);
  FUNC_2(VAR_1, 0x602100, 0x00000001);
 }
}
