
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_mon; int tm_mday; int tm_sec; int tm_min; int tm_hour; scalar_t__ tm_year; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (scalar_t__,int,int,int ,int ,int ) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct rtc_time *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_0, 1, 1, 0, 0, 0);
 VAR_4 = FUNC_0(VAR_2->tm_year + 1900, VAR_2->tm_mon + 1, VAR_2->tm_mday,
                      VAR_2->tm_hour, VAR_2->tm_min, VAR_2->tm_sec);

 FUNC_1(VAR_4 - VAR_3);

 return 0;
}
