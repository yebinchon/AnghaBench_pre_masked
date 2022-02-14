
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


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
 int VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (unsigned int) ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 unsigned long VAR_27 ;
 unsigned long VAR_28 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(u64 VAR_29[], int VAR_30,
          unsigned int VAR_31[], unsigned long VAR_32[])
{
 unsigned long VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 unsigned int VAR_40, VAR_41;
 int VAR_42;

 VAR_41 = 0;


 for (VAR_42 = 0; VAR_42 < VAR_30; ++VAR_42) {
  VAR_40 = (VAR_29[VAR_42] >> VAR_6) & VAR_5;
  if (VAR_40)
   VAR_41 |= 1 << VAR_40;
 }


 VAR_33 = VAR_25;
 VAR_34 = 0;


 for (VAR_42 = 0; VAR_42 < VAR_30; ++VAR_42) {
  VAR_40 = (VAR_29[VAR_42] >> VAR_6) & VAR_5;
  VAR_35 = (VAR_29[VAR_42] >> VAR_17) & VAR_16;
  VAR_36 = (VAR_29[VAR_42] >> VAR_2) & VAR_1;
  VAR_37 = VAR_29[VAR_42] & VAR_7;

  if (!VAR_40) {
   for (VAR_40 = 1; VAR_40 <= 4; ++VAR_40) {
    if (!(VAR_41 & (1 << VAR_40)))
     break;
   }

   VAR_41 |= 1 << VAR_40;
  }

  if (VAR_40 <= 4) {
   VAR_34 |= VAR_35 << FUNC_2(VAR_40);
   VAR_34 |= VAR_36 << FUNC_0(VAR_40);
   VAR_34 |= VAR_37 << FUNC_1(VAR_40);
  }

  if (VAR_29[VAR_42] & VAR_3) {
   VAR_38 = VAR_29[VAR_42] >> VAR_0;
   VAR_34 |= (VAR_38 & 1) << VAR_21;
   VAR_38 >>= 1;
   VAR_34 |= (VAR_38 & 1) << VAR_20;
  }

  if (VAR_29[VAR_42] & VAR_4) {
   VAR_33 |= VAR_22;

   VAR_39 = (VAR_29[VAR_42] >> VAR_9) & VAR_8;
   if (VAR_39) {
    VAR_33 |= (VAR_39 & 3) << VAR_24;
    VAR_33 |= (VAR_39 >> 2) << VAR_23;
   }
  }





  if (FUNC_3(VAR_29[VAR_42])) {
   VAR_34 |= (VAR_29[VAR_42] >> VAR_13) &
      VAR_12;
  } else {
   VAR_39 = (VAR_29[VAR_42] >> VAR_13) & VAR_12;
   VAR_33 |= VAR_39 << VAR_27;
   VAR_39 = (VAR_29[VAR_42] >> VAR_15) & VAR_14;
   VAR_33 |= VAR_39 << VAR_28;
   VAR_39 = (VAR_29[VAR_42] >> VAR_11) & VAR_10;
   VAR_33 |= VAR_39 << VAR_26;
  }

  VAR_31[VAR_42] = VAR_40 - 1;
 }


 VAR_32[0] = 0;


 if (VAR_41 & 2)
  VAR_32[0] = VAR_18;

 if (VAR_41 & 0x7c)
  VAR_32[0] |= VAR_19;

 VAR_32[1] = VAR_34;
 VAR_32[2] = VAR_33;

 return 0;
}
