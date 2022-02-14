
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_4, struct pt_regs *VAR_5)
{
 unsigned int VAR_6 = (VAR_5->flags >> 12) & 3;

 if (VAR_4 > 3)
  return -VAR_1;

 if (VAR_4 > VAR_6) {
  if (!FUNC_0(VAR_0))
   return -VAR_2;
 }
 VAR_5->flags = (VAR_5->flags & ~VAR_3) | (VAR_4 << 12);

 return 0;
}
