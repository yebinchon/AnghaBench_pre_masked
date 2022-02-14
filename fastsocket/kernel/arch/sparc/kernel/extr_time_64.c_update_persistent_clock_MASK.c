
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; } ;
struct rtc_device {int dummy; } ;


 int FUNC_0 (struct rtc_device*) ;
 struct rtc_device* FUNC_1 (char*) ;
 int FUNC_2 (struct rtc_device*,int ) ;

int FUNC_3(struct timespec VAR_0)
{
 struct rtc_device *VAR_1 = FUNC_1("rtc0");
 int VAR_2 = -1;

 if (VAR_1) {
  VAR_2 = FUNC_2(VAR_1, VAR_0.tv_sec);
  FUNC_0(VAR_1);
 }

 return VAR_2;
}
