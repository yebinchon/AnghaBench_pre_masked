
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int lru; scalar_t__ index; } ;
struct TYPE_2__ {int list_lock; int crst_list; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

unsigned long *FUNC_6(struct mm_struct *VAR_2, int VAR_3)
{
 struct page *VAR_4 = FUNC_1(VAR_1, VAR_0);

 if (!VAR_4)
  return ((void*)0);
 VAR_4->index = 0;
 if (VAR_3) {
  struct page *VAR_5 = FUNC_1(VAR_1, VAR_0);
  if (!VAR_5) {
   FUNC_0(VAR_4, VAR_0);
   return ((void*)0);
  }
  VAR_4->index = FUNC_3(VAR_5);
 }
 FUNC_4(&VAR_2->context.list_lock);
 FUNC_2(&VAR_4->lru, &VAR_2->context.crst_list);
 FUNC_5(&VAR_2->context.list_lock);
 return (unsigned long *) FUNC_3(VAR_4);
}
