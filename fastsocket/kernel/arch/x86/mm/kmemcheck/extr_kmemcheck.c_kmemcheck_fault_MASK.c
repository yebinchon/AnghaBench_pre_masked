
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int flags; scalar_t__ cs; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pt_regs*,unsigned long,int ) ;
 int * FUNC_1 (unsigned long) ;
 int FUNC_2 (struct pt_regs*) ;

bool FUNC_3(struct pt_regs *VAR_4, unsigned long VAR_5,
 unsigned long VAR_6)
{
 pte_t *VAR_7;







 if (VAR_4->flags & VAR_2)
  return 0;
 if (VAR_4->cs != VAR_3)
  return 0;

 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7)
  return 0;

 if (VAR_6 & 2)
  FUNC_0(VAR_4, VAR_5, VAR_1);
 else
  FUNC_0(VAR_4, VAR_5, VAR_0);

 FUNC_2(VAR_4);
 return 1;
}
