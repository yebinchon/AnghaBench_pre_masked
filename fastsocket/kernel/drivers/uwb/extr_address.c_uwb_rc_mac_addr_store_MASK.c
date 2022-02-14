
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_mac_addr {int * data; } ;
struct TYPE_2__ {struct uwb_mac_addr mac_addr; int dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_dev {struct uwb_rc* rc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char const*,char*,int *,int *,int *,int *,int *,int *) ;
 struct uwb_dev* FUNC_3 (struct device*) ;
 int FUNC_4 (struct uwb_rc*,struct uwb_mac_addr*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct uwb_dev *VAR_5 = FUNC_3(VAR_1);
 struct uwb_rc *VAR_6 = VAR_5->rc;
 struct uwb_mac_addr VAR_7;
 ssize_t VAR_8;

 VAR_8 = FUNC_2(VAR_3, "%hhx:%hhx:%hhx:%hhx:%hhx:%hhx\n",
   &VAR_7.data[0], &VAR_7.data[1], &VAR_7.data[2],
   &VAR_7.data[3], &VAR_7.data[4], &VAR_7.data[5]);
 if (VAR_8 != 6) {
  VAR_8 = -VAR_0;
  goto out;
 }
 if (FUNC_1(VAR_7.data)) {
  FUNC_0(&VAR_6->uwb_dev.dev, "refusing to set multicast "
   "MAC address %s\n", VAR_3);
  VAR_8 = -VAR_0;
  goto out;
 }
 VAR_8 = FUNC_4(VAR_6, &VAR_7);
 if (VAR_8 == 0)
  VAR_6->uwb_dev.mac_addr = VAR_7;
out:
 return VAR_8 < 0 ? VAR_8 : VAR_4;
}
