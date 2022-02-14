
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned short,unsigned long) ;

int FUNC_1(unsigned long VAR_0)
{
 unsigned short VAR_1 = *(unsigned short *)VAR_0;
 int VAR_2 = 0;

 switch ((VAR_1 & 0x0f00) >> 8) {
 case 0x0:
 case 0x9:
 case 0xb:
  VAR_2 = 2;
  break;
 case 0xe:
 case 0xf:
  VAR_2 = 6;
  break;
 case 0xd:

  if ((VAR_1 & 0xff) == 0xff)
   VAR_2 = 4;
  else
   VAR_2 = 6;
  break;
 default:
  FUNC_0("Couldn't find size of opcode 0x%x at 0x%lx\n", VAR_1, VAR_0);
 }

 return VAR_2;
}
