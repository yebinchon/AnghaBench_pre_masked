
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int ldt; } ;
struct mm_struct {TYPE_1__ context; } ;
struct TYPE_4__ {struct mm_struct* active_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct mm_struct *VAR_3)
{
 if (VAR_3->context.size) {





  FUNC_1(VAR_3->context.ldt, VAR_3->context.size);
  if (VAR_3->context.size * VAR_0 > VAR_1)
   FUNC_3(VAR_3->context.ldt);
  else
   FUNC_2(FUNC_4(VAR_3->context.ldt));
  VAR_3->context.size = 0;
 }
}
