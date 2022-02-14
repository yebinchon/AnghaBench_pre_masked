
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_mpeg_priv {int base; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv50_mpeg_priv*,char*,int ) ;
 int FUNC_2 (struct nv50_mpeg_priv*,int,int,int) ;
 int FUNC_3 (struct nv50_mpeg_priv*,int) ;
 int FUNC_4 (struct nv50_mpeg_priv*,int,int,int) ;
 int FUNC_5 (struct nv50_mpeg_priv*,int,int) ;

int
FUNC_6(struct nouveau_object *VAR_1)
{
 struct nv50_mpeg_priv *VAR_2 = (void *)VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->base);
 if (VAR_3)
  return VAR_3;

 FUNC_5(VAR_2, 0x00b32c, 0x00000000);
 FUNC_5(VAR_2, 0x00b314, 0x00000100);
 FUNC_5(VAR_2, 0x00b0e0, 0x0000001a);

 FUNC_5(VAR_2, 0x00b220, 0x00000044);
 FUNC_5(VAR_2, 0x00b300, 0x00801ec1);
 FUNC_5(VAR_2, 0x00b390, 0x00000000);
 FUNC_5(VAR_2, 0x00b394, 0x00000000);
 FUNC_5(VAR_2, 0x00b398, 0x00000000);
 FUNC_2(VAR_2, 0x00b32c, 0x00000001, 0x00000001);

 FUNC_5(VAR_2, 0x00b100, 0xffffffff);
 FUNC_5(VAR_2, 0x00b140, 0xffffffff);

 if (!FUNC_4(VAR_2, 0x00b200, 0x00000001, 0x00000000)) {
  FUNC_1(VAR_2, "timeout 0x%08x\n", FUNC_3(VAR_2, 0x00b200));
  return -VAR_0;
 }

 return 0;
}
