
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int pan_angle; int tilt_angle; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct pwc_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct pwc_device *VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, "%d %d\n", VAR_3->pan_angle, VAR_3->tilt_angle);
}
