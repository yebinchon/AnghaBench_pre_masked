
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvbios_init {int bios; } ;
struct nouveau_clock {int (* pll_set ) (struct nouveau_clock*,int ,int ) ;} ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 struct nouveau_clock* FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_clock*,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct nvbios_init *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct nouveau_clock *VAR_3 = FUNC_1(VAR_0->bios);
 if (VAR_3 && VAR_3->pll_set && FUNC_0(VAR_0)) {
  int VAR_4 = VAR_3->pll_set(VAR_3, VAR_1, VAR_2);
  if (VAR_4)
   FUNC_3("failed to prog pll 0x%08x to %dkHz\n", VAR_1, VAR_2);
 }
}
