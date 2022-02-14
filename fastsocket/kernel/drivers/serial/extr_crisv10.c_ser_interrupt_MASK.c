
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ,char*,unsigned long) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (unsigned long*,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 unsigned long* VAR_1 ;
 unsigned long* VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_5 (struct e100_serial*) ;
 int FUNC_6 (struct e100_serial*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 struct e100_serial* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static irqreturn_t
FUNC_11(int VAR_13, void *VAR_14)
{
 static volatile int VAR_15 = 0;
 struct e100_serial *VAR_16;
 int VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20 = (1 << (8+2*0));
 int VAR_21 = 0;
 static volatile unsigned long VAR_22 = 0;

 FUNC_10(VAR_18);
 VAR_19 = *VAR_2;

 VAR_16 = VAR_6;
 VAR_19 &= VAR_5;
 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {

  if (VAR_19 & VAR_20) {
   VAR_21 = 1;
   FUNC_5(VAR_16);
  }
  VAR_16 += 1;
  VAR_20 <<= 2;
 }
 if (!VAR_15) {
  unsigned long VAR_23;
  unsigned long
  VAR_24 = 1;

  VAR_19 &= (FUNC_2(VAR_2, VAR_7) |
     FUNC_2(VAR_2, VAR_8) |
     FUNC_2(VAR_2, VAR_9) |
     FUNC_2(VAR_2, VAR_10));
  while (VAR_19) {

   *VAR_1 = VAR_19;

   *VAR_3 = FUNC_3(VAR_3, VAR_11, VAR_12);

   FUNC_8();
   VAR_23 = (1 << (8+1+2*0));
   VAR_16 = VAR_6;
   for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {

    if (VAR_19 & VAR_23) {
     VAR_21 = 1;
     FUNC_6(VAR_16);
    }
    VAR_16 += 1;
    VAR_23 <<= 2;
   }

   FUNC_7();

   VAR_19 = VAR_22;
  }
  FUNC_7();
  VAR_24 = 0;
 } else {
  unsigned long VAR_25;
  VAR_25 = VAR_19 & (FUNC_2(VAR_2, VAR_7) |
          FUNC_2(VAR_2, VAR_8) |
          FUNC_2(VAR_2, VAR_9) |
          FUNC_2(VAR_2, VAR_10));
  if (VAR_25) {
   VAR_22 |= VAR_25;

   *VAR_1 = VAR_25;
   FUNC_1(FUNC_0(VAR_4, "ser_int reentered with TX %X\n", VAR_25));
  }
 }

 FUNC_9(VAR_18);
 return FUNC_4(VAR_21);
}
