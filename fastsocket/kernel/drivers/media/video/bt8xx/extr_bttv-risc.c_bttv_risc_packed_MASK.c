
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
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
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (int ,struct btcx_riscmem*,int) ;
 void* FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;

int
FUNC_5(struct bttv *VAR_8, struct btcx_riscmem *VAR_9,
   struct scatterlist *VAR_10,
   unsigned int VAR_11, unsigned int VAR_12,
   unsigned int VAR_13, unsigned int VAR_14,
   unsigned int VAR_15)
{
 u32 VAR_16,VAR_17,VAR_18;
 struct scatterlist *VAR_19;
 __le32 *VAR_20;
 int VAR_21;





 VAR_16 = VAR_14 * 4;
 VAR_16 += (1 + ((VAR_12 + VAR_13) * VAR_15)
    / VAR_6 + VAR_15) * 8;
 VAR_16 += 2 * 8;
 if ((VAR_21 = FUNC_1(VAR_8->c.pci,VAR_9,VAR_16)) < 0)
  return VAR_21;


 VAR_20 = VAR_9->cpu;
 *(VAR_20++) = FUNC_2(VAR_4|VAR_0);
 *(VAR_20++) = FUNC_2(0);

 while (VAR_14-- > 0) {
  *(VAR_20++) = FUNC_2(VAR_2 | VAR_3 |
          VAR_1 | VAR_12);
 }


 VAR_19 = VAR_10;
 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
  if ((VAR_8->opt_vcr_hack) &&
      (VAR_17 >= (VAR_15 - VAR_7)))
   continue;
  while (VAR_11 && VAR_11 >= FUNC_4(VAR_19)) {
   VAR_11 -= FUNC_4(VAR_19);
   VAR_19++;
  }
  if (VAR_12 <= FUNC_4(VAR_19)-VAR_11) {

   *(VAR_20++)=FUNC_2(VAR_5|VAR_3|
         VAR_1|VAR_12);
   *(VAR_20++)=FUNC_2(FUNC_3(VAR_19)+VAR_11);
   VAR_11+=VAR_12;
  } else {

   VAR_18 = VAR_12;
   *(VAR_20++)=FUNC_2(VAR_5|VAR_3|
         (FUNC_4(VAR_19)-VAR_11));
   *(VAR_20++)=FUNC_2(FUNC_3(VAR_19)+VAR_11);
   VAR_18 -= (FUNC_4(VAR_19)-VAR_11);
   VAR_11 = 0;
   VAR_19++;
   while (VAR_18 > FUNC_4(VAR_19)) {
    *(VAR_20++)=FUNC_2(VAR_5|
          FUNC_4(VAR_19));
    *(VAR_20++)=FUNC_2(FUNC_3(VAR_19));
    VAR_18 -= FUNC_4(VAR_19);
    VAR_19++;
   }
   *(VAR_20++)=FUNC_2(VAR_5|VAR_1|
         VAR_18);
   *(VAR_20++)=FUNC_2(FUNC_3(VAR_19));
   VAR_11 += VAR_18;
  }
  VAR_11 += VAR_13;
 }


 VAR_9->jmp = VAR_20;
 FUNC_0((VAR_9->jmp - VAR_9->cpu + 2) * sizeof(*VAR_9->cpu) > VAR_9->size);
 return 0;
}
