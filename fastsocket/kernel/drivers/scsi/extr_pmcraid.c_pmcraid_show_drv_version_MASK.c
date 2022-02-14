
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,int ,char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(
 struct device *VAR_3,
 struct device_attribute *VAR_4,
 char *VAR_5
)
{
 return FUNC_0(VAR_5, VAR_0, "version: %s, build date: %s\n",
   VAR_2, VAR_1);
}
