
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int dataacc; scalar_t__ skip; scalar_t__ count; int addr; scalar_t__ enabled; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (unsigned int) ;
 TYPE_1__* VAR_22 ;

void FUNC_19(void)
{
 int VAR_23;
 unsigned int VAR_24 = 0;
 unsigned int VAR_25 = 0;
 int VAR_26 = 0;

 for (VAR_23 = 0; VAR_23 < VAR_0; VAR_23++)
  if (VAR_22[VAR_23].enabled) {
   VAR_26 = 1;

   switch (VAR_23) {
   case 0:
    VAR_24 |= VAR_9|VAR_15;
    FUNC_6(VAR_22[VAR_23].addr);
    FUNC_12(VAR_22[VAR_23].count
     + VAR_22->skip);
    break;
   case 1:
    VAR_24 |= VAR_10|VAR_16;
    FUNC_7(VAR_22[VAR_23].addr);
    FUNC_13(VAR_22[VAR_23].count
     + VAR_22->skip);
    break;
   case 2:
    VAR_24 |= VAR_11|VAR_17;
    FUNC_8(VAR_22[VAR_23].addr);
    FUNC_14(VAR_22[VAR_23].count
     + VAR_22->skip);
    break;
   case 3:
    VAR_24 |= VAR_12|VAR_18;
    FUNC_9(VAR_22[VAR_23].addr);
    FUNC_15(VAR_22[VAR_23].count
     + VAR_22->skip);
    break;
   case 4:
    VAR_24 |= VAR_13|VAR_19;
    FUNC_10(VAR_22[VAR_23].addr);
    FUNC_16(VAR_22[VAR_23].count
     + VAR_22->skip);
    break;
   case 5:
    VAR_24 |= VAR_14|VAR_20;
    FUNC_11(VAR_22[VAR_23].addr);
    FUNC_17(VAR_22[VAR_23].count
     + VAR_22->skip);
    break;
   case 6:
    VAR_25 |= VAR_3|VAR_5|VAR_7;
    VAR_25 |= VAR_22[VAR_23].dataacc
     << VAR_1;
    FUNC_1(VAR_22[VAR_23].addr);
    FUNC_3(VAR_22[VAR_23].count
     + VAR_22->skip);
    break;
   case 7:
    VAR_25 |= VAR_4|VAR_6|VAR_8;
    VAR_25 |= VAR_22[VAR_23].dataacc
     << VAR_2;
    FUNC_2(VAR_22[VAR_23].addr);
    FUNC_4(VAR_22[VAR_23].count
     + VAR_22->skip);
    break;
   }
  }



 if (VAR_26) {
  FUNC_18(VAR_21);
  FUNC_0();
  FUNC_18(VAR_24|VAR_21);
  FUNC_5(VAR_25);
  FUNC_0();
 }
}
