
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qla_hw_data {TYPE_1__* isp_ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_6__ {char* (* fw_version_str ) (TYPE_2__*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 char* FUNC_3 (TYPE_2__*,char*) ;
 char* FUNC_4 (TYPE_2__*,char*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_1(FUNC_0(VAR_1));
 struct qla_hw_data *VAR_5 = VAR_4->hw;
 char VAR_6[128];

 return FUNC_2(VAR_3, VAR_0, "%s\n",
     VAR_5->isp_ops->fw_version_str(VAR_4, VAR_6));
}
