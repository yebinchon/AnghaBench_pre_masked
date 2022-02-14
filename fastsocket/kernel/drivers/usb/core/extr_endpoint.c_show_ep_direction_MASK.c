
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_device {int desc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;
 struct ep_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct ep_device *VAR_3 = FUNC_1(VAR_0);
 char *VAR_4;

 if (FUNC_3(VAR_3->desc))
  VAR_4 = "both";
 else if (FUNC_2(VAR_3->desc))
  VAR_4 = "in";
 else
  VAR_4 = "out";
 return FUNC_0(VAR_2, "%s\n", VAR_4);
}
