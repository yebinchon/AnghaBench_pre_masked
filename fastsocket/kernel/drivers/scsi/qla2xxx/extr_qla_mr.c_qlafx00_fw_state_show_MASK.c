
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int state ;
struct TYPE_10__ {TYPE_2__* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_8__ {int eeh_busy; } ;
struct TYPE_9__ {TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int ,TYPE_3__*,int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_5 (int ) ;

uint32_t
FUNC_6(struct device *VAR_3, struct device_attribute *VAR_4,
        char *VAR_5)
{
 scsi_qla_host_t *VAR_6 = FUNC_5(FUNC_0(VAR_3));
 int VAR_7 = VAR_0;
 uint32_t VAR_8[1];

 if (FUNC_3(VAR_6))
  FUNC_2(VAR_2, VAR_6, 0x70ce,
      "ISP reset active.\n");
 else if (!VAR_6->hw->flags.eeh_busy) {
  VAR_7 = FUNC_4(VAR_6, VAR_8);
 }
 if (VAR_7 != VAR_1)
  FUNC_1(VAR_8, -1, sizeof(VAR_8));

 return VAR_8[0];
}
