
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct platform_device {int dev; int name; } ;


 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct platform_device*,struct rtc_device*) ;
 struct rtc_device* FUNC_6 (int ,int *,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct rtc_device *VAR_8;

 VAR_6 = FUNC_4();
 if (VAR_3 == 0) {
  VAR_3 = VAR_1 + (VAR_2 << 16);
  FUNC_2(&VAR_7->dev, "warning: initializing default clock divider/trim value\n");

  VAR_0 = 0;
 }

 FUNC_3(&VAR_7->dev, 1);

 VAR_8 = FUNC_6(VAR_7->name, &VAR_7->dev, &VAR_5,
    VAR_4);

 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_5(VAR_7, VAR_8);

 return 0;
}
