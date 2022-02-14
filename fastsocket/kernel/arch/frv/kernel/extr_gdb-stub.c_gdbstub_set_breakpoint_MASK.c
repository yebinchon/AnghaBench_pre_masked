
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int dcr; unsigned long* ibar; unsigned long* dbar; unsigned long** dbmr; int ** dbdr; } ;
struct TYPE_3__ {unsigned long addr; unsigned long len; int * originsns; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_0 (char*,int,unsigned long,unsigned long,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_14, unsigned long VAR_15, unsigned long VAR_16)
{
 unsigned long VAR_17;
 int VAR_18, VAR_19, VAR_20;

 union {
  struct {
   unsigned long mask0, mask1;
  };
  uint8_t bytes[8];
 } VAR_21;



 switch (VAR_14) {

 case 0:
  if (VAR_15 & 3 || VAR_16 > 7*4)
   return -VAR_10;

  for (VAR_18 = 255; VAR_18 >= 0; VAR_18--)
   if (!VAR_13[VAR_18].addr)
    break;
  if (VAR_18 < 0)
   return -VAR_11;

  for (VAR_19 = 0; VAR_19 < VAR_16/4; VAR_19++)
   if (!FUNC_1(&((uint32_t *) VAR_15)[VAR_19],
      &VAR_13[VAR_18].originsns[VAR_19]))
    return -VAR_9;

  for (VAR_19 = 0; VAR_19 < VAR_16/4; VAR_19++)
   if (!FUNC_2(&((uint32_t *) VAR_15)[VAR_19],
       VAR_0)
       ) {

    for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++)
     FUNC_2(&((uint32_t *) VAR_15)[VAR_20],
           VAR_13[VAR_18].originsns[VAR_20]);
    return -VAR_9;
   }

  VAR_13[VAR_18].addr = VAR_15;
  VAR_13[VAR_18].len = VAR_16;
  return 0;


 case 1:
  if (VAR_15 & 3 || VAR_16 != 4)
   return -VAR_10;

  if (!(VAR_12->dcr & VAR_5)) {

   VAR_12->dcr |= VAR_5;
   VAR_12->ibar[0] = VAR_15;
   asm volatile("movgs %0,ibar0" : : "r"(VAR_15));
   return 0;
  }

  if (!(VAR_12->dcr & VAR_6)) {

   VAR_12->dcr |= VAR_6;
   VAR_12->ibar[1] = VAR_15;
   asm volatile("movgs %0,ibar1" : : "r"(VAR_15));
   return 0;
  }

  if (!(VAR_12->dcr & VAR_7)) {

   VAR_12->dcr |= VAR_7;
   VAR_12->ibar[2] = VAR_15;
   asm volatile("movgs %0,ibar2" : : "r"(VAR_15));
   return 0;
  }

  if (!(VAR_12->dcr & VAR_8)) {

   VAR_12->dcr |= VAR_8;
   VAR_12->ibar[3] = VAR_15;
   asm volatile("movgs %0,ibar3" : : "r"(VAR_15));
   return 0;
  }

  return -VAR_11;


 case 2:
 case 3:
 case 4:
  if ((VAR_15 & ~7) != ((VAR_15 + VAR_16 - 1) & ~7))
   return -VAR_10;

  VAR_17 = VAR_15 & 7;

  FUNC_3(VAR_21.bytes, 0xff, sizeof(VAR_21.bytes));
  for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++)
   VAR_21.bytes[VAR_17 + VAR_19] = 0;

  VAR_15 &= ~7;

  if (!(VAR_12->dcr & (VAR_1|VAR_3))) {

   VAR_17 = VAR_14==2 ? VAR_3 : VAR_14==3 ? VAR_1 : VAR_1|VAR_3;

   VAR_12->dcr |= VAR_17;
   VAR_12->dbar[0] = VAR_15;
   VAR_12->dbmr[0][0] = VAR_21.mask0;
   VAR_12->dbmr[0][1] = VAR_21.mask1;
   VAR_12->dbdr[0][0] = 0;
   VAR_12->dbdr[0][1] = 0;

   asm volatile("	movgs	%0,dbar0	\n"
         "	movgs	%1,dbmr00	\n"
         "	movgs	%2,dbmr01	\n"
         "	movgs	gr0,dbdr00	\n"
         "	movgs	gr0,dbdr01	\n"
         : : "r"(VAR_15), "r"(VAR_21.mask0), "r"(VAR_21.mask1));
   return 0;
  }

  if (!(VAR_12->dcr & (VAR_2|VAR_4))) {

   VAR_17 = VAR_14==2 ? VAR_4 : VAR_14==3 ? VAR_2 : VAR_2|VAR_4;

   VAR_12->dcr |= VAR_17;
   VAR_12->dbar[1] = VAR_15;
   VAR_12->dbmr[1][0] = VAR_21.mask0;
   VAR_12->dbmr[1][1] = VAR_21.mask1;
   VAR_12->dbdr[1][0] = 0;
   VAR_12->dbdr[1][1] = 0;

   asm volatile("	movgs	%0,dbar1	\n"
         "	movgs	%1,dbmr10	\n"
         "	movgs	%2,dbmr11	\n"
         "	movgs	gr0,dbdr10	\n"
         "	movgs	gr0,dbdr11	\n"
         : : "r"(VAR_15), "r"(VAR_21.mask0), "r"(VAR_21.mask1));
   return 0;
  }

  return -VAR_11;

 default:
  return -VAR_10;
 }

}
