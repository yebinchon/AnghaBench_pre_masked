
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int port0; } ;
struct qla_hw_data {int port_no; int portnum; void* fw_srisc_address; TYPE_1__ flags; int device_type; TYPE_2__* pdev; } ;
struct TYPE_5__ {int device; int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int FUNC_1 (TYPE_2__*,int ,int*) ;
 int VAR_28 ;
 int FUNC_2 (int ,TYPE_2__*,int,char*,int ,int,void*) ;
 int FUNC_3 (struct qla_hw_data*) ;

__attribute__((used)) static inline void
FUNC_4(struct qla_hw_data *VAR_29)
{
 VAR_29->device_type = VAR_0;
 switch (VAR_29->pdev->device) {
 case 144:
  VAR_29->device_type |= VAR_4;
  VAR_29->device_type &= ~VAR_0;
  VAR_29->fw_srisc_address = VAR_25;
  break;
 case 143:
  VAR_29->device_type |= VAR_5;
  VAR_29->device_type &= ~VAR_0;
  VAR_29->fw_srisc_address = VAR_25;
  break;
 case 142:
  VAR_29->device_type |= VAR_6;
  VAR_29->device_type |= VAR_23;
  VAR_29->fw_srisc_address = VAR_26;
  break;
 case 141:
  VAR_29->device_type |= VAR_7;
  VAR_29->device_type |= VAR_23;
  VAR_29->fw_srisc_address = VAR_26;
  break;
 case 140:
  VAR_29->device_type |= VAR_8;
  VAR_29->device_type |= VAR_23;
  if (VAR_29->pdev->subsystem_vendor == 0x1028 &&
      VAR_29->pdev->subsystem_device == 0x0170)
   VAR_29->device_type |= VAR_21;
  VAR_29->fw_srisc_address = VAR_26;
  break;
 case 134:
  VAR_29->device_type |= VAR_14;
  VAR_29->fw_srisc_address = VAR_26;
  break;
 case 133:
  VAR_29->device_type |= VAR_15;
  VAR_29->fw_srisc_address = VAR_26;
  break;
 case 139:
  VAR_29->device_type |= VAR_9;
  VAR_29->device_type |= VAR_23;
  VAR_29->device_type |= VAR_1;
  VAR_29->device_type |= VAR_2;
  VAR_29->fw_srisc_address = VAR_27;
  break;
 case 138:
  VAR_29->device_type |= VAR_10;
  VAR_29->device_type |= VAR_23;
  VAR_29->device_type |= VAR_1;
  VAR_29->device_type |= VAR_2;
  VAR_29->fw_srisc_address = VAR_27;
  break;
 case 129:
  VAR_29->device_type |= VAR_19;
  VAR_29->device_type |= VAR_23;
  VAR_29->device_type |= VAR_1;
  VAR_29->device_type |= VAR_2;
  VAR_29->fw_srisc_address = VAR_27;
  break;
 case 136:
  VAR_29->device_type |= VAR_12;
  VAR_29->device_type |= VAR_1;
  VAR_29->fw_srisc_address = VAR_27;
  break;
 case 135:
  VAR_29->device_type |= VAR_13;
  VAR_29->device_type |= VAR_1;
  VAR_29->fw_srisc_address = VAR_27;
  break;
 case 137:
  VAR_29->device_type |= VAR_11;
  VAR_29->device_type |= VAR_23;
  VAR_29->device_type |= VAR_1;
  VAR_29->device_type |= VAR_2;
  VAR_29->fw_srisc_address = VAR_27;
  break;
 case 132:
  VAR_29->device_type |= VAR_16;
  VAR_29->device_type |= VAR_23;
  VAR_29->device_type |= VAR_1;
  VAR_29->device_type |= VAR_2;
  VAR_29->fw_srisc_address = VAR_27;
  break;
 case 131:
  VAR_29->device_type |= VAR_17;
  VAR_29->device_type |= VAR_23;
  VAR_29->device_type |= VAR_1;
  VAR_29->fw_srisc_address = VAR_27;

  FUNC_3(VAR_29);
  break;
 case 145:
  VAR_29->device_type |= VAR_3;
  VAR_29->device_type |= VAR_23;
  VAR_29->device_type |= VAR_1;
  VAR_29->device_type |= VAR_2;
  VAR_29->device_type |= VAR_22;
  VAR_29->fw_srisc_address = VAR_27;
  break;
 case 130:
  VAR_29->device_type |= VAR_18;
  VAR_29->device_type |= VAR_23;
  VAR_29->device_type |= VAR_1;
  VAR_29->device_type |= VAR_2;
  VAR_29->device_type |= VAR_22;
  VAR_29->fw_srisc_address = VAR_27;
  break;
 case 128:
  VAR_29->device_type |= VAR_20;
  break;
 }

 if (FUNC_0(VAR_29))
  VAR_29->port_no = !(VAR_29->portnum & 1);
 else

  FUNC_1(VAR_29->pdev, VAR_24, &VAR_29->port_no);

 if (VAR_29->port_no & 1)
  VAR_29->flags.port0 = 1;
 else
  VAR_29->flags.port0 = 0;
 FUNC_2(VAR_28, VAR_29->pdev, 0x000b,
     "device_type=0x%x port=%d fw_srisc_address=0x%x.\n",
     VAR_29->device_type, VAR_29->flags.port0, VAR_29->fw_srisc_address);
}
