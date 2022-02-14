
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
typedef int spinlock_t ;


 int * FUNC_0 (struct page*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static spinlock_t *FUNC_2(struct page *VAR_0, struct mm_struct *VAR_1)
{
 spinlock_t *VAR_2 = ((void*)0);






 return VAR_2;
}
