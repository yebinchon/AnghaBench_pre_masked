
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios_init {int offset; int bios; } ;
struct nouveau_gpio {int (* reset ) (struct nouveau_gpio*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 struct nouveau_gpio* FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_gpio*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct nvbios_init *VAR_1)
{
 struct nouveau_gpio *VAR_2 = FUNC_1(VAR_1->bios);

 FUNC_3("GPIO\n");
 VAR_1->offset += 1;

 if (FUNC_0(VAR_1) && VAR_2 && VAR_2->reset)
  VAR_2->reset(VAR_2, VAR_0);
}
