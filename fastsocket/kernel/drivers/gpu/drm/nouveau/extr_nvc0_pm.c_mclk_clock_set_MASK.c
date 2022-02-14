
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int coef; } ;
struct nvc0_pm_state {TYPE_1__ mem; } ;
struct nouveau_mem_exec_func {struct nvc0_pm_state* priv; int dev; } ;
struct nouveau_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_device*,int) ;
 int FUNC_2 (struct nouveau_device*,int,int,int) ;
 int FUNC_3 (struct nouveau_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_mem_exec_func *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_0(VAR_0->dev);
 struct nvc0_pm_state *VAR_2 = VAR_0->priv;
 u32 VAR_3 = FUNC_1(VAR_1, 0x132000);

 FUNC_3(VAR_1, 0x137360, 0x00000001);
 FUNC_3(VAR_1, 0x137370, 0x00000000);
 FUNC_3(VAR_1, 0x137380, 0x00000000);
 if (VAR_3 & 0x00000001)
  FUNC_3(VAR_1, 0x132000, (VAR_3 &= ~0x00000001));

 FUNC_3(VAR_1, 0x132004, VAR_2->mem.coef);
 FUNC_3(VAR_1, 0x132000, (VAR_3 |= 0x00000001));
 FUNC_2(VAR_1, 0x137390, 0x00000002, 0x00000002);
 FUNC_3(VAR_1, 0x132018, 0x00005000);

 FUNC_3(VAR_1, 0x137370, 0x00000001);
 FUNC_3(VAR_1, 0x137380, 0x00000001);
 FUNC_3(VAR_1, 0x137360, 0x00000000);
}
