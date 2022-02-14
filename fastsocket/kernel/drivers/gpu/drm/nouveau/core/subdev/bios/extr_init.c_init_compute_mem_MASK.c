
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios_init {int offset; int bios; } ;
struct nouveau_devinit {int (* meminit ) (struct nouveau_devinit*) ;} ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 struct nouveau_devinit* FUNC_2 (int ) ;
 int FUNC_3 (struct nouveau_devinit*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct nvbios_init *VAR_0)
{
 struct nouveau_devinit *VAR_1 = FUNC_2(VAR_0->bios);

 FUNC_4("COMPUTE_MEM\n");
 VAR_0->offset += 1;

 FUNC_1(VAR_0, 1);
 if (FUNC_0(VAR_0) && VAR_1->meminit)
  VAR_1->meminit(VAR_1);
 FUNC_1(VAR_0, 0);
}
