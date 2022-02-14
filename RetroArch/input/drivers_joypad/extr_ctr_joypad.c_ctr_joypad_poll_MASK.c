
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int py; } ;
typedef TYPE_1__ touchPosition ;
struct TYPE_7__ {int dy; int dx; } ;
typedef TYPE_2__ circlePosition ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 int *** VAR_35 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_36 ;
 int VAR_37 ;

__attribute__((used)) static void FUNC_9(void)
{
   uint32_t VAR_38;
   circlePosition VAR_39, VAR_40;
   touchPosition VAR_41;

   FUNC_6();

   VAR_38 = FUNC_5();
   FUNC_4(&VAR_39);
   FUNC_8(&VAR_40);
   FUNC_7(&VAR_41);

   VAR_37 = 0;
   VAR_37 |= (VAR_38 & VAR_4) ? (1 << VAR_24) : 0;
   VAR_37 |= (VAR_38 & VAR_3) ? (1 << VAR_21) : 0;
   VAR_37 |= (VAR_38 & VAR_5) ? (1 << VAR_27) : 0;
   VAR_37 |= (VAR_38 & VAR_6) ? (1 << VAR_30) : 0;
   VAR_37 |= (VAR_38 & VAR_10) ? (1 << VAR_29) : 0;
   VAR_37 |= (VAR_38 & VAR_9) ? (1 << VAR_28) : 0;
   VAR_37 |= (VAR_38 & VAR_12) ? (1 << VAR_31) : 0;
   VAR_37 |= (VAR_38 & VAR_13) ? (1 << VAR_32) : 0;
   VAR_37 |= (VAR_38 & VAR_2) ? (1 << VAR_20) : 0;
   VAR_37 |= (VAR_38 & VAR_1) ? (1 << VAR_19) : 0;
   VAR_37 |= (VAR_38 & VAR_8) ? (1 << VAR_25) : 0;
   VAR_37 |= (VAR_38 & VAR_7) ? (1 << VAR_22) : 0;
   VAR_37 |= (VAR_38 & VAR_15) ? (1 << VAR_26) : 0;
   VAR_37 |= (VAR_38 & VAR_14) ? (1 << VAR_23) : 0;

   VAR_35[0][VAR_33] [VAR_17] = FUNC_3(VAR_39.dx);
   VAR_35[0][VAR_33] [VAR_18] = -FUNC_3(VAR_39.dy);
   VAR_35[0][VAR_34] [VAR_17] = FUNC_3(VAR_40.dx);
   VAR_35[0][VAR_34] [VAR_18] = -FUNC_3(VAR_40.dy);

   FUNC_0(VAR_36, VAR_16);

   if((VAR_38 & VAR_11) && (VAR_41.py > 120))
      FUNC_1(VAR_36, VAR_16);


   if((VAR_38 & VAR_10) &&
         (VAR_38 & VAR_9) &&
         (VAR_38 & VAR_7) &&
         (VAR_38 & VAR_8))
      FUNC_2(VAR_0, ((void*)0));

}
