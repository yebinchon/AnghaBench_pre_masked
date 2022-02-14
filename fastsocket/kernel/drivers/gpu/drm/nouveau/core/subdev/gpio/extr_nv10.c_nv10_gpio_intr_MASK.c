
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int events; } ;
struct nv10_gpio_priv {TYPE_1__ base; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nv10_gpio_priv*,int) ;
 int FUNC_2 (struct nv10_gpio_priv*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_subdev *VAR_0)
{
 struct nv10_gpio_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2 = FUNC_1(VAR_1, 0x001104);
 u32 VAR_3 = (VAR_2 & 0x0000ffff) >> 0;
 u32 VAR_4 = (VAR_2 & 0xffff0000) >> 16;
 int VAR_5;

 for (VAR_5 = 0; (VAR_3 | VAR_4) && VAR_5 < 32; VAR_5++) {
  if ((VAR_3 | VAR_4) & (1 << VAR_5))
   FUNC_0(VAR_1->base.events, VAR_5);
 }

 FUNC_2(VAR_1, 0x001104, VAR_2);
}
