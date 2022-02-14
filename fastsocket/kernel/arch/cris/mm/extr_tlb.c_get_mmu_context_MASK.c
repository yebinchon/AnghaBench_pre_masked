
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ page_id; } ;
struct mm_struct {TYPE_1__ context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mm_struct*) ;

void
FUNC_1(struct mm_struct *VAR_1)
{
 if(VAR_1->context.page_id == VAR_0)
  FUNC_0(VAR_1);
}
