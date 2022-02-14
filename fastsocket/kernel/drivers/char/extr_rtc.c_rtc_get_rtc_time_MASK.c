
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned int tm_sec; unsigned int tm_min; unsigned int tm_hour; unsigned int tm_mday; unsigned int tm_mon; unsigned int tm_year; unsigned int tm_wday; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 scalar_t__ FUNC_3 () ;
 int VAR_14 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct rtc_time *VAR_15)
{
 unsigned long VAR_16 = VAR_13, VAR_17;
 unsigned char VAR_18;
 while (FUNC_3() != 0 &&
        FUNC_6(VAR_13, VAR_16 + 2*VAR_0/100))
  FUNC_2();







 FUNC_4(&VAR_14, VAR_17);
 VAR_15->tm_sec = FUNC_0(VAR_10);
 VAR_15->tm_min = FUNC_0(VAR_8);
 VAR_15->tm_hour = FUNC_0(VAR_7);
 VAR_15->tm_mday = FUNC_0(VAR_3);
 VAR_15->tm_mon = FUNC_0(VAR_9);
 VAR_15->tm_year = FUNC_0(VAR_11);

 VAR_15->tm_wday = FUNC_0(VAR_4);




 VAR_18 = FUNC_0(VAR_2);
 FUNC_5(&VAR_14, VAR_17);

 if (!(VAR_18 & VAR_6) || VAR_1) {
  VAR_15->tm_sec = FUNC_1(VAR_15->tm_sec);
  VAR_15->tm_min = FUNC_1(VAR_15->tm_min);
  VAR_15->tm_hour = FUNC_1(VAR_15->tm_hour);
  VAR_15->tm_mday = FUNC_1(VAR_15->tm_mday);
  VAR_15->tm_mon = FUNC_1(VAR_15->tm_mon);
  VAR_15->tm_year = FUNC_1(VAR_15->tm_year);
  VAR_15->tm_wday = FUNC_1(VAR_15->tm_wday);
 }
 VAR_15->tm_year += VAR_12 - 1900;
 if (VAR_15->tm_year <= 69)
  VAR_15->tm_year += 100;

 VAR_15->tm_mon--;
}
