
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int BiosVersion; } ;
struct MPT2SAS_ADAPTER {TYPE_1__ bios_pg3; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 struct MPT2SAS_ADAPTER* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (char*,int ,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct MPT2SAS_ADAPTER *VAR_5 = FUNC_2(VAR_4);

 u32 VAR_6 = FUNC_1(VAR_5->bios_pg3.BiosVersion);

 return FUNC_3(VAR_3, VAR_0, "%02d.%02d.%02d.%02d\n",
     (VAR_6 & 0xFF000000) >> 24,
     (VAR_6 & 0x00FF0000) >> 16,
     (VAR_6 & 0x0000FF00) >> 8,
     VAR_6 & 0x000000FF);
}
