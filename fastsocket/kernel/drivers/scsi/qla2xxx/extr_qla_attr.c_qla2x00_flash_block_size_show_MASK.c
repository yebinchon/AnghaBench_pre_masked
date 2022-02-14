
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qla_hw_data {int fdt_block_size; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_1(FUNC_0(VAR_1));
 struct qla_hw_data *VAR_5 = VAR_4->hw;

 return FUNC_2(VAR_3, VAR_0, "0x%x\n", VAR_5->fdt_block_size);
}
