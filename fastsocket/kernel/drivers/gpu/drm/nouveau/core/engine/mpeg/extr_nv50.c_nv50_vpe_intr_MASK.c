
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nv50_mpeg_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (struct nouveau_subdev*) ;
 int FUNC_1 (struct nv50_mpeg_priv*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nv50_mpeg_priv*,int) ;
 int FUNC_3 (struct nv50_mpeg_priv*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_subdev *VAR_0)
{
 struct nv50_mpeg_priv *VAR_1 = (void *)VAR_0;

 if (FUNC_2(VAR_1, 0x00b100))
  FUNC_0(VAR_0);

 if (FUNC_2(VAR_1, 0x00b800)) {
  u32 VAR_2 = FUNC_2(VAR_1, 0x00b800);
  FUNC_1(VAR_1, "PMSRCH: 0x%08x\n", VAR_2);
  FUNC_3(VAR_1, 0xb800, VAR_2);
 }
}
