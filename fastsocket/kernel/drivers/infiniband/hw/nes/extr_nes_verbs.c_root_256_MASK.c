
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct nes_root_vpbl {TYPE_1__* pbl_vbase; scalar_t__ pbl_pbase; } ;
struct nes_device {int pcidev; } ;
struct TYPE_2__ {void* pa_high; void* pa_low; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (int ,int,scalar_t__*) ;

__attribute__((used)) static u32 FUNC_3(struct nes_device *VAR_0,
      struct nes_root_vpbl *VAR_1,
      struct nes_root_vpbl *VAR_2,
      u16 VAR_3)
{
 u64 VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (VAR_3 == 1) {
  VAR_2->pbl_vbase = FUNC_2(VAR_0->pcidev,
      512, &VAR_2->pbl_pbase);

  if (VAR_2->pbl_vbase == ((void*)0))
   return 0;

  VAR_4 = (u64)VAR_1->pbl_pbase;
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
   VAR_2->pbl_vbase[VAR_5].pa_low =
    FUNC_0((u32)VAR_4);
   VAR_2->pbl_vbase[VAR_5].pa_high =
    FUNC_0((u32)((((u64)VAR_4) >> 32)));
   VAR_4 += 256;
  }
 } else {
  for (VAR_5 = 3; VAR_5 >= 0; VAR_5--) {
   VAR_6 = VAR_5 * 16;
   VAR_1->pbl_vbase[VAR_6] = VAR_1->pbl_vbase[VAR_5];
   VAR_4 = FUNC_1(VAR_1->pbl_vbase[VAR_6].pa_low) +
       (((u64)FUNC_1(VAR_1->pbl_vbase[VAR_6].pa_high))
    << 32);
   for (VAR_7 = 1; VAR_7 < 16; VAR_7++) {
    VAR_4 += 256;
    VAR_1->pbl_vbase[VAR_6 + VAR_7].pa_low =
      FUNC_0((u32)VAR_4);
    VAR_1->pbl_vbase[VAR_6 + VAR_7].pa_high =
        FUNC_0((u32)((((u64)VAR_4) >> 32)));
   }
  }
 }

 return 1;
}
