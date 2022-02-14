
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1)
{
 unsigned char VAR_2;

 if((((unsigned long)VAR_0[8]) & ~0x80) != 0)
  return;
 if((unsigned short)VAR_0[12] != 0)
  return;

 VAR_2 = VAR_0[8] & 0x80;
 FUNC_0(&VAR_0[8], VAR_1, 6);
 VAR_0[8] |= VAR_2;

 return;
}
