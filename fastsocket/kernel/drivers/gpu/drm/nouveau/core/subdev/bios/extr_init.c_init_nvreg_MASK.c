
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvbios_init {int bios; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvbios_init*) ;
 int FUNC_2 (struct nvbios_init*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static inline u32
FUNC_5(struct nvbios_init *VAR_1, u32 VAR_2)
{






 VAR_2 &= ~0x00000003;




 if (FUNC_3(VAR_1->bios)->card_type >= VAR_0) {
  if (VAR_2 & 0x80000000) {
   VAR_2 += FUNC_0(VAR_1) * 0x800;
   VAR_2 &= ~0x80000000;
  }

  if (VAR_2 & 0x40000000) {
   VAR_2 += FUNC_2(VAR_1) * 0x800;
   VAR_2 &= ~0x40000000;
   if (VAR_2 & 0x20000000) {
    VAR_2 += FUNC_1(VAR_1) * 0x80;
    VAR_2 &= ~0x20000000;
   }
  }
 }

 if (VAR_2 & ~0x00fffffc)
  FUNC_4("unknown bits in register 0x%08x\n", VAR_2);
 return VAR_2;
}
