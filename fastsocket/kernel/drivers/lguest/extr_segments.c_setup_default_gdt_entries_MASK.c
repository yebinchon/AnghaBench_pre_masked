
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lguest_ro_state {int guest_tss; struct desc_struct* guest_gdt; } ;
struct desc_struct {int a; int b; } ;


 struct desc_struct VAR_0 ;
 struct desc_struct VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

void FUNC_0(struct lguest_ro_state *VAR_5)
{
 struct desc_struct *VAR_6 = VAR_5->guest_gdt;
 unsigned long VAR_7 = (unsigned long)&VAR_5->guest_tss;


 VAR_6[VAR_2] = VAR_0;
 VAR_6[VAR_3] = VAR_1;







 VAR_6[VAR_4].a = 0x00000067 | (VAR_7 << 16);
 VAR_6[VAR_4].b = 0x00008900 | (VAR_7 & 0xFF000000)
  | ((VAR_7 >> 16) & 0x000000FF);
}
