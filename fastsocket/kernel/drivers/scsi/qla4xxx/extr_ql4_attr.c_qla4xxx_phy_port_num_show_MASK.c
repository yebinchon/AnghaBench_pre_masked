
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int phy_port_num; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 struct scsi_qla_host* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct scsi_qla_host *VAR_5 = FUNC_3(FUNC_0(VAR_2));

 if (FUNC_1(VAR_5))
  return -VAR_0;

 return FUNC_2(VAR_4, VAR_1, "0x%04X\n", VAR_5->phy_port_num);
}
