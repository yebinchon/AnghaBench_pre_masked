
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pch_gbe_hw {TYPE_2__* reg; } ;
struct TYPE_4__ {TYPE_1__* mac_adr; int ADDR_MASK; } ;
struct TYPE_3__ {int low; int high; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct pch_gbe_hw*,int *,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct pch_gbe_hw *VAR_2,
         u8 *VAR_3, u32 VAR_4,
         u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8;





 for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7++) {
  if (VAR_4) {
   FUNC_2(VAR_2, VAR_3, VAR_7);
   VAR_4--;
   VAR_3 += VAR_1;
  } else {

   VAR_8 = FUNC_0(&VAR_2->reg->ADDR_MASK);
   FUNC_1((VAR_8 | (0x0001 << VAR_7)),
     &VAR_2->reg->ADDR_MASK);

   FUNC_3(&VAR_2->reg->ADDR_MASK, VAR_0);

   FUNC_1(0, &VAR_2->reg->mac_adr[VAR_7].high);
   FUNC_1(0, &VAR_2->reg->mac_adr[VAR_7].low);
  }
 }
}
