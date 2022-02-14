
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(unsigned char VAR_0)
{
 switch(VAR_0) {
 case 134:
  FUNC_0( "BUSPHASE_COMMAND\n");
  break;
 case 131:
  FUNC_0( "BUSPHASE_MESSAGE_IN\n");
  break;
 case 130:
  FUNC_0( "BUSPHASE_MESSAGE_OUT\n");
  break;
 case 133:
  FUNC_0( "BUSPHASE_DATA_IN\n");
  break;
 case 132:
  FUNC_0( "BUSPHASE_DATA_OUT\n");
  break;
 case 128:
  FUNC_0( "BUSPHASE_STATUS\n");
  break;
 case 129:
  FUNC_0( "BUSPHASE_SELECT\n");
  break;
 default:
  FUNC_0( "BUSPHASE_other: 0x%x\n", VAR_0);
  break;
 }
}
