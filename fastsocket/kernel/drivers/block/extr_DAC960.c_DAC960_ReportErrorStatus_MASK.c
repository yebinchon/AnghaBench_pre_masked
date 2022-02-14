
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int DriveSpinUpMessageDisplayed; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int FUNC_0 (char*,TYPE_1__*,...) ;
 int FUNC_1 (char*,TYPE_1__*,...) ;

__attribute__((used)) static bool FUNC_2(DAC960_Controller_T *VAR_0,
     unsigned char VAR_1,
     unsigned char VAR_2,
     unsigned char VAR_3)
{
  switch (VAR_1)
    {
    case 0x00:
      FUNC_1("Physical Device %d:%d Not Responding\n",
      VAR_0, VAR_3, VAR_2);
      break;
    case 0x08:
      if (VAR_0->DriveSpinUpMessageDisplayed) break;
      FUNC_1("Spinning Up Drives\n", VAR_0);
      VAR_0->DriveSpinUpMessageDisplayed = 1;
      break;
    case 0x30:
      FUNC_1("Configuration Checksum Error\n", VAR_0);
      break;
    case 0x60:
      FUNC_1("Mirror Race Recovery Failed\n", VAR_0);
      break;
    case 0x70:
      FUNC_1("Mirror Race Recovery In Progress\n", VAR_0);
      break;
    case 0x90:
      FUNC_1("Physical Device %d:%d COD Mismatch\n",
      VAR_0, VAR_3, VAR_2);
      break;
    case 0xA0:
      FUNC_1("Logical Drive Installation Aborted\n", VAR_0);
      break;
    case 0xB0:
      FUNC_1("Mirror Race On A Critical Logical Drive\n", VAR_0);
      break;
    case 0xD0:
      FUNC_1("New Controller Configuration Found\n", VAR_0);
      break;
    case 0xF0:
      FUNC_0("Fatal Memory Parity Error for Controller at\n", VAR_0);
      return 1;
    default:
      FUNC_0("Unknown Initialization Error %02X for Controller at\n",
     VAR_0, VAR_1);
      return 1;
    }
  return 0;
}
