
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;

 FUNC_1("hotkey_enable",
   "Hotkeys can be disabled through hotkey_mask");

 if (FUNC_0(VAR_4, 1, &VAR_6))
  return -VAR_0;

 if (VAR_6 == 0)
  return -VAR_1;

 return VAR_5;
}
