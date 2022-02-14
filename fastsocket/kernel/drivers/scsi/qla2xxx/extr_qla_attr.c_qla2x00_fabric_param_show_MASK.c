
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {TYPE_1__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_4__ {int switch_cap; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_1(FUNC_0(VAR_1));

 return FUNC_2(VAR_3, VAR_0, "%d\n", VAR_4->hw->switch_cap);
}
