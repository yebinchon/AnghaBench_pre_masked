
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,unsigned char*,int ,int ) ;
 int FUNC_3 (unsigned char*,int ) ;
 int FUNC_4 (unsigned char,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, struct rtc_time *VAR_6)
{
 unsigned char VAR_7;
 unsigned char VAR_8[VAR_0 + 1];
 int VAR_9;

 VAR_8[1] = FUNC_0(VAR_6->tm_sec);
 VAR_8[2] = FUNC_0(VAR_6->tm_min);
 VAR_8[3] = FUNC_0(VAR_6->tm_hour);
 VAR_8[4] = FUNC_0(VAR_6->tm_mday);
 VAR_8[5] = FUNC_0(VAR_6->tm_mon + 1);
 VAR_8[6] = FUNC_0(VAR_6->tm_year - 100);


 VAR_9 = FUNC_3(&VAR_7, VAR_2);
 if (VAR_9 < 0)
  goto out;

 VAR_7 &= ~VAR_1;
 FUNC_4(VAR_7, VAR_2);
 if (VAR_9 < 0)
  goto out;


 VAR_9 = FUNC_2(VAR_4, VAR_8,
   VAR_3, VAR_0);
 if (VAR_9 < 0) {
  FUNC_1(VAR_5, "rtc_set_time error %d\n", VAR_9);
  goto out;
 }


 VAR_7 |= VAR_1;
 VAR_9 = FUNC_4(VAR_7, VAR_2);

out:
 return VAR_9;
}
