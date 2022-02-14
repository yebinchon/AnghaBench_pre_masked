
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int events; } ;
struct nv50_gpio_priv {TYPE_1__ base; } ;
struct nouveau_subdev {int dummy; } ;
struct TYPE_4__ {int chipset; } ;


 int FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (struct nv50_gpio_priv*) ;
 int FUNC_2 (struct nv50_gpio_priv*,int) ;
 int FUNC_3 (struct nv50_gpio_priv*,int,int) ;

void
FUNC_4(struct nouveau_subdev *VAR_0)
{
 struct nv50_gpio_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2, VAR_3 = 0;
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_2 = FUNC_2(VAR_1, 0xe054) & FUNC_2(VAR_1, 0xe050);
 if (FUNC_1(VAR_1)->chipset >= 0x90)
  VAR_3 = FUNC_2(VAR_1, 0xe074) & FUNC_2(VAR_1, 0xe070);

 VAR_4 = (VAR_2 & 0x0000ffff) | (VAR_3 << 16);
 VAR_5 = (VAR_2 >> 16) | (VAR_3 & 0xffff0000);

 for (VAR_6 = 0; (VAR_4 | VAR_5) && VAR_6 < 32; VAR_6++) {
  if ((VAR_4 | VAR_5) & (1 << VAR_6))
   FUNC_0(VAR_1->base.events, VAR_6);
 }

 FUNC_3(VAR_1, 0xe054, VAR_2);
 if (FUNC_1(VAR_1)->chipset >= 0x90)
  FUNC_3(VAR_1, 0xe074, VAR_3);
}
