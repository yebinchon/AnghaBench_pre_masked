
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int vblank; } ;
struct TYPE_3__ {int nr; } ;
struct nv50_disp_priv {int super; TYPE_2__ base; TYPE_1__ head; int supervisor; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct nv50_disp_priv*,char*,int,int,int,int,int) ;
 int FUNC_3 (struct nv50_disp_priv*,char*,int) ;
 int FUNC_4 (struct nv50_disp_priv*,int,int ,int ) ;
 int FUNC_5 (struct nv50_disp_priv*,int) ;
 int FUNC_6 (struct nv50_disp_priv*,int,int) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct nouveau_subdev *VAR_0)
{
 struct nv50_disp_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2 = FUNC_5(VAR_1, 0x610088);
 int VAR_3;

 if (VAR_2 & 0x00000001) {
  u32 VAR_4 = FUNC_5(VAR_1, 0x61008c);
  FUNC_6(VAR_1, 0x61008c, VAR_4);
  VAR_2 &= ~0x00000001;
 }

 if (VAR_2 & 0x00000002) {
  u32 VAR_5 = FUNC_5(VAR_1, 0x61009c);
  int VAR_6 = FUNC_0(VAR_5) - 1;
  if (VAR_6 >= 0) {
   u32 VAR_7 = FUNC_5(VAR_1, 0x6101f0 + (VAR_6 * 12));
   u32 VAR_8 = FUNC_5(VAR_1, 0x6101f4 + (VAR_6 * 12));
   u32 VAR_9 = FUNC_5(VAR_1, 0x6101f8 + (VAR_6 * 12));

   FUNC_2(VAR_1, "chid %d mthd 0x%04x data 0x%08x "
           "0x%08x 0x%08x\n",
     VAR_6, (VAR_7 & 0x0000ffc), VAR_8, VAR_7, VAR_9);
   FUNC_6(VAR_1, 0x61009c, (1 << VAR_6));
   FUNC_6(VAR_1, 0x6101f0 + (VAR_6 * 12), 0x90000000);
  }

  VAR_2 &= ~0x00000002;
 }

 if (VAR_2 & 0x00100000) {
  u32 VAR_10 = FUNC_5(VAR_1, 0x6100ac);
  if (VAR_10 & 0x00000007) {
   VAR_1->super = (VAR_10 & 0x00000007);
   FUNC_7(&VAR_1->supervisor);
   FUNC_6(VAR_1, 0x6100ac, VAR_1->super);
   VAR_10 &= ~0x00000007;
  }

  if (VAR_10) {
   FUNC_3(VAR_1, "unknown intr24 0x%08x\n", VAR_10);
   FUNC_6(VAR_1, 0x6100ac, VAR_10);
  }

  VAR_2 &= ~0x00100000;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->head.nr; VAR_3++) {
  u32 VAR_11 = 0x01000000 << VAR_3;
  if (VAR_11 & VAR_2) {
   u32 VAR_12 = FUNC_5(VAR_1, 0x6100bc + (VAR_3 * 0x800));
   if (VAR_12 & 0x00000001)
    FUNC_1(VAR_1->base.vblank, VAR_3);
   FUNC_4(VAR_1, 0x6100bc + (VAR_3 * 0x800), 0, 0);
   FUNC_5(VAR_1, 0x6100c0 + (VAR_3 * 0x800));
  }
 }
}
