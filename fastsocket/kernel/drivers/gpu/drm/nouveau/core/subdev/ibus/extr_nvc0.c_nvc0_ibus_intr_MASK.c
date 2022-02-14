
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_ibus_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (struct nvc0_ibus_priv*,int) ;
 int FUNC_1 (struct nvc0_ibus_priv*,int) ;
 int FUNC_2 (struct nvc0_ibus_priv*,int) ;
 int FUNC_3 (struct nvc0_ibus_priv*,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_subdev *VAR_0)
{
 struct nvc0_ibus_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2 = FUNC_0(VAR_1, 0x121c58);
 u32 VAR_3 = FUNC_0(VAR_1, 0x121c5c);
 u32 VAR_4 = FUNC_0(VAR_1, 0x121c70);
 u32 VAR_5 = FUNC_0(VAR_1, 0x121c74);
 u32 VAR_6 = FUNC_0(VAR_1, 0x121c78);
 u32 VAR_7;

 for (VAR_7 = 0; (VAR_2 & 0x0000ff00) && VAR_7 < VAR_4; VAR_7++) {
  u32 VAR_8 = 0x00000100 << VAR_7;
  if (VAR_2 & VAR_8) {
   FUNC_2(VAR_1, VAR_7);
   VAR_2 &= ~VAR_8;
  }
 }

 for (VAR_7 = 0; (VAR_2 & 0xffff0000) && VAR_7 < VAR_5; VAR_7++) {
  u32 VAR_9 = 0x00010000 << VAR_7;
  if (VAR_2 & VAR_9) {
   FUNC_3(VAR_1, VAR_7);
   VAR_2 &= ~VAR_9;
  }
 }

 for (VAR_7 = 0; VAR_3 && VAR_7 < VAR_6; VAR_7++) {
  u32 VAR_10 = 0x00000001 << VAR_7;
  if (VAR_3 & VAR_10) {
   FUNC_1(VAR_1, VAR_7);
   VAR_3 &= ~VAR_10;
  }
 }
}
