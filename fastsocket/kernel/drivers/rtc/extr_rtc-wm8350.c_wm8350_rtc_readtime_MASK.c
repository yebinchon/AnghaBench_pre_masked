
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int time1 ;
struct wm8350 {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mon; int tm_mday; int tm_year; int tm_yday; } ;
struct device {int dummy; } ;


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
 int FUNC_0 (struct device*,char*,int,int,int,int,int) ;
 int FUNC_1 (struct device*,char*) ;
 struct wm8350* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (struct wm8350*,int ,int,int*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_14, struct rtc_time *VAR_15)
{
 struct wm8350 *VAR_16 = FUNC_2(VAR_14);
 u16 VAR_17[4], VAR_18[4];
 int VAR_19 = VAR_1, VAR_20;





 do {
  VAR_20 = FUNC_5(VAR_16, VAR_9,
     4, VAR_17);
  if (VAR_20 < 0)
   return VAR_20;
  VAR_20 = FUNC_5(VAR_16, VAR_9,
     4, VAR_18);
  if (VAR_20 < 0)
   return VAR_20;

  if (FUNC_3(VAR_17, VAR_18, sizeof(VAR_17)) == 0) {
   VAR_15->tm_sec = VAR_17[0] & VAR_10;

   VAR_15->tm_min = (VAR_17[0] & VAR_5)
       >> VAR_6;

   VAR_15->tm_hour = VAR_17[1] & VAR_4;

   VAR_15->tm_wday = ((VAR_17[1] >> VAR_3)
           & 0x7) - 1;

   VAR_15->tm_mon = ((VAR_17[2] & VAR_7)
          >> VAR_8) - 1;

   VAR_15->tm_mday = (VAR_17[2] & VAR_2);

   VAR_15->tm_year = ((VAR_17[3] & VAR_11)
           >> VAR_12) * 100;
   VAR_15->tm_year += VAR_17[3] & VAR_13;

   VAR_15->tm_yday = FUNC_4(VAR_15->tm_mday, VAR_15->tm_mon,
          VAR_15->tm_year);
   VAR_15->tm_year -= 1900;

   FUNC_0(VAR_14, "Read (%d left): %04x %04x %04x %04x\n",
    VAR_19,
    VAR_17[0], VAR_17[1], VAR_17[2], VAR_17[3]);

   return 0;
  }
 } while (VAR_19--);

 FUNC_1(VAR_14, "timed out reading RTC time\n");
 return -VAR_0;
}
