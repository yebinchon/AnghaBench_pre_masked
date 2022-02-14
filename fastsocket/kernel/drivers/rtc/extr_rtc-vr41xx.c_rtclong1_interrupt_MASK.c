
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct platform_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 struct rtc_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rtc_device*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct platform_device *VAR_9 = (struct platform_device *)VAR_8;
 struct rtc_device *VAR_10 = FUNC_0(VAR_9);
 unsigned long VAR_11 = VAR_6;

 FUNC_2(VAR_1, VAR_4);

 FUNC_1(VAR_3, VAR_11);
 FUNC_1(VAR_2, VAR_11 >> 16);

 FUNC_3(VAR_10, 1, VAR_5);

 return VAR_0;
}
