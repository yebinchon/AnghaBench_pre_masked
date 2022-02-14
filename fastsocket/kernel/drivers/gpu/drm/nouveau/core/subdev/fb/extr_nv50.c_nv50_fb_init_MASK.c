
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_fb_priv {int r100c08; int base; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int chipset; } ;


 int FUNC_0 (int *) ;
 struct nouveau_device* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (struct nv50_fb_priv*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_1(VAR_0);
 struct nv50_fb_priv *VAR_2 = (void *)VAR_0;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->base);
 if (VAR_3)
  return VAR_3;





 FUNC_2(VAR_2, 0x100c08, VAR_2->r100c08 >> 8);



 switch (VAR_1->chipset) {
 case 0x50:
  FUNC_2(VAR_2, 0x100c90, 0x000707ff);
  break;
 case 0xa3:
 case 0xa5:
 case 0xa8:
  FUNC_2(VAR_2, 0x100c90, 0x000d0fff);
  break;
 case 0xaf:
  FUNC_2(VAR_2, 0x100c90, 0x089d1fff);
  break;
 default:
  FUNC_2(VAR_2, 0x100c90, 0x001d07ff);
  break;
 }

 return 0;
}
