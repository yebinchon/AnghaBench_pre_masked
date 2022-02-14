
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int resend_igmp; } ;
struct bonding {TYPE_1__ params; TYPE_2__* dev; } ;
typedef int ssize_t ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char const*,char*,int*) ;
 struct bonding* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6 = VAR_4;
 struct bonding *VAR_7 = FUNC_3(VAR_1);

 if (FUNC_2(VAR_3, "%d", &VAR_5) != 1) {
  FUNC_0("%s: no resend_igmp value specified.\n",
         VAR_7->dev->name);
  VAR_6 = -VAR_0;
  goto out;
 }

 if (VAR_5 < 0 || VAR_5 > 255) {
  FUNC_0("%s: Invalid resend_igmp value %d not in range 0-255; rejected.\n",
         VAR_7->dev->name, VAR_5);
  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_1("%s: Setting resend_igmp to %d.\n",
  VAR_7->dev->name, VAR_5);
 VAR_7->params.resend_igmp = VAR_5;
out:
 return VAR_6;
}
