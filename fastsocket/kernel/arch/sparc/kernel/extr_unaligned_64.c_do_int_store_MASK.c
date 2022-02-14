
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned long*,int,unsigned long,int) ;
 scalar_t__ FUNC_2 (int,struct pt_regs*) ;
 unsigned long* FUNC_3 (int,struct pt_regs*) ;
 unsigned long FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int FUNC_8(int VAR_0, int VAR_1, unsigned long *VAR_2,
          struct pt_regs *VAR_3, int VAR_4, int VAR_5)
{
 unsigned long VAR_6 = 0;
 unsigned long *VAR_7 = &VAR_6;
 unsigned long VAR_8;

 if (VAR_1 == 16) {
  VAR_1 = 8;
  VAR_6 = (((long)(VAR_0 ?
          (unsigned)FUNC_2(VAR_0, VAR_3) : 0)) << 32) |
   (unsigned)FUNC_2(VAR_0 + 1, VAR_3);
 } else if (VAR_0) {
  VAR_7 = FUNC_3(VAR_0, VAR_3);
 }
 VAR_8 = *VAR_7;
 if (FUNC_7(VAR_4 != VAR_5)) {
  switch (VAR_1) {
  case 2:
   VAR_8 = FUNC_4(VAR_8);
   break;
  case 4:
   VAR_8 = FUNC_5(VAR_8);
   break;
  case 8:
   VAR_8 = FUNC_6(VAR_8);
   break;
  case 16:
  default:
   FUNC_0();
   break;
  };
 }
 return FUNC_1(VAR_2, VAR_1, VAR_8, VAR_4);
}
