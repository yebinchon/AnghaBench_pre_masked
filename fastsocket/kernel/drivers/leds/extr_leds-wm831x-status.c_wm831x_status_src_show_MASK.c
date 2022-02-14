
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_status {int src; int mutex; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char**) ;
 struct led_classdev* FUNC_1 (struct device*) ;
 char** VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*,...) ;
 struct wm831x_status* FUNC_5 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct led_classdev *VAR_4 = FUNC_1(VAR_1);
 struct wm831x_status *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;
 ssize_t VAR_7 = 0;

 FUNC_2(&VAR_5->mutex);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++)
  if (VAR_6 == VAR_5->src)
   VAR_7 += FUNC_4(&VAR_3[VAR_7], "[%s] ", VAR_0[VAR_6]);
  else
   VAR_7 += FUNC_4(&VAR_3[VAR_7], "%s ", VAR_0[VAR_6]);

 FUNC_3(&VAR_5->mutex);

 VAR_7 += FUNC_4(&VAR_3[VAR_7], "\n");

 return VAR_7;
}
