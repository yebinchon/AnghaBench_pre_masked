
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
__attribute__((used)) static const char *
FUNC_0(uint32_t VAR_0)
{
 switch (VAR_0) {
 case 134:
  return "COLD/RE-INIT";
 case 132:
  return "INITIALIZING";
 case 128:
  return "READY";
 case 130:
  return "NEED RESET";
 case 131:
  return "NEED QUIESCENT";
 case 133:
  return "FAILED";
 case 129:
  return "QUIESCENT";
 default:
  return "Unknown";
 }
}
