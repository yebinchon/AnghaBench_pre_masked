
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int kctype_subtype_t ;
 int FUNC_0 (int ) ;

__attribute__((used)) static uint32_t
FUNC_1(kctype_subtype_t VAR_0)
{
 switch (VAR_0) {
 case 136:
 case 132:
 case 128:
  return sizeof(uint8_t);
  break;
 case 135:
 case 131:
  return sizeof(uint16_t);
  break;
 case 134:
 case 130:
  return sizeof(uint32_t);
  break;
 case 133:
 case 129:
  return sizeof(uint64_t);
  break;

 default:
  FUNC_0(0);
  break;
 }
 return 0;
}
