
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ bte_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int,int,int,int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,char*,int) ;

bte_result_t FUNC_7(u64 VAR_5, u64 VAR_6, u64 VAR_7, u64 VAR_8)
{
 int VAR_9;
 u64 VAR_10;
 u64 VAR_11;
 u64 VAR_12;
 u64 VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 u64 VAR_16;
 u64 VAR_17;
 u64 VAR_18;
 bte_result_t VAR_19;
 char *VAR_20, *VAR_21;

 if (VAR_7 == 0) {
  return VAR_1;
 }


 VAR_21 = FUNC_5(VAR_7 + 3 * VAR_3, VAR_2);
 if (VAR_21 == ((void*)0)) {
  return VAR_0;
 }
 VAR_20 = (char *)FUNC_0((u64) VAR_21);

 VAR_12 = VAR_5 & VAR_4;
 VAR_9 = VAR_6 & VAR_4;
 if (VAR_12 == VAR_9) {







  VAR_10 = VAR_5 & ~VAR_4;
  VAR_13 = VAR_6;
  if (VAR_12) {
   VAR_14 =
       (VAR_7 >
        (VAR_3 -
         VAR_12) ? VAR_3
        - VAR_12 : VAR_7);
   VAR_11 = VAR_3;
  } else {
   VAR_14 = 0;
   VAR_11 = 0;
  }

  if (VAR_7 > VAR_14) {
   VAR_18 = (VAR_7 - VAR_14) & VAR_4;
   VAR_16 = VAR_3;

   VAR_15 = VAR_5 + VAR_7 - VAR_18;
   VAR_17 = VAR_6 + VAR_7 - VAR_18;

   if (VAR_17 == (VAR_13 + VAR_14)) {




    VAR_14 += VAR_18;
    VAR_11 += VAR_16;
   } else if (VAR_18 > 0) {
    VAR_19 = FUNC_2(VAR_15,
           FUNC_3((unsigned long)VAR_20),
           VAR_16, VAR_8, ((void*)0));
    if (VAR_19 != VAR_1) {
     FUNC_4(VAR_21);
     return VAR_19;
    }

    FUNC_6(FUNC_1(VAR_17),
           (char *)VAR_20, VAR_18);
   }
  } else {
   VAR_18 = 0;
   VAR_16 = 0;
  }

  if (VAR_7 > (VAR_14 + VAR_18)) {

   VAR_19 = FUNC_2((VAR_5 + VAR_14),
          (VAR_6 +
           VAR_14),
          (VAR_7 - VAR_14 -
           VAR_18), VAR_8, ((void*)0));
   if (VAR_19 != VAR_1) {
    FUNC_4(VAR_21);
    return VAR_19;
   }

  }
 } else {
  VAR_12 = VAR_5 & VAR_4;
  VAR_13 = VAR_6;
  VAR_14 = VAR_7;

  VAR_10 = VAR_5 - VAR_12;

  VAR_11 = FUNC_0(VAR_7 + VAR_12);
 }

 if (VAR_14 > 0) {
  VAR_19 = FUNC_2(VAR_10,
         FUNC_3((unsigned long)VAR_20), VAR_11,
         VAR_8, ((void*)0));
  if (VAR_19 != VAR_1) {
   FUNC_4(VAR_21);
   return VAR_19;
  }

  FUNC_6(FUNC_1(VAR_13), ((char *)VAR_20 +
          VAR_12), VAR_14);
 }
 FUNC_4(VAR_21);
 return VAR_1;
}
