
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 unsigned long FUNC_1 (struct task_struct*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_2, unsigned long VAR_3,
          unsigned long *VAR_4,
          struct task_struct *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;

 if (VAR_2 & 0x00008000)
  VAR_11 = 1;
 if (VAR_3 & 3)
  VAR_2 &= 0x7fff;
 else
  VAR_2 >>= 16;

 VAR_6 = (VAR_2 >> 12) & 0xf;
 VAR_7 = (VAR_2 >> 8) & 0xf;
 VAR_8 = (VAR_2 >> 4) & 0xf;

 if (VAR_6 == 0x7) {
  switch (VAR_7) {
  case 0xd:
  case 0x9:
   if (!FUNC_0(VAR_5)) {
    VAR_9 = (long)(VAR_2 << 24) >> 22;
    *VAR_4 = (VAR_3 & ~0x3) + VAR_9;
    return;
   }
   break;
  case 0x8:
  case 0xc:
   if (FUNC_0(VAR_5)) {
    VAR_9 = (long)(VAR_2 << 24) >> 22;
    *VAR_4 = (VAR_3 & ~0x3) + VAR_9;
    return;
   }
   break;
  case 0xe:
  case 0xf:
   VAR_9 = (long)(VAR_2 << 24) >> 22;
   *VAR_4 = (VAR_3 & ~0x3) + VAR_9;
   return;
   break;
  }
 } else if (VAR_6 == 0x1) {
  switch (VAR_7) {
  case 0x0:
   if (VAR_8 == 0xf) {
   } else if (VAR_8 == 0xd) {
    *VAR_4 = FUNC_1(VAR_5, VAR_0);
    return;
   }
   break;
  case 0xc:
   if (VAR_8 == 0xc && FUNC_0(VAR_5)) {
    VAR_10 = VAR_2 & 0xf;
    *VAR_4 = FUNC_1(VAR_5,
         VAR_1[VAR_10]);
    return;
   }
   break;
  case 0xd:
   if (VAR_8 == 0xc && !FUNC_0(VAR_5)) {
    VAR_10 = VAR_2 & 0xf;
    *VAR_4 = FUNC_1(VAR_5,
         VAR_1[VAR_10]);
    return;
   }
   break;
  case 0xe:
  case 0xf:
   if (VAR_8 == 0xc) {
    VAR_10 = VAR_2 & 0xf;
    *VAR_4 = FUNC_1(VAR_5,
         VAR_1[VAR_10]);
    return;
   }
   break;
  }
 }
 if (VAR_11)
  *VAR_4 = VAR_3 + 4;
 else
  *VAR_4 = VAR_3 + 2;
}
