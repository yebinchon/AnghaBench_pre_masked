
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_channel {int band; int max_power; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct rt2x00_dev*,int,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int,int,int,int ,int) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,int) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*,int,int ) ;
 int FUNC_6 (struct rt2x00_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_7 (struct rt2x00_dev*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct rt2x00_dev*,scalar_t__,int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct rt2x00_dev*,int ) ;
 int FUNC_11 (scalar_t__*,int ,int ) ;
 int FUNC_12 (int *,int ,int) ;

__attribute__((used)) static void FUNC_13(struct rt2x00_dev *VAR_19,
      struct ieee80211_channel *VAR_20,
      int VAR_21)
{
 u8 VAR_22, VAR_23;
 u16 VAR_24;
 u32 VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 enum ieee80211_band VAR_31 = VAR_20->band;





 VAR_29 = FUNC_4(VAR_19, VAR_31);
 VAR_29 += FUNC_3(VAR_19);






 VAR_29 += FUNC_5(VAR_19, VAR_21,
           VAR_20->max_power);
 if (!FUNC_10(VAR_19, VAR_7) &&
     !FUNC_10(VAR_19, VAR_8)) {
  FUNC_0(VAR_19, 1, &VAR_23);
  if (VAR_29 <= -12) {
   VAR_30 = 2;
   VAR_29 += 12;
  } else if (VAR_29 <= -6) {
   VAR_30 = 1;
   VAR_29 += 6;
  } else {
   VAR_30 = 0;
  }
  FUNC_12(&VAR_23, VAR_0, VAR_30);
  FUNC_1(VAR_19, 1, VAR_23);
 }

 VAR_26 = VAR_9;

 for (VAR_27 = 0; VAR_27 < VAR_6; VAR_27 += 2) {

  if (VAR_26 > VAR_10)
   break;

  FUNC_6(VAR_19, VAR_26, &VAR_25);


  FUNC_8(VAR_19, VAR_1 + VAR_27,
       &VAR_24);

  VAR_28 = VAR_27 ? 0 : 1;





  VAR_22 = FUNC_9(VAR_24,
          VAR_2);
  VAR_22 = FUNC_2(VAR_19, VAR_28, VAR_31,
          VAR_21, VAR_22, VAR_29);
  FUNC_11(&VAR_25, VAR_11, VAR_22);






  VAR_22 = FUNC_9(VAR_24,
          VAR_3);
  VAR_22 = FUNC_2(VAR_19, VAR_28, VAR_31,
          VAR_21, VAR_22, VAR_29);
  FUNC_11(&VAR_25, VAR_12, VAR_22);






  VAR_22 = FUNC_9(VAR_24,
          VAR_4);
  VAR_22 = FUNC_2(VAR_19, VAR_28, VAR_31,
          VAR_21, VAR_22, VAR_29);
  FUNC_11(&VAR_25, VAR_13, VAR_22);






  VAR_22 = FUNC_9(VAR_24,
          VAR_5);
  VAR_22 = FUNC_2(VAR_19, VAR_28, VAR_31,
          VAR_21, VAR_22, VAR_29);
  FUNC_11(&VAR_25, VAR_14, VAR_22);


  FUNC_8(VAR_19, VAR_1 + VAR_27 + 1,
       &VAR_24);

  VAR_28 = 0;





  VAR_22 = FUNC_9(VAR_24,
          VAR_2);
  VAR_22 = FUNC_2(VAR_19, VAR_28, VAR_31,
          VAR_21, VAR_22, VAR_29);
  FUNC_11(&VAR_25, VAR_15, VAR_22);






  VAR_22 = FUNC_9(VAR_24,
          VAR_3);
  VAR_22 = FUNC_2(VAR_19, VAR_28, VAR_31,
          VAR_21, VAR_22, VAR_29);
  FUNC_11(&VAR_25, VAR_16, VAR_22);






  VAR_22 = FUNC_9(VAR_24,
          VAR_4);
  VAR_22 = FUNC_2(VAR_19, VAR_28, VAR_31,
          VAR_21, VAR_22, VAR_29);
  FUNC_11(&VAR_25, VAR_17, VAR_22);






  VAR_22 = FUNC_9(VAR_24,
          VAR_5);
  VAR_22 = FUNC_2(VAR_19, VAR_28, VAR_31,
          VAR_21, VAR_22, VAR_29);
  FUNC_11(&VAR_25, VAR_18, VAR_22);

  FUNC_7(VAR_19, VAR_26, VAR_25);


  VAR_26 += 4;
 }
}
