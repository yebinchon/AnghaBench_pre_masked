
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const u8 ;
struct rt2x00_dev {int cap_flags; } ;
struct rf_channel {char const rf1; char const rf3; int rf2; int channel; } ;
struct ieee80211_conf {int dummy; } ;
struct channel_info {scalar_t__ default_power1; int default_power2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*,int,char const*) ;
 int FUNC_2 (struct rt2x00_dev*,int,char const) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_4 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_5 (char const*,int ,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct rt2x00_dev *VAR_14,
      struct ieee80211_conf *VAR_15,
      struct rf_channel *VAR_16,
      struct channel_info *VAR_17)
{
 u8 VAR_18;

 FUNC_2(VAR_14, 8, VAR_16->rf1);
 FUNC_2(VAR_14, 9, VAR_16->rf3);
 FUNC_1(VAR_14, 11, &VAR_18);
 FUNC_5(&VAR_18, VAR_3, VAR_16->rf2);
 FUNC_2(VAR_14, 11, VAR_18);

 FUNC_1(VAR_14, 49, &VAR_18);
 if (VAR_17->default_power1 > VAR_1)
  FUNC_5(&VAR_18, VAR_10, VAR_1);
 else
  FUNC_5(&VAR_18, VAR_10, VAR_17->default_power1);
 FUNC_2(VAR_14, 49, VAR_18);

 if (FUNC_3(VAR_14, VAR_13)) {
  FUNC_1(VAR_14, 50, &VAR_18);
  if (VAR_17->default_power1 > VAR_1)
   FUNC_5(&VAR_18, VAR_11, VAR_1);
  else
   FUNC_5(&VAR_18, VAR_11,
       VAR_17->default_power2);
  FUNC_2(VAR_14, 50, VAR_18);
 }

 FUNC_1(VAR_14, 1, &VAR_18);
 if (FUNC_3(VAR_14, VAR_13)) {
  FUNC_5(&VAR_18, VAR_7, 1);
  FUNC_5(&VAR_18, VAR_9, 1);
 }
 FUNC_5(&VAR_18, VAR_5, 1);
 FUNC_5(&VAR_18, VAR_4, 1);
 FUNC_5(&VAR_18, VAR_6, 1);
 FUNC_5(&VAR_18, VAR_8, 1);
 FUNC_2(VAR_14, 1, VAR_18);

 FUNC_0(VAR_14);

 if (VAR_16->channel <= 14) {
  int VAR_19 = VAR_16->channel-1;

  if (FUNC_6(VAR_0, &VAR_14->cap_flags)) {
   if (FUNC_4(VAR_14, VAR_12, VAR_2)) {

    static const char VAR_20[] = {0x83, 0x83,
     0x83, 0x73, 0x73, 0x63, 0x53, 0x53,
     0x53, 0x43, 0x43, 0x43, 0x43, 0x43};
    static const char VAR_21[] = {0x0e, 0x0e,
     0x0e, 0x0e, 0x0e, 0x0b, 0x0a, 0x09,
     0x07, 0x07, 0x07, 0x07, 0x07, 0x07};

    FUNC_2(VAR_14, 55,
         VAR_20[VAR_19]);
    FUNC_2(VAR_14, 59,
         VAR_21[VAR_19]);
   } else {
    static const char VAR_22[] = {0x8b, 0x8b, 0x8b,
     0x8b, 0x8b, 0x8b, 0x8b, 0x8a, 0x89,
     0x88, 0x88, 0x86, 0x85, 0x84};

    FUNC_2(VAR_14, 59, VAR_22[VAR_19]);
   }
  } else {
   if (FUNC_4(VAR_14, VAR_12, VAR_2)) {
    static const char VAR_23[] = {0x23, 0x23,
     0x23, 0x23, 0x13, 0x13, 0x03, 0x03,
     0x03, 0x03, 0x03, 0x03, 0x03, 0x03};
    static const char VAR_24[] = {0x07, 0x07,
     0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
     0x07, 0x07, 0x06, 0x05, 0x04, 0x04};

    FUNC_2(VAR_14, 55,
         VAR_23[VAR_19]);
    FUNC_2(VAR_14, 59,
         VAR_24[VAR_19]);
   } else if (FUNC_3(VAR_14, VAR_12) ||
       FUNC_3(VAR_14, VAR_13)) {
    static const char VAR_25[] = {0x8f, 0x8f,
     0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8d,
     0x8a, 0x88, 0x88, 0x87, 0x87, 0x86};

    FUNC_2(VAR_14, 59,
         VAR_25[VAR_19]);
   }
  }
 }
}
