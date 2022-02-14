
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char* name; int type; int * ops; } ;
struct smu_fan_control {int fan_type; TYPE_1__ ctrl; int reg; int max; int min; } ;
struct device_node {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smu_fan_control*) ;
 struct smu_fan_control* FUNC_1 (int,int ) ;
 void* FUNC_2 (struct device_node*,char*,int *) ;
 int VAR_3 ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static struct smu_fan_control *FUNC_5(struct device_node *VAR_4,
           int VAR_5)
{
 struct smu_fan_control *VAR_6;
 const s32 *VAR_7;
 const u32 *VAR_8;
 const char *VAR_9;

 VAR_6 = FUNC_1(sizeof(struct smu_fan_control), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_6->ctrl.ops = &VAR_3;
 VAR_9 = FUNC_2(VAR_4, "location", ((void*)0));
 if (VAR_9 == ((void*)0))
  goto fail;

 VAR_6->fan_type = VAR_5;
 VAR_6->ctrl.type = VAR_5 ? VAR_1 : VAR_2;
 VAR_6->ctrl.name = ((void*)0);


 if (!FUNC_3(VAR_9, "Rear Fan 0") || !FUNC_3(VAR_9, "Rear Fan") ||
     !FUNC_3(VAR_9, "Rear fan 0") || !FUNC_3(VAR_9, "Rear fan") ||
     !FUNC_3(VAR_9, "CPU A EXHAUST"))
  VAR_6->ctrl.name = "cpu-rear-fan-0";
 else if (!FUNC_3(VAR_9, "Rear Fan 1") || !FUNC_3(VAR_9, "Rear fan 1") ||
   !FUNC_3(VAR_9, "CPU B EXHAUST"))
  VAR_6->ctrl.name = "cpu-rear-fan-1";
 else if (!FUNC_3(VAR_9, "Front Fan 0") || !FUNC_3(VAR_9, "Front Fan") ||
   !FUNC_3(VAR_9, "Front fan 0") || !FUNC_3(VAR_9, "Front fan") ||
   !FUNC_3(VAR_9, "CPU A INTAKE"))
  VAR_6->ctrl.name = "cpu-front-fan-0";
 else if (!FUNC_3(VAR_9, "Front Fan 1") || !FUNC_3(VAR_9, "Front fan 1") ||
   !FUNC_3(VAR_9, "CPU B INTAKE"))
  VAR_6->ctrl.name = "cpu-front-fan-1";
 else if (!FUNC_3(VAR_9, "CPU A PUMP"))
  VAR_6->ctrl.name = "cpu-pump-0";
 else if (!FUNC_3(VAR_9, "CPU B PUMP"))
  VAR_6->ctrl.name = "cpu-pump-1";
 else if (!FUNC_3(VAR_9, "Slots Fan") || !FUNC_3(VAR_9, "Slots fan") ||
   !FUNC_3(VAR_9, "EXPANSION SLOTS INTAKE"))
  VAR_6->ctrl.name = "slots-fan";
 else if (!FUNC_3(VAR_9, "Drive Bay") || !FUNC_3(VAR_9, "Drive bay") ||
   !FUNC_3(VAR_9, "DRIVE BAY A INTAKE"))
  VAR_6->ctrl.name = "drive-bay-fan";
 else if (!FUNC_3(VAR_9, "BACKSIDE"))
  VAR_6->ctrl.name = "backside-fan";


 if (!FUNC_3(VAR_9, "System Fan") || !FUNC_3(VAR_9, "System fan"))
  VAR_6->ctrl.name = "system-fan";
 else if (!FUNC_3(VAR_9, "CPU Fan") || !FUNC_3(VAR_9, "CPU fan"))
  VAR_6->ctrl.name = "cpu-fan";
 else if (!FUNC_3(VAR_9, "Hard Drive") || !FUNC_3(VAR_9, "Hard drive"))
  VAR_6->ctrl.name = "drive-bay-fan";
 else if (!FUNC_3(VAR_9, "HDD Fan"))
  VAR_6->ctrl.name = "hard-drive-fan";
 else if (!FUNC_3(VAR_9, "ODD Fan"))
  VAR_6->ctrl.name = "optical-drive-fan";


 if (VAR_6->ctrl.name == ((void*)0))
  goto fail;


 VAR_7 = FUNC_2(VAR_4, "min-value", ((void*)0));
 if (VAR_7 == ((void*)0))
  goto fail;
 VAR_6->min = *VAR_7;
 VAR_7 = FUNC_2(VAR_4, "max-value", ((void*)0));
 if (VAR_7 == ((void*)0))
  goto fail;
 VAR_6->max = *VAR_7;


 VAR_8 = FUNC_2(VAR_4, "reg", ((void*)0));
 if (VAR_8 == ((void*)0))
  goto fail;
 VAR_6->reg = *VAR_8;

 if (FUNC_4(&VAR_6->ctrl))
  goto fail;

 return VAR_6;
 fail:
 FUNC_0(VAR_6);
 return ((void*)0);
}
