
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int md_template_size; int md_dump_size; int fw_dump_len; int fw_dumped; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_2(FUNC_1(VAR_1));
 struct qla_hw_data *VAR_5 = VAR_4->hw;
 uint32_t VAR_6;

 if (!VAR_5->fw_dumped)
  VAR_6 = 0;
 else if (FUNC_0(VAR_5))
  VAR_6 = VAR_5->md_template_size + VAR_5->md_dump_size;
 else
  VAR_6 = VAR_5->fw_dump_len;

 return FUNC_3(VAR_3, VAR_0, "%d\n", VAR_6);
}
