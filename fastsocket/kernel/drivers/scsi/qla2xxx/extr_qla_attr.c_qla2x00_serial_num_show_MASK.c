
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {char* serial_num; } ;
struct qla_hw_data {int serial0; int serial2; int serial1; TYPE_1__ mr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_2__*,char*,char*,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
   char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_4(FUNC_2(VAR_1));
 struct qla_hw_data *VAR_5 = VAR_4->hw;
 uint32_t VAR_6;

 if (FUNC_1(VAR_4->hw)) {
  return FUNC_5(VAR_3, VAR_0, "%s\n",
      VAR_4->hw->mr.serial_num);
 } else if (FUNC_0(VAR_5)) {
  FUNC_3(VAR_4, "SN", VAR_3, VAR_0);
  return FUNC_5(VAR_3, VAR_0, "%s\n", VAR_3);
 }

 VAR_6 = ((VAR_5->serial0 & 0x1f) << 16) | (VAR_5->serial2 << 8) | VAR_5->serial1;
 return FUNC_5(VAR_3, VAR_0, "%c%05d\n", 'A' + VAR_6 / 100000,
     VAR_6 % 100000);
}
