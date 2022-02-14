
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
FUNC_0() {
            int *VAR_0;
            int *VAR_1;
            int *VAR_2;
            int *VAR_3;
   register int *VAR_4;
            int *VAR_5;
   register int *VAR_6;
            int *VAR_7;
   register int *VAR_8;
            int *VAR_9;
   register int *VAR_10;
            int *VAR_11;
   register int *VAR_12;
            int *VAR_13;
   register int *VAR_14;
            int *VAR_15;
   register int *VAR_16;
            int *VAR_17;
   register int *VAR_18;
            int *VAR_19;
   register int *VAR_20;
            int *VAR_21;
   register int *VAR_22;
            int *VAR_23;
   register int *VAR_24;
            int *VAR_25;
   register int *VAR_26;
            int *VAR_27;
   register int *VAR_28;
            int *VAR_29;
   register int *VAR_30;
            int *VAR_31;
   register int *VAR_32;
            int *VAR_33;
   register int *VAR_34;
            int *VAR_35;
            int *VAR_36;
            int *VAR_37;
            int *VAR_38;

   int VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44[22];

   VAR_0 = (int *)&VAR_0;
   VAR_1 = (int *)&VAR_1;
   VAR_2 = (int *)&VAR_2;
   VAR_3 = (int *)&VAR_3;
   VAR_4 = (int *)&VAR_5;
   VAR_5 = (int *)&VAR_5;
   VAR_6 = (int *)&VAR_7;
   VAR_7 = (int *)&VAR_7;
   VAR_8 = (int *)&VAR_9;
   VAR_9 = (int *)&VAR_9;
   VAR_10 = (int *)&VAR_11;
   VAR_11 = (int *)&VAR_11;
   VAR_12 = (int *)&VAR_13;
   VAR_13 = (int *)&VAR_13;
   VAR_14 = (int *)&VAR_15;
   VAR_15 = (int *)&VAR_15;
   VAR_16 = (int *)&VAR_17;
   VAR_17 = (int *)&VAR_17;
   VAR_18 = (int *)&VAR_19;
   VAR_19 = (int *)&VAR_19;
   VAR_20 = (int *)&VAR_21;
   VAR_21 = (int *)&VAR_21;
   VAR_22 = (int *)&VAR_23;
   VAR_23 = (int *)&VAR_23;
   VAR_24 = (int *)&VAR_25;
   VAR_25 = (int *)&VAR_25;
   VAR_26 = (int *)&VAR_27;
   VAR_27 = (int *)&VAR_27;
   VAR_28 = (int *)&VAR_29;
   VAR_29 = (int *)&VAR_29;
   VAR_30 = (int *)&VAR_31;
   VAR_31 = (int *)&VAR_31;
   VAR_32 = (int *)&VAR_33;
   VAR_33 = (int *)&VAR_33;
   VAR_34 = (int *)&VAR_35;
   VAR_35 = (int *)&VAR_35;
   VAR_36 = (int *)&VAR_36;
   VAR_37 = (int *)&VAR_37;
   VAR_38 = (int *)&VAR_38;

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
