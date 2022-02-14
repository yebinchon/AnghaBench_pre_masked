
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;

 int VAR_1 ;


 struct wm8350* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (struct wm8350*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct wm8350 *VAR_5 = FUNC_0(VAR_2);
 char *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_0) &
     VAR_1;
 switch (VAR_7) {
 case 129:
  VAR_6 = "Charger Off";
  break;
 case 128:
  VAR_6 = "Trickle Charging";
  break;
 case 130:
  VAR_6 = "Fast Charging";
  break;
 default:
  return 0;
 }

 return FUNC_1(VAR_4, "%s\n", VAR_6);
}
