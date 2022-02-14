
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
struct ds1286_priv {int lock; } ;
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
 int FUNC_0 () ;
 void* FUNC_1 (int) ;
 struct ds1286_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (struct ds1286_priv*,int ) ;
 int FUNC_4 (struct ds1286_priv*,unsigned char,int ) ;
 unsigned long VAR_9 ;
 int FUNC_5 (struct rtc_time*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct ds1286_priv *VAR_12 = FUNC_2(VAR_10);
 unsigned char VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15 = VAR_9;
 if (FUNC_3(VAR_12, VAR_1) & VAR_7)
  while (FUNC_8(VAR_9, VAR_15 + 2*VAR_0/100))
   FUNC_0();







 FUNC_6(&VAR_12->lock, VAR_14);
 VAR_13 = FUNC_3(VAR_12, VAR_1);
 FUNC_4(VAR_12, (VAR_13|VAR_7), VAR_1);

 VAR_11->tm_sec = FUNC_3(VAR_12, VAR_6);
 VAR_11->tm_min = FUNC_3(VAR_12, VAR_4);
 VAR_11->tm_hour = FUNC_3(VAR_12, VAR_3) & 0x3f;
 VAR_11->tm_mday = FUNC_3(VAR_12, VAR_2);
 VAR_11->tm_mon = FUNC_3(VAR_12, VAR_5) & 0x1f;
 VAR_11->tm_year = FUNC_3(VAR_12, VAR_8);

 FUNC_4(VAR_12, VAR_13, VAR_1);
 FUNC_7(&VAR_12->lock, VAR_14);

 VAR_11->tm_sec = FUNC_1(VAR_11->tm_sec);
 VAR_11->tm_min = FUNC_1(VAR_11->tm_min);
 VAR_11->tm_hour = FUNC_1(VAR_11->tm_hour);
 VAR_11->tm_mday = FUNC_1(VAR_11->tm_mday);
 VAR_11->tm_mon = FUNC_1(VAR_11->tm_mon);
 VAR_11->tm_year = FUNC_1(VAR_11->tm_year);





 if (VAR_11->tm_year < 45)
  VAR_11->tm_year += 30;
 VAR_11->tm_year += 40;
 if (VAR_11->tm_year < 70)
  VAR_11->tm_year += 100;

 VAR_11->tm_mon--;

 return FUNC_5(VAR_11);
}
