
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_mday; int tm_mon; int tm_hour; } ;


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
 void* FUNC_0 (int) ;
 int VAR_11 ;
 int FUNC_1 (unsigned long,struct rtc_time*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(unsigned long VAR_12)
{
 struct rtc_time VAR_13;
 int VAR_14;
 unsigned long VAR_15;

 FUNC_1(VAR_12, &VAR_13);
 VAR_13.tm_year += 1900;

 FUNC_2(&VAR_11, VAR_15);

 FUNC_5(VAR_6, VAR_8);
 FUNC_5(VAR_6, VAR_8 | VAR_7);


 VAR_13.tm_sec = FUNC_0(VAR_13.tm_sec);
 FUNC_5(VAR_5, VAR_13.tm_sec);

 VAR_13.tm_min = FUNC_0(VAR_13.tm_min);
 FUNC_5(VAR_3, VAR_13.tm_min);

 VAR_13.tm_mday = FUNC_0(VAR_13.tm_mday);
 FUNC_5(VAR_0, VAR_13.tm_mday);


 VAR_13.tm_mon ++;
 VAR_13.tm_mon = FUNC_0(VAR_13.tm_mon);
 FUNC_5(VAR_4, VAR_13.tm_mon);


 VAR_14 = VAR_13.tm_year / 100;
 VAR_13.tm_year %= 100;
 FUNC_5(VAR_10, VAR_13.tm_year);
 FUNC_5(VAR_9, VAR_14);


 VAR_14 = FUNC_4(VAR_1);
 if (VAR_14 & VAR_2) {

  VAR_13.tm_hour = FUNC_0(VAR_13.tm_hour);
  VAR_14 = (VAR_14 & ~0x3f) | (VAR_13.tm_hour & 0x3f);
 } else {

  VAR_14 = VAR_14 & ~0x3f;
  if (VAR_13.tm_hour >= 12) {
   VAR_14 |= 0x20;
   VAR_13.tm_hour -= 12;
  }
  VAR_13.tm_hour = FUNC_0(VAR_13.tm_hour);
  VAR_14 |= VAR_13.tm_hour;
 }
 FUNC_5(VAR_1, VAR_14);

 FUNC_5(VAR_6, 0);
 FUNC_3(&VAR_11, VAR_15);

 return 0;
}
