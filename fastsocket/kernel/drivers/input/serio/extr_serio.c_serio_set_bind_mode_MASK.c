
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int manual_bind; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,size_t) ;
 struct serio* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct serio *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 VAR_6 = VAR_4;
 if (!FUNC_0(VAR_3, "manual", VAR_4)) {
  VAR_5->manual_bind = 1;
 } else if (!FUNC_0(VAR_3, "auto", VAR_4)) {
  VAR_5->manual_bind = 0;
 } else {
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
