
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_wday; scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; int tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct ds1305 {int spi; int hr12; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,char*,int ,int ,int ,int ,int ,int ,int ) ;
 struct ds1305* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*,char*,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,int,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct ds1305 *VAR_5 = FUNC_2(VAR_3);
 u8 VAR_6[1 + VAR_0];
 u8 *VAR_7 = VAR_6;

 FUNC_3(VAR_3, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "write", VAR_4->tm_sec, VAR_4->tm_min,
  VAR_4->tm_hour, VAR_4->tm_mday,
  VAR_4->tm_mon, VAR_4->tm_year, VAR_4->tm_wday);


 *VAR_7++ = VAR_2 | VAR_1;

 *VAR_7++ = FUNC_0(VAR_4->tm_sec);
 *VAR_7++ = FUNC_0(VAR_4->tm_min);
 *VAR_7++ = FUNC_4(VAR_5->hr12, VAR_4->tm_hour);
 *VAR_7++ = (VAR_4->tm_wday < 7) ? (VAR_4->tm_wday + 1) : 1;
 *VAR_7++ = FUNC_0(VAR_4->tm_mday);
 *VAR_7++ = FUNC_0(VAR_4->tm_mon + 1);
 *VAR_7++ = FUNC_0(VAR_4->tm_year - 100);

 FUNC_1(VAR_3, "%s: %02x %02x %02x, %02x %02x %02x %02x\n",
  "write", VAR_6[1], VAR_6[2], VAR_6[3],
  VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7]);


 return FUNC_5(VAR_5->spi, VAR_6, sizeof VAR_6,
   ((void*)0), 0);
}
