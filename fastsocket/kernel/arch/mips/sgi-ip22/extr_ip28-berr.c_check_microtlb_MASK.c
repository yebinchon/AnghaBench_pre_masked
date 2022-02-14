
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dma_ctrl; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long,int) ;
 unsigned long VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(u32 VAR_2, u32 VAR_3, unsigned long VAR_4)
{


 VAR_4 &= 0x7fffffff;


 if ((VAR_3 & 2) && (VAR_4 >> 21) == ((VAR_2<<1) >> 22)) {
  u32 VAR_5 = VAR_1->dma_ctrl;
  if (VAR_5 & 1) {
   unsigned int VAR_6 = (VAR_5 & 2) ? 14:12;

   unsigned long VAR_7 = (VAR_3 >> 6) << 12;
   VAR_7 += 8*((VAR_4 >> VAR_6) & 0x1ff);
   if (FUNC_1(VAR_7, 8)) {





    unsigned long VAR_8 = *(unsigned long *)
      FUNC_0(VAR_7);
    VAR_8 = (VAR_8 & 0x3f) << 6;
    VAR_8 += VAR_4 & ((1 << VAR_6) - 1);
    return (VAR_0 == VAR_8);
   }
  }
 }
 return 0;
}
