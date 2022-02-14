
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {unsigned long cr_ifs; int loadrs; scalar_t__ ar_bspstore; } ;


 int VAR_0 ;
 long FUNC_0 (unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_1 (unsigned long*,long) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

unsigned long
FUNC_3 (struct task_struct *VAR_1, struct pt_regs *VAR_2,
         unsigned long *VAR_3)
{
 unsigned long *VAR_4, *VAR_5, VAR_6 = VAR_2->cr_ifs;
 long VAR_7;

 VAR_4 = (unsigned long *) VAR_1 + VAR_0/8;
 VAR_5 = (unsigned long *) VAR_2->ar_bspstore;
 VAR_7 = FUNC_0(VAR_4, VAR_4 + (VAR_2->loadrs >> 19));

 if (FUNC_2(VAR_2))
  VAR_7 += (VAR_6 & 0x7f);
 else
  VAR_6 &= ~(1UL << 63);

 if (VAR_3)
  *VAR_3 = VAR_6;
 return (unsigned long) FUNC_1(VAR_5, VAR_7);
}
