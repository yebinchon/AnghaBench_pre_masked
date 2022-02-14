
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_10__ {TYPE_2__* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_8__ {scalar_t__ eeh_busy; } ;
struct TYPE_9__ {TYPE_1__ flags; int thermal_support; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,TYPE_3__*,int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_3,
 struct device_attribute *VAR_4, char *VAR_5)
{
 scsi_qla_host_t *VAR_6 = FUNC_4(FUNC_0(VAR_3));
 uint16_t VAR_7 = 0;

 if (!VAR_6->hw->thermal_support) {
  FUNC_1(VAR_2, VAR_6, 0x70db,
      "Thermal not supported by this card.\n");
  goto done;
 }

 if (FUNC_3(VAR_6)) {
  FUNC_1(VAR_2, VAR_6, 0x70dc, "ISP reset active.\n");
  goto done;
 }

 if (VAR_6->hw->flags.eeh_busy) {
  FUNC_1(VAR_2, VAR_6, 0x70dd, "PCI EEH busy.\n");
  goto done;
 }

 if (FUNC_2(VAR_6, &VAR_7) == VAR_1)
  return FUNC_5(VAR_5, VAR_0, "%d\n", VAR_7);

done:
 return FUNC_5(VAR_5, VAR_0, "\n");
}
