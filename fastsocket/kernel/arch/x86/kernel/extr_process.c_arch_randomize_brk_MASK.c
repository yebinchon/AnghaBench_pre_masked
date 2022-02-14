
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {unsigned long brk; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long,int ) ;

unsigned long FUNC_1(struct mm_struct *VAR_0)
{
 unsigned long VAR_1 = VAR_0->brk + 0x02000000;
 return FUNC_0(VAR_0->brk, VAR_1, 0) ? : VAR_0->brk;
}
