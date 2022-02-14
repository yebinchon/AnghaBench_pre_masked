
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {TYPE_4__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_5__ {char* product_name; } ;
struct TYPE_7__ {char* model_number; TYPE_1__ mr; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
   char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_2(FUNC_1(VAR_1));

 if (FUNC_0(VAR_4->hw))
  return FUNC_3(VAR_3, VAR_0, "%s\n",
      VAR_4->hw->mr.product_name);

 return FUNC_3(VAR_3, VAR_0, "%s\n", VAR_4->hw->model_number);
}
