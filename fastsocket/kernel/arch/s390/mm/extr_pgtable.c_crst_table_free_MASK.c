
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int lru; } ;
struct TYPE_2__ {int list_lock; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 unsigned long* FUNC_1 (unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct page* FUNC_5 (unsigned long*) ;

void FUNC_6(struct mm_struct *VAR_1, unsigned long *VAR_2)
{
 unsigned long *VAR_3 = FUNC_1(VAR_2);
 struct page *VAR_4 = FUNC_5(VAR_2);

 FUNC_3(&VAR_1->context.list_lock);
 FUNC_2(&VAR_4->lru);
 FUNC_4(&VAR_1->context.list_lock);
 if (VAR_3)
  FUNC_0((unsigned long) VAR_3, VAR_0);
 FUNC_0((unsigned long) VAR_2, VAR_0);
}
