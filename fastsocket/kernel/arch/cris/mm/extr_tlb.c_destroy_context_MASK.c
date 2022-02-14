
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ page_id; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mm_struct*) ;
 int ** VAR_1 ;
 int FUNC_2 (char*,scalar_t__,struct mm_struct*) ;

void
FUNC_3(struct mm_struct *VAR_2)
{
 if(VAR_2->context.page_id != VAR_0) {
  FUNC_0(FUNC_2("destroy_context %d (%p)\n", VAR_2->context.page_id, VAR_2));
  FUNC_1(VAR_2);
  VAR_1[VAR_2->context.page_id] = ((void*)0);
 }
}
