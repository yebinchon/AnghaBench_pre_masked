
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int dcr; int ** dbdr; int ** dbmr; int * dbar; int * ibar; } ;
struct TYPE_3__ {unsigned long addr; unsigned long len; int * originsns; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 TYPE_1__* VAR_13 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,int) ;

int FUNC_6(unsigned long VAR_14, unsigned long VAR_15, unsigned long VAR_16)
{
 unsigned long VAR_17;
 int VAR_18, VAR_19;

 union {
  struct {
   unsigned long mask0, mask1;
  };
  uint8_t bytes[8];
 } VAR_20;



 switch (VAR_14) {

 case 0:
  for (VAR_18 = 255; VAR_18 >= 0; VAR_18--)
   if (VAR_13[VAR_18].addr == VAR_15 && VAR_13[VAR_18].len == VAR_16)
    break;
  if (VAR_18 < 0)
   return -VAR_10;

  VAR_13[VAR_18].addr = 0;

  for (VAR_19 = 0; VAR_19 < VAR_16/4; VAR_19++)
   if (!FUNC_4(&((uint32_t *) VAR_15)[VAR_19],
       VAR_13[VAR_18].originsns[VAR_19]))
    return -VAR_8;
  return 0;


 case 1:
  if (VAR_15 & 3 || VAR_16 != 4)
   return -VAR_9;



  if (VAR_12->dcr & VAR_4 && ({ unsigned long VAR_21; asm volatile("movsg ibar""0"",%0" : "=r"(VAR_21)); VAR_21; }) == VAR_15) {

   VAR_12->dcr &= ~VAR_4;
   VAR_12->ibar[0] = 0;
   asm volatile("movgs gr0,ibar0");
   return 0;
  }

  if (VAR_12->dcr & VAR_5 && ({ unsigned long VAR_22; asm volatile("movsg ibar""1"",%0" : "=r"(VAR_22)); VAR_22; }) == VAR_15) {

   VAR_12->dcr &= ~VAR_5;
   VAR_12->ibar[1] = 0;
   asm volatile("movgs gr0,ibar1");
   return 0;
  }

  if (VAR_12->dcr & VAR_6 && ({ unsigned long VAR_23; asm volatile("movsg ibar""2"",%0" : "=r"(VAR_23)); VAR_23; }) == VAR_15) {

   VAR_12->dcr &= ~VAR_6;
   VAR_12->ibar[2] = 0;
   asm volatile("movgs gr0,ibar2");
   return 0;
  }

  if (VAR_12->dcr & VAR_7 && ({ unsigned long VAR_24; asm volatile("movsg ibar""3"",%0" : "=r"(VAR_24)); VAR_24; }) == VAR_15) {

   VAR_12->dcr &= ~VAR_7;
   VAR_12->ibar[3] = 0;
   asm volatile("movgs gr0,ibar3");
   return 0;
  }

  return -VAR_9;


 case 2:
 case 3:
 case 4:
  if ((VAR_15 & ~7) != ((VAR_15 + VAR_16 - 1) & ~7))
   return -VAR_9;

  VAR_17 = VAR_15 & 7;

  FUNC_5(VAR_20.bytes, 0xff, sizeof(VAR_20.bytes));
  for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++)
   VAR_20.bytes[VAR_17 + VAR_19] = 0;

  VAR_15 &= ~7;






  VAR_17 = VAR_14==2 ? VAR_2 : VAR_14==3 ? VAR_0 : VAR_0|VAR_2;

  if ((VAR_12->dcr & (VAR_0|VAR_2)) != VAR_17 ||
      ({ unsigned long VAR_25; asm volatile("movsg dbar""0"",%0" : "=r"(VAR_25)); VAR_25; }) != VAR_15 ||
      ({ unsigned long VAR_26; asm volatile("movsg dbmr""0""0,%0" : "=r"(VAR_26)); VAR_26; }) != VAR_20.mask0 ||
      ({ unsigned long VAR_27; asm volatile("movsg dbmr""0""1,%0" : "=r"(VAR_27)); VAR_27; }) != VAR_20.mask1)
   goto skip_dbar0;


  VAR_12->dcr &= ~(VAR_0|VAR_2);
  VAR_12->dbar[0] = 0;
  VAR_12->dbmr[0][0] = 0;
  VAR_12->dbmr[0][1] = 0;
  VAR_12->dbdr[0][0] = 0;
  VAR_12->dbdr[0][1] = 0;

  asm volatile("	movgs	gr0,dbar0	\n"
        "	movgs	gr0,dbmr00	\n"
        "	movgs	gr0,dbmr01	\n"
        "	movgs	gr0,dbdr00	\n"
        "	movgs	gr0,dbdr01	\n");
  return 0;

 skip_dbar0:

  VAR_17 = VAR_14==2 ? VAR_3 : VAR_14==3 ? VAR_1 : VAR_1|VAR_3;

  if ((VAR_12->dcr & (VAR_1|VAR_3)) != VAR_17 ||
      ({ unsigned long VAR_28; asm volatile("movsg dbar""1"",%0" : "=r"(VAR_28)); VAR_28; }) != VAR_15 ||
      ({ unsigned long VAR_29; asm volatile("movsg dbmr""1""0,%0" : "=r"(VAR_29)); VAR_29; }) != VAR_20.mask0 ||
      ({ unsigned long VAR_30; asm volatile("movsg dbmr""1""1,%0" : "=r"(VAR_30)); VAR_30; }) != VAR_20.mask1)
   goto skip_dbar1;


  VAR_12->dcr &= ~(VAR_1|VAR_3);
  VAR_12->dbar[1] = 0;
  VAR_12->dbmr[1][0] = 0;
  VAR_12->dbmr[1][1] = 0;
  VAR_12->dbdr[1][0] = 0;
  VAR_12->dbdr[1][1] = 0;

  asm volatile("	movgs	gr0,dbar1	\n"
        "	movgs	gr0,dbmr10	\n"
        "	movgs	gr0,dbmr11	\n"
        "	movgs	gr0,dbdr10	\n"
        "	movgs	gr0,dbdr11	\n");
  return 0;

 skip_dbar1:
  return -VAR_11;

 default:
  return -VAR_9;
 }
}
