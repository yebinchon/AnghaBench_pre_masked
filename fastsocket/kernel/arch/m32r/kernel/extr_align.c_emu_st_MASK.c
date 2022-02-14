
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (unsigned short) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned long*,int) ;
 unsigned long FUNC_3 (struct pt_regs*,int) ;
 scalar_t__ FUNC_4 (unsigned long,struct pt_regs*,unsigned char**) ;
 int FUNC_5 (struct pt_regs*,int,unsigned long) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_1, struct pt_regs *VAR_2)
{
 unsigned char *VAR_3;
 unsigned long VAR_4;
 unsigned short VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_1 >> 16;
 VAR_7 = FUNC_1(VAR_5);

 VAR_3 = (unsigned char *)FUNC_3(VAR_2, VAR_7);

 if (FUNC_4(VAR_1, VAR_2, &VAR_3))
  return -1;

 VAR_6 = VAR_5 & 0x0040 ? 4 : 2;
 VAR_4 = FUNC_3(VAR_2, FUNC_0(VAR_5));
 if (VAR_6 == 2)
  VAR_4 <<= 16;


 if ((VAR_5 & 0xf0e0) == 0x2060) {
  if (VAR_5 & 0x0010)
   VAR_3 -= 4;
  else
   VAR_3 += 4;

  FUNC_5(VAR_2, VAR_7, (unsigned long)VAR_3);
 }

 if (FUNC_2(VAR_3, &VAR_4, VAR_6))
  return -1;


 if ((VAR_5 & 0xf0f0) == VAR_0) {
  VAR_3 += 2;
  FUNC_5(VAR_2, VAR_7, (unsigned long)VAR_3);
 }

 return 0;
}
