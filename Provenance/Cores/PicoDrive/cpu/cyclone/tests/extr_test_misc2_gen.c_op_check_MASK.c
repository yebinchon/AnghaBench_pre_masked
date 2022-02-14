
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(unsigned short VAR_0)
{
 if ((VAR_0&0xf000) == 0x6000) return 0;
 if ((VAR_0&0xf0f8) == 0x50c8) return 0;
 if ((VAR_0&0xff80) == 0x4e80) return 0;
 if ((VAR_0&0xf000) == 0xa000) return 0;
 if ((VAR_0&0xf000) == 0xf000) return 0;
 if ((VAR_0&0xfff8)==0x4e70&&VAR_0!=0x4e71&&VAR_0!=0x4e76) return 0;

 if ((VAR_0&0x3f) >= 0x28) VAR_0 = (VAR_0&~0x3f) | (FUNC_0() % 0x28);
 return 1;
}
