
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct channel_info {scalar_t__ dir; } ;
typedef int ssize_t ;


 struct channel_info* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct channel_info *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, "%s\n", (VAR_3->dir ? "tx" : "rx"));
 return VAR_4;
}
