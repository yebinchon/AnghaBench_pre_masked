
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_0)
{
 unsigned long VAR_1;

 VAR_1 = FUNC_0();

 switch (VAR_1 & 0xf0000ff0) {
  case 0x40000850:
  case 0x400008d0:
  case 0x200008d0:
   VAR_0 -= 4096;
   break;
  default:
   break;
 }

 return VAR_0;
}
