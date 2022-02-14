
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
struct TYPE_4__ {TYPE_1__ FWVersion; } ;
struct MPT2SAS_ADAPTER {TYPE_2__ facts; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct MPT2SAS_ADAPTER* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int ,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct MPT2SAS_ADAPTER *VAR_5 = FUNC_1(VAR_4);

 return FUNC_2(VAR_3, VAR_0, "%02d.%02d.%02d.%02d\n",
     (VAR_5->facts.FWVersion.Word & 0xFF000000) >> 24,
     (VAR_5->facts.FWVersion.Word & 0x00FF0000) >> 16,
     (VAR_5->facts.FWVersion.Word & 0x0000FF00) >> 8,
     VAR_5->facts.FWVersion.Word & 0x000000FF);
}
