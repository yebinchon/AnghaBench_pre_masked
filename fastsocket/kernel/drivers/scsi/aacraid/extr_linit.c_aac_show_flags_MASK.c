
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int SupportedOptions2; } ;
struct aac_dev {scalar_t__ msi; TYPE_1__ supplement_adapter_info; scalar_t__ jbod; scalar_t__ raw_io_64; scalar_t__ raw_io_interface; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,char*) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
         struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6 = 0;
 struct aac_dev *VAR_7 = (struct aac_dev*)FUNC_0(VAR_3)->hostdata;

 if (FUNC_2(FUNC_1(VAR_2)))
  VAR_6 = FUNC_3(VAR_5, VAR_1, "dprintk\n");




 if (VAR_7->raw_io_interface && VAR_7->raw_io_64)
  VAR_6 += FUNC_3(VAR_5 + VAR_6, VAR_1 - VAR_6,
    "SAI_READ_CAPACITY_16\n");
 if (VAR_7->jbod)
  VAR_6 += FUNC_3(VAR_5 + VAR_6, VAR_1 - VAR_6, "SUPPORTED_JBOD\n");
 if (VAR_7->supplement_adapter_info.SupportedOptions2 &
  VAR_0)
  VAR_6 += FUNC_3(VAR_5 + VAR_6, VAR_1 - VAR_6,
    "SUPPORTED_POWER_MANAGEMENT\n");
 if (VAR_7->msi)
  VAR_6 += FUNC_3(VAR_5 + VAR_6, VAR_1 - VAR_6, "PCI_HAS_MSI\n");
 return VAR_6;
}
