
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vga_regset {scalar_t__ regnum; int lowbit; int highbit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int) ;

void FUNC_2(const struct vga_regset *VAR_1, u32 VAR_2) {

 u8 VAR_3, VAR_4, VAR_5;

 while (VAR_1->regnum != VAR_0) {
  VAR_3 = FUNC_0(((void*)0), VAR_1->regnum);
  VAR_5 = VAR_1->lowbit;
  while (VAR_5 <= VAR_1->highbit) {
   VAR_4 = 1 << VAR_5;
   VAR_3 = VAR_3 & ~VAR_4;
   if (VAR_2 & 1) VAR_3 = VAR_3 | VAR_4;
   VAR_5 ++;
   VAR_2 = VAR_2 >> 1;
  }
  FUNC_1(((void*)0), VAR_1->regnum, VAR_3);
  VAR_1 ++;
 }
}
