
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int limit; } ;
struct nv04_vmmgr_priv {TYPE_1__ base; } ;
struct nouveau_vm {scalar_t__ vmm; } ;


 int VAR_0 ;
 int FUNC_0 (struct nv04_vmmgr_priv*,char*,int ) ;
 int FUNC_1 (struct nv04_vmmgr_priv*,int) ;
 int FUNC_2 (struct nv04_vmmgr_priv*,int,int,int) ;
 int FUNC_3 (struct nv04_vmmgr_priv*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_vm *VAR_1)
{
 struct nv04_vmmgr_priv *VAR_2 = (void *)VAR_1->vmm;
 FUNC_3(VAR_2, 0x100814, VAR_2->base.limit - VAR_0);
 FUNC_3(VAR_2, 0x100808, 0x00000020);
 if (!FUNC_2(VAR_2, 0x100808, 0x00000001, 0x00000001))
  FUNC_0(VAR_2, "timeout: 0x%08x\n", FUNC_1(VAR_2, 0x100808));
 FUNC_3(VAR_2, 0x100808, 0x00000000);
}
