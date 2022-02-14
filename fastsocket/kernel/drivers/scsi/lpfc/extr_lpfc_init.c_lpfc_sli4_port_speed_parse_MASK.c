
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct lpfc_hba {int dummy; } ;
__attribute__((used)) static uint32_t
FUNC_0(struct lpfc_hba *VAR_0, uint32_t VAR_1,
      uint8_t VAR_2)
{
 uint32_t VAR_3;

 switch (VAR_1) {
 case 128:
  switch (VAR_2) {
  case 130:
   VAR_3 = 0;
   break;
  case 132:
   VAR_3 = 10;
   break;
  case 134:
   VAR_3 = 100;
   break;
  case 131:
   VAR_3 = 1000;
   break;
  case 133:
   VAR_3 = 10000;
   break;
  default:
   VAR_3 = 0;
  }
  break;
 case 129:
  switch (VAR_2) {
  case 135:
   VAR_3 = 0;
   break;
  case 139:
   VAR_3 = 1000;
   break;
  case 138:
   VAR_3 = 2000;
   break;
  case 137:
   VAR_3 = 4000;
   break;
  case 136:
   VAR_3 = 8000;
   break;
  case 141:
   VAR_3 = 10000;
   break;
  case 140:
   VAR_3 = 16000;
   break;
  default:
   VAR_3 = 0;
  }
  break;
 default:
  VAR_3 = 0;
 }
 return VAR_3;
}
