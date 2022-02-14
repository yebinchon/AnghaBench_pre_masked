
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int owner; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int ,int *,char*,int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_1 ;
 struct rtc_device* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;

struct rtc_device *FUNC_4(char *VAR_2)
{
 struct device *VAR_3;
 struct rtc_device *VAR_4 = ((void*)0);

 VAR_3 = FUNC_0(VAR_1, ((void*)0), VAR_2, VAR_0);
 if (VAR_3)
  VAR_4 = FUNC_2(VAR_3);

 if (VAR_4) {
  if (!FUNC_3(VAR_4->owner)) {
   FUNC_1(VAR_3);
   VAR_4 = ((void*)0);
  }
 }

 return VAR_4;
}
