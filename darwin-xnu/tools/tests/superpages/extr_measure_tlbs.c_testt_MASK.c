
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef unsigned int clock_t ;
typedef scalar_t__ boolean_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__*,int ,int) ;
 int FUNC_4 (int ,scalar_t__,int ) ;

clock_t
FUNC_5(boolean_t VAR_10, int VAR_11, int VAR_12, int VAR_13) {
 static int VAR_14;
 char *VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 mach_vm_address_t VAR_21 = 0;
 int VAR_22 = VAR_13/4;
 mach_vm_size_t VAR_23 = FUNC_0(VAR_22*VAR_2);
 int VAR_24;

 VAR_24 = FUNC_3(FUNC_2(), &VAR_21, VAR_23, VAR_7 | (VAR_10? VAR_9 : VAR_8));

 if (!VAR_21)
  return 0;

 VAR_15 = (char*)(long)VAR_21;


 for (VAR_17 = 0; VAR_17<VAR_22; VAR_17++) {
  VAR_14 += VAR_15[VAR_17*VAR_2];
 }

 clock_t VAR_25 = FUNC_1();
 switch (VAR_11) {
  case 0:
   if (VAR_12) {
    for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
     for (VAR_17 = 0; VAR_17<VAR_22; VAR_17++) {
      VAR_15[VAR_17*VAR_2] = VAR_16 & 0xFF;
     }
    }
   } else {
    for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
     for (VAR_17 = 0; VAR_17<VAR_22; VAR_17++) {
      VAR_14 += VAR_15[VAR_17*VAR_2];
     }
    }
   }
   break;
  case 1:
   if (VAR_12) {
    for (VAR_16 = 0; VAR_16 < VAR_5/VAR_2; VAR_16++) {
     for (VAR_19 = 0; VAR_19<VAR_22*VAR_2; VAR_19++) {
      VAR_15[VAR_19] = VAR_16 & 0xFF;
     }
    }
   } else {
    for (VAR_16 = 0; VAR_16 < VAR_5/VAR_2; VAR_16++) {
     for (VAR_19 = 0; VAR_19<VAR_22*VAR_2; VAR_19++) {
      VAR_14 += VAR_15[VAR_19];
     }
    }
   }
   break;
  case 2:



   VAR_17 = 0;
   if (VAR_12) {
    for (VAR_16 = 0; VAR_16 < VAR_6*VAR_22; VAR_16++) {
     VAR_17 += 15485863;
     VAR_18 = VAR_17 % (VAR_22*VAR_2/128);

     for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
      VAR_15[VAR_18*128 +VAR_19] = VAR_16 & 0xFF;
     }
    }
   } else {
    for (VAR_16 = 0; VAR_16 < VAR_6*VAR_22; VAR_16++) {
     VAR_17 += 15485863;
     VAR_18 = VAR_17 % (VAR_22*VAR_2/128);
     for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
      VAR_14 += VAR_15[VAR_18*128 +VAR_19];
     }
    }
   }
   break;
 }
 clock_t VAR_26 = FUNC_1();
 FUNC_4(FUNC_2(), VAR_21, VAR_23);
 VAR_20 = VAR_26-VAR_25;
 VAR_20 /= VAR_22;
 return VAR_20;
}
