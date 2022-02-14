
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv30_fb_priv {int dummy; } ;
struct nouveau_device {int chipset; } ;


 struct nouveau_device* FUNC_0 (struct nv30_fb_priv*) ;
 int FUNC_1 (struct nv30_fb_priv*,int) ;

__attribute__((used)) static int
FUNC_2(struct nv30_fb_priv *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = (VAR_4->chipset > 0x30 ?
   FUNC_1(VAR_0, 0x122c + 0x10 * VAR_1 + 0x4 * VAR_3) >> (4 * (VAR_2 ^ 1)) :
   0) & 0xf;

 return 2 * (VAR_5 & 0x8 ? VAR_5 - 0x10 : VAR_5);
}
