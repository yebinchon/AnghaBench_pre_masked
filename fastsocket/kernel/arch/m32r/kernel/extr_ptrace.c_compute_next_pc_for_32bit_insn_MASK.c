
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long,struct task_struct*) ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_0, unsigned long VAR_1,
          unsigned long *VAR_2,
          struct task_struct *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7, VAR_8;

 VAR_4 = (VAR_0 >> 28) & 0xf;
 if (VAR_4 == 0xf) {
  VAR_5 = (VAR_0 >> 24) & 0xf;
  switch (VAR_5) {
  case 0xd:
  case 0x9:
   if (!FUNC_0(VAR_3)) {
    VAR_6 = (long)(VAR_0 << 8) >> 6;
    *VAR_2 = (VAR_1 & ~0x3) + VAR_6;
    return;
   }
   break;
  case 0x8:
  case 0xc:
   if (FUNC_0(VAR_3)) {
    VAR_6 = (long)(VAR_0 << 8) >> 6;
    *VAR_2 = (VAR_1 & ~0x3) + VAR_6;
    return;
   }
   break;
  case 0xe:
  case 0xf:
   VAR_6 = (long)(VAR_0 << 8) >> 6;
   *VAR_2 = (VAR_1 & ~0x3) + VAR_6;
   return;
  }
 } else if (VAR_4 == 0xb) {
  VAR_5 = (VAR_0 >> 20) & 0xf;
  switch (VAR_5) {
  case 0x0:
  case 0x1:
  case 0x8:
  case 0x9:
  case 0xa:
  case 0xb:
  case 0xc:
  case 0xd:
   VAR_7 = ((VAR_0 >> 24) & 0xf);
   VAR_8 = ((VAR_0 >> 16) & 0xf);
   if (FUNC_1(VAR_5, VAR_7, VAR_8, VAR_3)) {
    VAR_6 = (long)(VAR_0 << 16) >> 14;
    *VAR_2 = (VAR_1 & ~0x3) + VAR_6;
    return;
   }
   break;
  }
 }
 *VAR_2 = VAR_1 + 4;
}
