
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int) ;

unsigned char
FUNC_1(int VAR_0)
{
 unsigned char VAR_1 = FUNC_0(VAR_0);


 switch (VAR_0) {
  case 130:
  case 132:
   VAR_1 &= 0x7F;
   break;
  case 133:
  case 134:
   VAR_1 &= 0x3F;
   break;
  case 128:
   VAR_1 &= 0x07;
   break;
  case 131:
   VAR_1 &= 0x1F;
   break;
  case 136:
   VAR_1 &= 0xA8;
   break;
  case 135:
   VAR_1 &= 0x1F;
   break;
  case 137:
  case 129:
   VAR_1 &= 0x83;
   break;
 }
 return VAR_1;
}
