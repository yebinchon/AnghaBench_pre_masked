
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int* aux_firmware_revision; } ;
struct bmc_device {TYPE_1__ id; } ;
typedef int ssize_t ;


 struct bmc_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct bmc_device *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, 21, "0x%02x 0x%02x 0x%02x 0x%02x\n",
   VAR_3->id.aux_firmware_revision[3],
   VAR_3->id.aux_firmware_revision[2],
   VAR_3->id.aux_firmware_revision[1],
   VAR_3->id.aux_firmware_revision[0]);
}
