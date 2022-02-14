
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;


 int FUNC_0 (unsigned char*) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 void* FUNC_1 (unsigned char) ;
 int FUNC_2 (struct rtc_time*,int ,int) ;
 int FUNC_3 (struct device*,unsigned char*,int ) ;
 int FUNC_4 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, struct rtc_time *VAR_7)
{
 int VAR_8;
 unsigned char VAR_9[] = { VAR_4, VAR_2, VAR_1,
    VAR_0, VAR_3, VAR_5 };

 VAR_8 = FUNC_3(VAR_6, VAR_9, FUNC_0(VAR_9));
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->tm_sec = FUNC_1(VAR_9[0]);
 VAR_7->tm_min = FUNC_1(VAR_9[1]);
 VAR_7->tm_hour = FUNC_1(VAR_9[2]);

 VAR_7->tm_mday = FUNC_1(VAR_9[3]);
 VAR_7->tm_mon = FUNC_1(VAR_9[4]) - 1;
 VAR_7->tm_year = FUNC_1(VAR_9[5]) + 100;





 return FUNC_4(VAR_7);
}
