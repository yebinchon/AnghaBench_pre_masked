
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int state ;
typedef int ssize_t ;
struct TYPE_9__ {TYPE_7__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_8__ {int eeh_busy; } ;
struct TYPE_10__ {TYPE_1__ flags; } ;


 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int ,TYPE_2__*,int,char*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct device*,struct device_attribute*,char*) ;
 TYPE_2__* FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,char*,int,...) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_4, struct device_attribute *VAR_5,
    char *VAR_6)
{
 scsi_qla_host_t *VAR_7 = FUNC_7(FUNC_1(VAR_4));
 int VAR_8 = VAR_1;
 uint16_t VAR_9[5];
 uint32_t VAR_10;

 if (FUNC_0(VAR_7->hw)) {
  VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_6);
  return FUNC_8(VAR_6, VAR_0, "0x%x\n", VAR_10);
 }

 if (FUNC_5(VAR_7))
  FUNC_3(VAR_3, VAR_7, 0x707c,
      "ISP reset active.\n");
 else if (!VAR_7->hw->flags.eeh_busy)
  VAR_8 = FUNC_4(VAR_7, VAR_9);
 if (VAR_8 != VAR_2)
  FUNC_2(VAR_9, -1, sizeof(VAR_9));

 return FUNC_8(VAR_6, VAR_0, "0x%x 0x%x 0x%x 0x%x 0x%x\n", VAR_9[0],
     VAR_9[1], VAR_9[2], VAR_9[3], VAR_9[4]);
}
