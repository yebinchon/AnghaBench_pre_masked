
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int Word; } ;
struct TYPE_4__ {TYPE_1__ NvdataVersionDefault; } ;
struct MPT3SAS_ADAPTER {TYPE_2__ iounit_pg0; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 struct MPT3SAS_ADAPTER* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute
 *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct MPT3SAS_ADAPTER *VAR_5 = FUNC_2(VAR_4);

 return FUNC_3(VAR_3, VAR_0, "%08xh\n",
     FUNC_1(VAR_5->iounit_pg0.NvdataVersionDefault.Word));
}
