
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* pages; } ;
struct TYPE_4__ {int entry_count; TYPE_1__ u; } ;
struct mm_context {TYPE_2__ ldt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long) ;
 int VAR_2 ;

void FUNC_1(struct mm_context *VAR_3)
{
 int VAR_4;

 if (!VAR_2 && VAR_3->ldt.entry_count > VAR_0) {
  VAR_4 = VAR_3->ldt.entry_count / VAR_1;
  while (VAR_4-- > 0)
   FUNC_0((long) VAR_3->ldt.u.pages[VAR_4]);
 }
 VAR_3->ldt.entry_count = 0;
}
