
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cs; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char) ;
 int FUNC_1 (struct pt_regs*) ;

__attribute__((used)) static inline int
FUNC_2(struct pt_regs *VAR_1, unsigned char *VAR_2,
        unsigned char VAR_3, int *VAR_4)
{
 unsigned char VAR_5 = VAR_3 & 0xf0;
 unsigned char VAR_6 = VAR_3 & 0x0f;

 switch (VAR_5) {
 case 0x20:
 case 0x30:






  return ((VAR_6 & 7) == 0x6);
 case 0x60:

  return (VAR_6 & 0xC) == 0x4;
 case 0xF0:

  return !VAR_6 || (VAR_6>>1) == 1;
 case 0x00:

  if (FUNC_0(VAR_2, VAR_3))
   return 0;

  *VAR_4 = (VAR_6 == 0xF) &&
   (VAR_3 == 0x0D || VAR_3 == 0x18);
  return 0;
 default:
  return 0;
 }
}
