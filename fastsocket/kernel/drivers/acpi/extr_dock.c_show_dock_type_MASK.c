
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {scalar_t__ platform_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_4,
  struct device_attribute *VAR_5, char *VAR_6)
{
 struct dock_station *VAR_7 = *((struct dock_station **)
  VAR_4->platform_data);
 char *VAR_8;

 if (VAR_7->flags & VAR_2)
  VAR_8 = "dock_station";
 else if (VAR_7->flags & VAR_0)
  VAR_8 = "ata_bay";
 else if (VAR_7->flags & VAR_1)
  VAR_8 = "battery_bay";
 else
  VAR_8 = "unknown";

 return FUNC_0(VAR_6, VAR_3, "%s\n", VAR_8);
}
