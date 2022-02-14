
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int FUNC_8 (char*,int,int,int,int) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_9(int VAR_15, size_t VAR_16)
{
 int VAR_17 = 0, VAR_18 = 0;
 u_int32_t VAR_19, VAR_20, VAR_21, VAR_22;
 u_int32_t VAR_23, VAR_24, VAR_25, VAR_26;
 u_int32_t VAR_27, VAR_28;
 u_int32_t VAR_29, VAR_30;
 u_int32_t VAR_31, VAR_32;

 FUNC_2(VAR_16 == FUNC_5(VAR_6) ||
     VAR_16 == FUNC_5(VAR_5));

 FUNC_0(VAR_12, VAR_0);


 VAR_19 = FUNC_7(VAR_8) >> VAR_11;
 VAR_20 = FUNC_7(VAR_7);
 VAR_21 = FUNC_7(VAR_6) << VAR_9;
 VAR_22 = FUNC_7(VAR_5);
 VAR_27 = VAR_19 + VAR_20 + VAR_21;

 VAR_23 = FUNC_3(VAR_8) >> VAR_11;
 VAR_24 = FUNC_3(VAR_7);
 VAR_25 = FUNC_3(VAR_6) << VAR_9;
 VAR_26 = FUNC_3(VAR_5);
 VAR_28 = VAR_23 + VAR_24 + VAR_25;


 if ((VAR_16 == FUNC_5(VAR_6) && VAR_27 >= VAR_13) ||
     (VAR_14 > 0 && VAR_16 == FUNC_5(VAR_5) &&
     (VAR_22 << VAR_10) >= VAR_14)) {
  FUNC_8("maxed out nclusters (%u >= %u) or njcl (%u >= %u)",
      VAR_27, VAR_13,
      (VAR_22 << VAR_10), VAR_14);
  return (0);
 }

 if (VAR_16 == FUNC_5(VAR_6)) {

  if (VAR_21 < FUNC_6(VAR_6))
   return (FUNC_6(VAR_6) - VAR_21);

  VAR_29 =
      ((VAR_27 - VAR_28) * 100) / VAR_27;
  VAR_30 = (VAR_27 * 100) / VAR_13;





  if (VAR_30 < VAR_2)
   VAR_31 = VAR_4;
  else
   VAR_31 = VAR_3;

  if (VAR_30 < 5) {

   VAR_17 = VAR_15;
  } else {

   if (FUNC_3(VAR_6) >= VAR_1 &&
       FUNC_7(VAR_6) >=
       VAR_1 + FUNC_6(VAR_6))
    return (0);


   if (VAR_15 >= FUNC_3(VAR_6))
    VAR_17 = VAR_15 - FUNC_3(VAR_6);
   if (VAR_15 > FUNC_7(VAR_6) - FUNC_6(VAR_6))
    VAR_18 = VAR_15 - (FUNC_7(VAR_6) -
        FUNC_6(VAR_6));

   VAR_17 = FUNC_1(VAR_17, VAR_18);





   VAR_32 = 100 - (100 / (1 << VAR_31));
   if (VAR_29 > VAR_32)
    VAR_18 = ((VAR_27 + VAR_15) >> VAR_31) -
        VAR_28;
   VAR_17 = FUNC_1(VAR_17, VAR_18);
  }


  if (VAR_17 + VAR_21 >= FUNC_4(VAR_6))
   VAR_17 = FUNC_4(VAR_6) - VAR_21;
  if ((VAR_17 << 1) + VAR_27 >= VAR_13)
   VAR_17 = (VAR_13 - VAR_27) >> 1;
  FUNC_2((FUNC_7(VAR_6) + VAR_17) <= FUNC_4(VAR_6));
  FUNC_2(VAR_27 + (VAR_17 << 1) <= VAR_13);

 } else {
  FUNC_2(VAR_14 > 0);

  if (VAR_15 >= VAR_26)
   VAR_17 = VAR_15 - VAR_26;


  if (((VAR_22 + VAR_15) >> 1) > VAR_26)
   VAR_18 = ((VAR_22 + VAR_15) >> 1) - VAR_26;
  VAR_17 = FUNC_1(VAR_17, VAR_18);


  if ((VAR_17 + FUNC_7(VAR_5)) >= FUNC_4(VAR_5))
   VAR_17 = FUNC_4(VAR_5) - FUNC_7(VAR_5);
 }
 return (VAR_17);
}
