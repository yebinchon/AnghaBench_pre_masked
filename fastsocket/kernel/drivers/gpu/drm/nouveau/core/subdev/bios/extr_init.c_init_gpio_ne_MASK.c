
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct nvbios_init {scalar_t__ offset; struct nouveau_bios* bios; } ;
struct nouveau_gpio {int (* reset ) (struct nouveau_gpio*,scalar_t__) ;} ;
struct nouveau_bios {int dummy; } ;
struct dcb_gpio_func {scalar_t__ func; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct nouveau_bios*,int ,int ,scalar_t__*,scalar_t__*,struct dcb_gpio_func*) ;
 scalar_t__ FUNC_2 (struct nvbios_init*) ;
 struct nouveau_gpio* FUNC_3 (struct nouveau_bios*) ;
 scalar_t__ FUNC_4 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_5 (struct nouveau_gpio*,scalar_t__) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(struct nvbios_init *VAR_1)
{
 struct nouveau_bios *VAR_2 = VAR_1->bios;
 struct nouveau_gpio *VAR_3 = FUNC_3(VAR_2);
 struct dcb_gpio_func VAR_4;
 u8 VAR_5 = FUNC_4(VAR_2, VAR_1->offset + 1);
 u8 VAR_6 = 0, VAR_7, VAR_8;
 u16 VAR_9, VAR_10;

 FUNC_6("GPIO_NE\t");
 VAR_1->offset += 2;

 for (VAR_10 = VAR_1->offset; VAR_10 < VAR_1->offset + VAR_5; VAR_10++)
  FUNC_0("0x%02x ", FUNC_4(VAR_2, VAR_10));
 FUNC_0("\n");

 while ((VAR_9 = FUNC_1(VAR_2, 0, VAR_6++, &VAR_7, &VAR_8, &VAR_4))) {
  if (VAR_4.func != VAR_0) {
   for (VAR_10 = VAR_1->offset; VAR_10 < VAR_1->offset + VAR_5; VAR_10++) {
    if (VAR_4.func == FUNC_4(VAR_2, VAR_10))
     break;
   }

   FUNC_6("\tFUNC[0x%02x]", VAR_4.func);
   if (VAR_10 == (VAR_1->offset + VAR_5)) {
    FUNC_0(" *");
    if (FUNC_2(VAR_1) && VAR_3 && VAR_3->reset)
     VAR_3->reset(VAR_3, VAR_4.func);
   }
   FUNC_0("\n");
  }
 }

 VAR_1->offset += VAR_5;
}
