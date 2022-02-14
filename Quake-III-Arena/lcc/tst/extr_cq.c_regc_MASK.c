
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
FUNC_0() {
            char VAR_0;
            char VAR_1;
            char VAR_2;
            char VAR_3;
   register char VAR_4;
            char VAR_5;
   register char VAR_6;
            char VAR_7;
   register char VAR_8;
            char VAR_9;
   register char VAR_10;
            char VAR_11;
   register char VAR_12;
            char VAR_13;
   register char VAR_14;
            char VAR_15;
   register char VAR_16;
            char VAR_17;
   register char VAR_18;
            char VAR_19;
   register char VAR_20;
            char VAR_21;
   register char VAR_22;
            char VAR_23;
   register char VAR_24;
            char VAR_25;
   register char VAR_26;
            char VAR_27;
   register char VAR_28;
            char VAR_29;
   register char VAR_30;
            char VAR_31;
   register char VAR_32;
            char VAR_33;
   register char VAR_34;
            char VAR_35;
            char VAR_36;
            char VAR_37;
            char VAR_38;

   int VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44[22];
   VAR_0 = 0;
   VAR_1 = 1;
   VAR_2 = 2;
   VAR_3 = 3;
   VAR_4 = 4;
   VAR_5 = 5;
   VAR_6 = 6;
   VAR_7 = 7;
   VAR_8 = 8;
   VAR_9 = 9;
   VAR_10 = 10;
   VAR_11 = 11;
   VAR_12 = 12;
   VAR_13 = 13;
   VAR_14 = 14;
   VAR_15 = 15;
   VAR_16 = 16;
   VAR_17 = 17;
   VAR_18 = 18;
   VAR_19 = 19;
   VAR_20 = 20;
   VAR_21 = 21;
   VAR_22 = 22;
   VAR_23 = 23;
   VAR_24 = 24;
   VAR_25 = 25;
   VAR_26 = 26;
   VAR_27 = 27;
   VAR_28 = 28;
   VAR_29 = 29;
   VAR_30 = 30;
   VAR_31 = 31;
   VAR_32 = 32;
   VAR_33 = 33;
   VAR_34 = 34;
   VAR_35 = 35;
   VAR_36 = 36;
   VAR_37 = 37;
   VAR_38 = 38;

   VAR_44[0] = &VAR_1 - &VAR_0;
   VAR_44[1] = &VAR_2 - &VAR_1;
   VAR_44[2] = &VAR_3 - &VAR_2;
   VAR_44[3] = &VAR_5 - &VAR_3;
   VAR_44[4] = &VAR_7 - &VAR_5;
   VAR_44[5] = &VAR_9 - &VAR_7;
   VAR_44[6] = &VAR_11 - &VAR_9;
   VAR_44[7] = &VAR_13 - &VAR_11;
   VAR_44[8] = &VAR_15 - &VAR_13;
   VAR_44[9] = &VAR_17 - &VAR_15;
   VAR_44[10] = &VAR_19 - &VAR_17;
   VAR_44[11] = &VAR_21 - &VAR_19;
   VAR_44[12] = &VAR_23 - &VAR_21;
   VAR_44[13] = &VAR_25 - &VAR_23;
   VAR_44[14] = &VAR_27 - &VAR_25;
   VAR_44[15] = &VAR_29 - &VAR_27;
   VAR_44[16] = &VAR_31 - &VAR_29;
   VAR_44[17] = &VAR_33 - &VAR_31;
   VAR_44[18] = &VAR_35 - &VAR_33;
   VAR_44[19] = &VAR_36 - &VAR_35;
   VAR_44[20] = &VAR_37 - &VAR_36;
   VAR_44[21] = &VAR_38 - &VAR_37;
   VAR_40 = VAR_44[0];
   VAR_39 = 1;

   for (VAR_43=0; VAR_43<22; VAR_43++)
     switch (VAR_39) {
       case 1: if (VAR_44[VAR_43] != VAR_40) {
                VAR_41 = VAR_44[VAR_43];
                VAR_39 = 2;
                VAR_42 = 1;
               }
               break;
       case 2: if (VAR_44[VAR_43] == VAR_40) {
                VAR_39 = 3;
                break;
               }
               if (VAR_44[VAR_43] == VAR_41) {
                VAR_42 = VAR_42+1;
                break;
               }
               VAR_39 = 4;
               break;
       case 3: if (VAR_44[VAR_43] != VAR_40) VAR_39 = 4;
               break;
     }
   ;

   if (VAR_39 == 3) return 16-VAR_42;
   else return -1;
}
