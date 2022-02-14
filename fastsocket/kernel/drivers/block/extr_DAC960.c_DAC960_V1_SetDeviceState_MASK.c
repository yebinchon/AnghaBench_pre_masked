
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char Channel; unsigned char TargetID; scalar_t__ Modifier; int DeviceState; int CommandOpcode; } ;
struct TYPE_9__ {TYPE_1__ Type3D; } ;
struct TYPE_8__ {int CommandStatus; TYPE_3__ CommandMailbox; } ;
struct TYPE_10__ {TYPE_2__ V1; } ;
typedef int DAC960_V1_PhysicalDeviceState_T ;
typedef TYPE_3__ DAC960_V1_CommandMailbox_T ;
typedef int DAC960_Controller_T ;
typedef TYPE_4__ DAC960_Command_T ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*,int *,unsigned char const*,unsigned char,unsigned char,...) ;




 int VAR_0 ;


__attribute__((used)) static void FUNC_2(DAC960_Controller_T *VAR_1,
         DAC960_Command_T *VAR_2,
         unsigned char VAR_3,
         unsigned char VAR_4,
         DAC960_V1_PhysicalDeviceState_T
           VAR_5,
         const unsigned char *VAR_6)
{
  DAC960_V1_CommandMailbox_T *VAR_7 = &VAR_2->V1.CommandMailbox;
  VAR_7->Type3D.CommandOpcode = VAR_0;
  VAR_7->Type3D.Channel = VAR_3;
  VAR_7->Type3D.TargetID = VAR_4;
  VAR_7->Type3D.DeviceState = VAR_5;
  VAR_7->Type3D.Modifier = 0;
  FUNC_0(VAR_2);
  switch (VAR_2->V1.CommandStatus)
    {
    case 129:
      FUNC_1("%s of Physical Device %d:%d Succeeded\n", VAR_1,
     VAR_6, VAR_3, VAR_4);
      break;
    case 128:
      FUNC_1("%s of Physical Device %d:%d Failed - "
     "Unable to Start Device\n", VAR_1,
     VAR_6, VAR_3, VAR_4);
      break;
    case 130:
      FUNC_1("%s of Physical Device %d:%d Failed - "
     "No Device at Address\n", VAR_1,
     VAR_6, VAR_3, VAR_4);
      break;
    case 131:
      FUNC_1("%s of Physical Device %d:%d Failed - "
     "Invalid Channel or Target or Modifier\n",
     VAR_1, VAR_6, VAR_3, VAR_4);
      break;
    case 132:
      FUNC_1("%s of Physical Device %d:%d Failed - "
     "Channel Busy\n", VAR_1,
     VAR_6, VAR_3, VAR_4);
      break;
    default:
      FUNC_1("%s of Physical Device %d:%d Failed - "
     "Unexpected Status %04X\n", VAR_1,
     VAR_6, VAR_3, VAR_4,
     VAR_2->V1.CommandStatus);
      break;
    }
}
