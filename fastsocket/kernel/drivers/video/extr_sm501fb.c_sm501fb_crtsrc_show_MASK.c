
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501fb_info {scalar_t__ regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 struct sm501fb_info* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
          struct device_attribute *VAR_4, char *VAR_5)
{
 struct sm501fb_info *VAR_6 = FUNC_0(VAR_3);
 unsigned long VAR_7;

 VAR_7 = FUNC_1(VAR_6->regs + VAR_1);
 VAR_7 &= VAR_2;

 return FUNC_2(VAR_5, VAR_0, "%s\n", VAR_7 ? "crt" : "panel");
}
