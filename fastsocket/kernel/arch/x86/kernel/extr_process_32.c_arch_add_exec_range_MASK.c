
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long exec_limit; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (struct mm_struct*,unsigned long) ;

void FUNC_1(struct mm_struct *VAR_0, unsigned long VAR_1)
{
 if (VAR_1 > VAR_0->context.exec_limit)
  FUNC_0(VAR_0, VAR_1);
}
