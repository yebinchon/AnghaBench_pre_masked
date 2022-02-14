
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
__attribute__((used)) static char *FUNC_0(u32 VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "ERROR_OK";
 case 134:
  return "ERROR_FAIL";
 case 131:
  return "MEMORY_UNDERFLOW";
 case 132:
  return "MEMORY_OVERFLOW";
 case 139:
  return "BAD_PARAM";
 case 141:
  return "BAD_CHECKSUM";
 case 130:
  return "NMI_INTERRUPT";
 case 140:
  return "BAD_DATABASE";
 case 142:
  return "ALLOC_FAIL";
 case 136:
  return "DMA_UNDERRUN";
 case 137:
  return "DMA_STATUS";
 case 138:
  return "DINO_ERROR";
 case 135:
  return "EEPROM_ERROR";
 case 128:
  return "SYSASSERT";
 case 133:
  return "FATAL_ERROR";
 default:
  return "UNKNOWN_ERROR";
 }
}
