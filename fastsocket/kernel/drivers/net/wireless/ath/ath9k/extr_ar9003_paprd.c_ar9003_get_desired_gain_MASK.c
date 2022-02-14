
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (int ,int ,char*,int) ;

__attribute__((used)) static unsigned int FUNC_4(struct ath_hw *VAR_22, int VAR_23,
         int VAR_24)
{
 int VAR_25 = 0, VAR_26;
 int VAR_27, VAR_28;
 int VAR_29, VAR_30;
 int VAR_31, VAR_32;
 int VAR_33, VAR_34;
 int VAR_35, VAR_36 = 0;
 u32 VAR_37 = 0, VAR_38 = 0;

 FUNC_0(VAR_22, VAR_7,
      VAR_8);
 VAR_35 = FUNC_1(VAR_22, VAR_13,
           VAR_14);
 VAR_27 = FUNC_1(VAR_22, VAR_18,
         VAR_19);
 VAR_28 = FUNC_1(VAR_22, VAR_18,
        VAR_20);
 VAR_29 = FUNC_1(VAR_22, VAR_15,
      VAR_16);
 VAR_30 = FUNC_1(VAR_22, VAR_15,
     VAR_17);
 VAR_31 = FUNC_1(VAR_22, VAR_0,
         VAR_1);
 VAR_32 = FUNC_1(VAR_22, VAR_0,
        VAR_2);

 switch (VAR_23) {
 case 0:
  VAR_37 = VAR_9;
  VAR_38 = VAR_3;
  break;
 case 1:
  VAR_37 = VAR_10;
  VAR_38 = VAR_4;
  break;
 case 2:
  VAR_37 = VAR_11;
  VAR_38 = VAR_5;
  break;
 default:
  FUNC_3(FUNC_2(VAR_22), VAR_21,
   "Invalid chainmask: %d\n", VAR_23);
  break;
 }

 VAR_25 = FUNC_1(VAR_22, VAR_37,
      VAR_12);
 VAR_26 = FUNC_1(VAR_22, VAR_38,
      VAR_6);

 if (VAR_25 >= 128)
  VAR_25 = VAR_25 - 256;

 VAR_33 = (VAR_27 * (VAR_31 - VAR_29) +
        (256 / 2)) / 256;
 VAR_34 = (VAR_28 * (VAR_32 - VAR_30) +
        (128 / 2)) / 128;
 VAR_36 = VAR_24 - VAR_25 - VAR_33 -
     VAR_34 + VAR_35 + VAR_26;

 return VAR_36;
}
