
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 return FUNC_0(VAR_4, VAR_0, "%d\n",
  (VAR_1 != 0) ? VAR_1 : 1);
}
