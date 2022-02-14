
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int Major; int Minor; int revMajor; int revMinor; } ;
struct TYPE_5__ {TYPE_1__ tpm_version; int manufacturer_id; } ;
typedef TYPE_2__ cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,...) ;
 int FUNC_2 (struct device*,int ,TYPE_2__*,char*) ;

ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
        char *VAR_4)
{
 cap_t VAR_5;
 ssize_t VAR_6;
 char *VAR_7 = VAR_4;

 VAR_6 = FUNC_2(VAR_2, VAR_1, &VAR_5,
   "attempting to determine the manufacturer");
 if (VAR_6)
  return 0;
 VAR_7 += FUNC_1(VAR_7, "Manufacturer: 0x%x\n",
         FUNC_0(VAR_5.manufacturer_id));

 VAR_6 = FUNC_2(VAR_2, VAR_0, &VAR_5,
          "attempting to determine the 1.1 version");
 if (VAR_6)
  return 0;
 VAR_7 += FUNC_1(VAR_7,
         "TCG version: %d.%d\nFirmware version: %d.%d\n",
         VAR_5.tpm_version.Major, VAR_5.tpm_version.Minor,
         VAR_5.tpm_version.revMajor, VAR_5.tpm_version.revMinor);
 return VAR_7 - VAR_4;
}
