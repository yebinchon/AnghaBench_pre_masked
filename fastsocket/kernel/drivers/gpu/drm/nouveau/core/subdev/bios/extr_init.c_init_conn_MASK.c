
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct nvbios_init {TYPE_1__* outp; struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;
struct TYPE_2__ {int connector; } ;


 scalar_t__ FUNC_0 (struct nouveau_bios*,int ,int*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct nouveau_bios*,scalar_t__) ;

__attribute__((used)) static u8
FUNC_3(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;

 if (VAR_0->outp) {
  u8 VAR_2, VAR_3;
  u16 VAR_4 = FUNC_0(VAR_1, VAR_0->outp->connector, &VAR_2, &VAR_3);
  if (VAR_4)
   return FUNC_2(VAR_1, VAR_4);
 }

 FUNC_1("script needs connector type\n");
 return 0x00;
}
