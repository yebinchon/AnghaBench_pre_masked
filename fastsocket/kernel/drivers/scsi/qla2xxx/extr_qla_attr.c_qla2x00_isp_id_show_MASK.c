
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* hw_version; } ;
struct qla_hw_data {int* product_id; TYPE_1__ mr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
      char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_2(FUNC_1(VAR_1));
 struct qla_hw_data *VAR_5 = VAR_4->hw;

 if (FUNC_0(VAR_4->hw))
  return FUNC_3(VAR_3, VAR_0, "%s\n",
      VAR_4->hw->mr.hw_version);

 return FUNC_3(VAR_3, VAR_0, "%04x %04x %04x %04x\n",
     VAR_5->product_id[0], VAR_5->product_id[1], VAR_5->product_id[2],
     VAR_5->product_id[3]);
}
