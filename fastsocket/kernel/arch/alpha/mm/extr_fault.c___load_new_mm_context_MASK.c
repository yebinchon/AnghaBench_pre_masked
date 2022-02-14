
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcb_struct {unsigned long asn; unsigned long ptbr; } ;
struct mm_struct {unsigned long* context; scalar_t__ pgd; } ;
struct TYPE_2__ {struct pcb_struct pcb; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (struct mm_struct*,size_t) ;
 int FUNC_1 (struct pcb_struct*) ;
 TYPE_1__* FUNC_2 () ;
 size_t FUNC_3 () ;

void
FUNC_4(struct mm_struct *VAR_3)
{
 unsigned long VAR_4;
 struct pcb_struct *VAR_5;

 VAR_4 = FUNC_0(VAR_3, FUNC_3());
 VAR_3->context[FUNC_3()] = VAR_4;

 VAR_5 = &FUNC_2()->pcb;
 VAR_5->asn = VAR_4 & VAR_0;
 VAR_5->ptbr = ((unsigned long) VAR_3->pgd - VAR_1) >> VAR_2;

 FUNC_1(VAR_5);
}
