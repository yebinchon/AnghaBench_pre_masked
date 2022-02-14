
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_pt_regs {unsigned long eml_unat; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct kvm_pt_regs*,unsigned long,unsigned long*,int*) ;
 scalar_t__* VAR_1 ;

void FUNC_1(unsigned long VAR_2, unsigned long *VAR_3,
    int *VAR_4, struct kvm_pt_regs *VAR_5)
{
 unsigned long VAR_6, *VAR_7;
 if (VAR_2 >= VAR_0) {
  FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
  return;
 }




 VAR_6 = (unsigned long)VAR_5;
 VAR_7 = &VAR_5->eml_unat;

 VAR_6 += VAR_1[VAR_2];

 *VAR_3 = *(unsigned long *)VAR_6;



 if (VAR_4)
  *VAR_4 = (*VAR_7 >> ((VAR_6 >> 3) & 0x3f)) & 0x1UL;
}
