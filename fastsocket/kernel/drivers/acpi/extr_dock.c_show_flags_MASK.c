
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {scalar_t__ platform_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct dock_station *VAR_4 = *((struct dock_station **)
  VAR_1->platform_data);
 return FUNC_0(VAR_3, VAR_0, "%d\n", VAR_4->flags);

}
