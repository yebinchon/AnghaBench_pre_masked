
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_driver {int manual_bind; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,size_t) ;
 struct serio_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct serio_driver *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = VAR_3;
 if (!FUNC_0(VAR_2, "manual", VAR_3)) {
  VAR_4->manual_bind = 1;
 } else if (!FUNC_0(VAR_2, "auto", VAR_3)) {
  VAR_4->manual_bind = 0;
 } else {
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
