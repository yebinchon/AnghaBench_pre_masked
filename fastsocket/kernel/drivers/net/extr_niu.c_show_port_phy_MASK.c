
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {struct niu_parent* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct niu_parent {scalar_t__ port_phy; int num_ports; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*,char*,...) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
        struct device_attribute *VAR_4, char *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_2(VAR_3);
 struct niu_parent *VAR_7 = VAR_6->dev.platform_data;
 u32 VAR_8 = VAR_7->port_phy;
 char *VAR_9 = VAR_5;
 int VAR_10;

 if (VAR_8 == VAR_1 ||
     VAR_8 == VAR_0)
  return 0;

 for (VAR_10 = 0; VAR_10 < VAR_7->num_ports; VAR_10++) {
  const char *VAR_11;
  int VAR_12;

  VAR_12 = FUNC_0(VAR_8, VAR_10);
  if (VAR_12 == VAR_2)
   VAR_11 = "10G";
  else
   VAR_11 = "1G";
  VAR_5 += FUNC_1(VAR_5,
          (VAR_10 == 0) ? "%s" : " %s",
          VAR_11);
 }
 VAR_5 += FUNC_1(VAR_5, "\n");
 return VAR_5 - VAR_9;
}
