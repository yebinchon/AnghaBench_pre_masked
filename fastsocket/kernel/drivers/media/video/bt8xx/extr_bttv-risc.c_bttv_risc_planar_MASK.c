
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {int pci; } ;
struct bttv {scalar_t__ opt_vcr_hack; TYPE_1__ c; } ;
struct btcx_riscmem {int size; int * cpu; int * jmp; } ;
typedef int __le32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (int ,struct btcx_riscmem*,unsigned int) ;
 void* FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct scatterlist*) ;
 unsigned int FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static int
FUNC_5(struct bttv *VAR_8, struct btcx_riscmem *VAR_9,
   struct scatterlist *VAR_10,
   unsigned int VAR_11, unsigned int VAR_12,
   unsigned int VAR_13, unsigned int VAR_14,
   unsigned int VAR_15, unsigned int VAR_16,
   unsigned int VAR_17, unsigned int VAR_18,
   unsigned int VAR_19)
{
 unsigned int VAR_20,VAR_21,VAR_22,VAR_23,VAR_24;
 __le32 *VAR_25;
 u32 VAR_26;
 struct scatterlist *VAR_27;
 struct scatterlist *VAR_28;
 struct scatterlist *VAR_29;
 int VAR_30 = (0 == VAR_11);
 int VAR_31;




 VAR_20 = ((3 + (VAR_12 + VAR_13) * VAR_14 * 2)
    / VAR_6) + VAR_14;
 VAR_20 += 2;
 if ((VAR_31 = FUNC_1(VAR_8->c.pci,VAR_9,VAR_20*4*5)) < 0)
  return VAR_31;


 VAR_25 = VAR_9->cpu;
 *(VAR_25++) = FUNC_2(VAR_3|VAR_0);
 *(VAR_25++) = FUNC_2(0);


 VAR_27 = VAR_10;
 VAR_28 = VAR_10;
 VAR_29 = VAR_10;
 for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {
  if ((VAR_8->opt_vcr_hack) &&
      (VAR_21 >= (VAR_14 - VAR_7)))
   continue;
  switch (VAR_18) {
  case 0:
   VAR_24 = 1;
   break;
  case 1:
   if (VAR_30)
    VAR_24 = ((VAR_21 & 1) == 0);
   else
    VAR_24 = ((VAR_21 & 1) == 1);
   break;
  case 2:
   if (VAR_30)
    VAR_24 = ((VAR_21 & 3) == 0);
   else
    VAR_24 = ((VAR_21 & 3) == 2);
   break;
  default:
   VAR_24 = 0;
   break;
  }

  for (VAR_22 = VAR_12; VAR_22 > 0; VAR_22 -= VAR_23) {

   while (VAR_11 && VAR_11 >= FUNC_4(VAR_27)) {
    VAR_11 -= FUNC_4(VAR_27);
    VAR_27++;
   }
   while (VAR_15 && VAR_15 >= FUNC_4(VAR_28)) {
    VAR_15 -= FUNC_4(VAR_28);
    VAR_28++;
   }
   while (VAR_16 && VAR_16 >= FUNC_4(VAR_29)) {
    VAR_16 -= FUNC_4(VAR_29);
    VAR_29++;
   }


   VAR_23 = VAR_22;
   if (VAR_11 + VAR_23 > FUNC_4(VAR_27))
    VAR_23 = FUNC_4(VAR_27) - VAR_11;
   if (VAR_24) {
    if (VAR_15 + (VAR_23>>VAR_17) > FUNC_4(VAR_28))
     VAR_23 = (FUNC_4(VAR_28) - VAR_15) << VAR_17;
    if (VAR_16 + (VAR_23>>VAR_17) > FUNC_4(VAR_29))
     VAR_23 = (FUNC_4(VAR_29) - VAR_16) << VAR_17;
    VAR_26 = VAR_4;
   } else {
    VAR_26 = VAR_5;
   }
   if (VAR_12 == VAR_22)
    VAR_26 |= VAR_2;
   if (VAR_23 == VAR_22)
    VAR_26 |= VAR_1;


   *(VAR_25++)=FUNC_2(VAR_26 | VAR_23);
   *(VAR_25++)=FUNC_2(((VAR_23 >> VAR_17) << 16) |
         (VAR_23 >> VAR_17));
   *(VAR_25++)=FUNC_2(FUNC_3(VAR_27)+VAR_11);
   VAR_11 += VAR_23;
   if (VAR_24) {
    *(VAR_25++)=FUNC_2(FUNC_3(VAR_28)+VAR_15);
    VAR_15 += VAR_23 >> VAR_17;
    *(VAR_25++)=FUNC_2(FUNC_3(VAR_29)+VAR_16);
    VAR_16 += VAR_23 >> VAR_17;
   }
  }
  VAR_11 += VAR_13;
  if (VAR_24) {
   VAR_15 += VAR_19;
   VAR_16 += VAR_19;
  }
 }


 VAR_9->jmp = VAR_25;
 FUNC_0((VAR_9->jmp - VAR_9->cpu + 2) * sizeof(*VAR_9->cpu) > VAR_9->size);
 return 0;
}
