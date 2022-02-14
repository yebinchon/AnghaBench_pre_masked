
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int events; } ;
struct nve0_gpio_priv {TYPE_1__ base; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nve0_gpio_priv*,int) ;
 int FUNC_2 (struct nve0_gpio_priv*,int,int) ;

void
FUNC_3(struct nouveau_subdev *VAR_0)
{
 struct nve0_gpio_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2 = FUNC_1(VAR_1, 0xdc00) & FUNC_1(VAR_1, 0xdc08);
 u32 VAR_3 = FUNC_1(VAR_1, 0xdc80) & FUNC_1(VAR_1, 0xdc88);
 u32 VAR_4 = (VAR_2 & 0x0000ffff) | (VAR_3 << 16);
 u32 VAR_5 = (VAR_2 >> 16) | (VAR_3 & 0xffff0000);
 int VAR_6;

 for (VAR_6 = 0; (VAR_4 | VAR_5) && VAR_6 < 32; VAR_6++) {
  if ((VAR_4 | VAR_5) & (1 << VAR_6))
   FUNC_0(VAR_1->base.events, VAR_6);
 }

 FUNC_2(VAR_1, 0xdc00, VAR_2);
 FUNC_2(VAR_1, 0xdc88, VAR_3);
}
