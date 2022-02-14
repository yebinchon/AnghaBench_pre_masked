
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,int,int,int,int*,int*,int*,int*) ;
 int FUNC_1 (struct ath_hw*,int,int*,int*,int*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,int,int,int,int,...) ;
 int FUNC_4 (int,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct ath_hw *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;
 int VAR_10[VAR_0],
     VAR_11[VAR_0],
     VAR_12[VAR_0], VAR_13[VAR_0];
 int VAR_14[VAR_0],
     VAR_15[VAR_0],
     VAR_16[VAR_0], VAR_17[VAR_0];
 int VAR_18;
 int VAR_19[VAR_0],
     VAR_20[VAR_0], VAR_21[VAR_0];
 int VAR_22, VAR_23, VAR_24, VAR_25;
 struct ath_common *VAR_26 = FUNC_2(VAR_4);

 VAR_9 = (VAR_5 >= 4000);
 if (VAR_9)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_10[VAR_6] = 0;
  VAR_14[VAR_6] = 100000;
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   if (!FUNC_0(VAR_4, VAR_9, VAR_7, VAR_6,
          &VAR_22, &VAR_23,
          &VAR_24, &VAR_25)) {
    VAR_18 = VAR_5 - VAR_22;





    if (VAR_18 <= 0) {
     if (VAR_14[VAR_6] <= 0 ||
         VAR_14[VAR_6] >= 100000 ||
         VAR_18 >
         (VAR_5 - VAR_14[VAR_6])) {




      VAR_14[VAR_6] = VAR_22;
      VAR_15[VAR_6] =
          VAR_23;
      VAR_16[VAR_6] =
          VAR_24;
      VAR_17[VAR_6] = VAR_25;
     }
    }
    if (VAR_18 >= 0) {
     if (VAR_10[VAR_6] <= 0
         || VAR_18 <
         (VAR_5 - VAR_10[VAR_6])) {




      VAR_10[VAR_6] = VAR_22;
      VAR_11[VAR_6] =
          VAR_23;
      VAR_12[VAR_6] =
          VAR_24;
      VAR_13[VAR_6] = VAR_25;
     }
    }
   }
  }
 }


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_3(VAR_26, VAR_3, "ch=%d f=%d low=%d %d h=%d %d\n",
   VAR_6, VAR_5, VAR_10[VAR_6],
   VAR_11[VAR_6], VAR_14[VAR_6],
   VAR_15[VAR_6]);

  if (VAR_14[VAR_6] == VAR_10[VAR_6]) {
   VAR_19[VAR_6] = VAR_11[VAR_6];
   VAR_20[VAR_6] = VAR_13[VAR_6];
   VAR_21[VAR_6] = VAR_12[VAR_6];
  }

  else if (VAR_5 - VAR_10[VAR_6] < 1000) {

   if (VAR_14[VAR_6] - VAR_5 < 1000) {

    VAR_19[VAR_6] = FUNC_4(VAR_5,
      VAR_10[VAR_6],
      VAR_14[VAR_6],
      VAR_11[VAR_6],
      VAR_15[VAR_6]);

    VAR_21[VAR_6] = FUNC_4(VAR_5,
      VAR_10[VAR_6],
      VAR_14[VAR_6],
      VAR_12[VAR_6],
      VAR_16[VAR_6]);

    VAR_20[VAR_6] = FUNC_4(VAR_5,
      VAR_10[VAR_6],
      VAR_14[VAR_6],
      VAR_13[VAR_6],
      VAR_17[VAR_6]);
   }

   else {
    VAR_19[VAR_6] = VAR_11[VAR_6];
    VAR_21[VAR_6] = VAR_12[VAR_6];
    VAR_20[VAR_6] = VAR_13[VAR_6];
   }
  }

  else if (VAR_14[VAR_6] - VAR_5 < 1000) {
   VAR_19[VAR_6] = VAR_15[VAR_6];
   VAR_21[VAR_6] = VAR_16[VAR_6];
   VAR_20[VAR_6] = VAR_17[VAR_6];
  } else {
   VAR_19[VAR_6] = 0;
   VAR_21[VAR_6] = 0;
   VAR_20[VAR_6] = 0;
  }
 }

 FUNC_1(VAR_4, VAR_5, VAR_19, VAR_20,
      VAR_21);

 FUNC_3(VAR_26, VAR_3,
  "for frequency=%d, calibration correction = %d %d %d\n",
  VAR_5, VAR_19[0], VAR_19[1], VAR_19[2]);

 return 0;
}
