
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_mon; unsigned char tm_mday; unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct device {int dummy; } ;
struct cmos_rtc {scalar_t__ mon_alrm; scalar_t__ day_alrm; int irq; } ;


 int FUNC_0 (unsigned char,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (struct cmos_rtc*,int ) ;
 int FUNC_3 (struct cmos_rtc*,int ) ;
 struct cmos_rtc* FUNC_4 (struct device*) ;
 int FUNC_5 (unsigned char,unsigned char,unsigned char) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct cmos_rtc *VAR_8 = FUNC_4(VAR_6);
 unsigned char VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 if (!FUNC_6(VAR_8->irq))
  return -VAR_0;





 VAR_9 = VAR_7->time.tm_mon + 1;
 VAR_9 = (VAR_9 <= 12) ? FUNC_1(VAR_9) : 0xff;

 VAR_10 = VAR_7->time.tm_mday;
 VAR_10 = (VAR_10 >= 1 && VAR_10 <= 31) ? FUNC_1(VAR_10) : 0xff;

 VAR_11 = VAR_7->time.tm_hour;
 VAR_11 = (VAR_11 < 24) ? FUNC_1(VAR_11) : 0xff;

 VAR_12 = VAR_7->time.tm_min;
 VAR_12 = (VAR_12 < 60) ? FUNC_1(VAR_12) : 0xff;

 VAR_13 = VAR_7->time.tm_sec;
 VAR_13 = (VAR_13 < 60) ? FUNC_1(VAR_13) : 0xff;

 FUNC_7(&VAR_5);


 FUNC_2(VAR_8, VAR_1);


 FUNC_0(VAR_11, VAR_2);
 FUNC_0(VAR_12, VAR_3);
 FUNC_0(VAR_13, VAR_4);


 if (VAR_8->day_alrm) {
  FUNC_0(VAR_10, VAR_8->day_alrm);
  if (VAR_8->mon_alrm)
   FUNC_0(VAR_9, VAR_8->mon_alrm);
 }




 FUNC_5(VAR_7->time.tm_hour, VAR_7->time.tm_min, VAR_7->time.tm_sec);

 if (VAR_7->enabled)
  FUNC_3(VAR_8, VAR_1);

 FUNC_8(&VAR_5);

 return 0;
}
