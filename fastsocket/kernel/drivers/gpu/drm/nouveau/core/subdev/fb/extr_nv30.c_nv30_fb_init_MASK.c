
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv30_fb_priv {int base; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int chipset; } ;


 int FUNC_0 (struct nv30_fb_priv*,int,int,int) ;
 int FUNC_1 (int *) ;
 struct nouveau_device* FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (struct nv30_fb_priv*,int) ;
 int FUNC_4 (struct nv30_fb_priv*,int,int ) ;

int
FUNC_5(struct nouveau_object *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_2(VAR_0);
 struct nv30_fb_priv *VAR_2 = (void *)VAR_0;
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_1(&VAR_2->base);
 if (VAR_3)
  return VAR_3;


 if (VAR_1->chipset == 0x30 ||
     VAR_1->chipset == 0x31 ||
     VAR_1->chipset == 0x35) {

  int VAR_6 = (VAR_1->chipset == 0x31 ? 2 : 4);
  int VAR_7 = FUNC_3(VAR_2, 0x1003d0);

  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
   for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
    FUNC_4(VAR_2, 0x10037c + 0xc * VAR_4 + 0x4 * VAR_5,
     FUNC_0(VAR_2, VAR_7, 0, VAR_5));

   for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
    FUNC_4(VAR_2, 0x1003ac + 0x8 * VAR_4 + 0x4 * VAR_5,
     FUNC_0(VAR_2, VAR_7, 1, VAR_5));
  }
 }

 return 0;
}
