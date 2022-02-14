
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_mpeg_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (struct nv50_mpeg_priv*,char*,int,int,int,int) ;
 int FUNC_1 (struct nv50_mpeg_priv*,int) ;
 int FUNC_2 (struct nv50_mpeg_priv*,int,int) ;

void
FUNC_3(struct nouveau_subdev *VAR_0)
{
 struct nv50_mpeg_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2 = FUNC_1(VAR_1, 0x00b100);
 u32 VAR_3 = FUNC_1(VAR_1, 0x00b230);
 u32 VAR_4 = FUNC_1(VAR_1, 0x00b234);
 u32 VAR_5 = FUNC_1(VAR_1, 0x00b238);
 u32 VAR_6 = VAR_2;

 if (VAR_2 & 0x01000000) {

  if (VAR_3 == 0x00000020 && VAR_4 == 0x0000) {
   FUNC_2(VAR_1, 0x00b308, 0x00000100);
   VAR_6 &= ~0x01000000;
  }
 }

 if (VAR_6) {
  FUNC_0(VAR_1, "0x%08x 0x%08x 0x%08x 0x%08x\n",
   VAR_2, VAR_3, VAR_4, VAR_5);
 }

 FUNC_2(VAR_1, 0x00b100, VAR_2);
 FUNC_2(VAR_1, 0x00b230, 0x00000001);
}
