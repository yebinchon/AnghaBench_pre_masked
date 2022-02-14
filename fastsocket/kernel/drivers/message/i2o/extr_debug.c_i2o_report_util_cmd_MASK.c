
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(u8 VAR_0)
{
 switch (VAR_0) {
 case 132:
  FUNC_0("UTIL_NOP, ");
  break;
 case 141:
  FUNC_0("UTIL_ABORT, ");
  break;
 case 140:
  FUNC_0("UTIL_CLAIM, ");
  break;
 case 129:
  FUNC_0("UTIL_CLAIM_RELEASE, ");
  break;
 case 139:
  FUNC_0("UTIL_CONFIG_DIALOG, ");
  break;
 case 137:
  FUNC_0("UTIL_DEVICE_RESERVE, ");
  break;
 case 138:
  FUNC_0("UTIL_DEVICE_RELEASE, ");
  break;
 case 136:
  FUNC_0("UTIL_EVENT_ACKNOWLEDGE, ");
  break;
 case 135:
  FUNC_0("UTIL_EVENT_REGISTER, ");
  break;
 case 134:
  FUNC_0("UTIL_LOCK, ");
  break;
 case 133:
  FUNC_0("UTIL_LOCK_RELEASE, ");
  break;
 case 131:
  FUNC_0("UTIL_PARAMS_GET, ");
  break;
 case 130:
  FUNC_0("UTIL_PARAMS_SET, ");
  break;
 case 128:
  FUNC_0("UTIL_REPLY_FAULT_NOTIFY, ");
  break;
 default:
  FUNC_0("Cmd = %0#2x, ", VAR_0);
 }
}
