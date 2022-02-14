
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdp1cmd_struct ;
typedef int u8 ;
typedef int Vdp1 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, void *VAR_6,
   int(*VAR_7)(int VAR_8, int VAR_9, int VAR_10, void *VAR_11, Vdp1* VAR_12, vdp1cmd_struct * VAR_13, u8* VAR_14, u8* VAR_15), Vdp1* VAR_16, vdp1cmd_struct * VAR_17, u8 * VAR_18, u8* VAR_19) {
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_21 = VAR_20 = 0;
 VAR_24 = VAR_3 - VAR_1;
 VAR_25 = VAR_4 - VAR_2;
 VAR_22 = (VAR_24 >= 0) ? 1 : -1;
 VAR_23 = (VAR_25 >= 0) ? 1 : -1;



 if(FUNC_0(VAR_24) > 999 || FUNC_0(VAR_25) > 999)
  return VAR_0;

 if (FUNC_0(VAR_24) > FUNC_0(VAR_25)) {
  if (VAR_22 != VAR_23) VAR_24 = -VAR_24;

  for (; VAR_1 != VAR_3; VAR_1 += VAR_22, VAR_20++) {
         if (VAR_7 && VAR_7(VAR_1, VAR_2, VAR_20, VAR_6, VAR_16, VAR_17, VAR_18, VAR_19) != 0) return VAR_20 + 1;

   VAR_21 += VAR_25;
   if (FUNC_0(VAR_21) >= FUNC_0(VAR_24)) {
    VAR_21 -= VAR_24;
    VAR_2 += VAR_23;


    if (VAR_5) {
     VAR_20 ++;
     if (VAR_22 == VAR_23) {
      if (VAR_7 &&
                     VAR_7(VAR_1 + VAR_22, VAR_2 - VAR_23, VAR_20, VAR_6, VAR_16, VAR_17, VAR_18, VAR_19) != 0)
       return VAR_20 + 1;
     } else {
      if (VAR_7 &&
                     VAR_7(VAR_1, VAR_2, VAR_20, VAR_6, VAR_16, VAR_17, VAR_18, VAR_19) != 0)
       return VAR_20 + 1;
     }
    }
   }
  }


  if ( 1) {
         if (VAR_7) VAR_7(VAR_3, VAR_4, VAR_20, VAR_6, VAR_16, VAR_17, VAR_18, VAR_19);
   VAR_20 ++;
  }
 } else {
  if (VAR_22 != VAR_23) VAR_25 = -VAR_25;

  for (; VAR_2 != VAR_4; VAR_2 += VAR_23, VAR_20++) {
         if (VAR_7 && VAR_7(VAR_1, VAR_2, VAR_20, VAR_6, VAR_16, VAR_17, VAR_18, VAR_19) != 0) return VAR_20 + 1;

   VAR_21 += VAR_24;
   if (FUNC_0(VAR_21) >= FUNC_0(VAR_25)) {
    VAR_21 -= VAR_25;
    VAR_1 += VAR_22;

    if (VAR_5) {
     VAR_20 ++;
     if (VAR_23 == VAR_22) {
      if (VAR_7 &&
                     VAR_7(VAR_1, VAR_2, VAR_20, VAR_6, VAR_16, VAR_17, VAR_18, VAR_19) != 0)
       return VAR_20 + 1;
     } else {
      if (VAR_7 &&
                     VAR_7(VAR_1 - VAR_22, VAR_2 + VAR_23, VAR_20, VAR_6, VAR_16, VAR_17, VAR_18, VAR_19) != 0)
       return VAR_20 + 1;
     }
    }
   }
  }

  if ( 1) {
         if (VAR_7) VAR_7(VAR_3, VAR_4, VAR_20, VAR_6, VAR_16, VAR_17, VAR_18, VAR_19);
   VAR_20 ++;
  }
 }

 return VAR_20;
}
