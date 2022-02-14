
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvc0_pm_state {struct nouveau_pm_level* perflvl; } ;
struct TYPE_2__ {int * reg; } ;
struct nouveau_pm_level {TYPE_1__ timing; } ;
struct nouveau_mem_exec_func {struct nvc0_pm_state* priv; int dev; } ;
struct nouveau_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_device*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_mem_exec_func *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_0(VAR_0->dev);
 struct nvc0_pm_state *VAR_2 = VAR_0->priv;
 struct nouveau_pm_level *VAR_3 = VAR_2->perflvl;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
  FUNC_1(VAR_1, 0x10f290 + (VAR_4 * 4), VAR_3->timing.reg[VAR_4]);
}
