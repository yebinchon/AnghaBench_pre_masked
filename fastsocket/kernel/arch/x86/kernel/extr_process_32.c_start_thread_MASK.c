
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {unsigned long ip; unsigned long sp; int cs; void* ss; void* es; void* ds; scalar_t__ fs; } ;
struct TYPE_3__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pt_regs*,int ) ;

void
FUNC_6(struct pt_regs *VAR_4, unsigned long VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 FUNC_5(VAR_4, 0);

 VAR_4->fs = 0;
 FUNC_4(VAR_0);
 VAR_4->ds = VAR_2;
 VAR_4->es = VAR_2;
 VAR_4->ss = VAR_2;
 VAR_4->cs = VAR_1;
 VAR_4->ip = VAR_5;
 VAR_4->sp = VAR_6;

 VAR_7 = FUNC_1();
 FUNC_2(VAR_7, VAR_3->mm);
 FUNC_3();




 FUNC_0(VAR_3);
}
