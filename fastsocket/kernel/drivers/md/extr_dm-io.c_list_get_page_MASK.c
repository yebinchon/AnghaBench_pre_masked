
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page* page; } ;
struct page {int dummy; } ;
struct dpages {unsigned int context_u; scalar_t__ context_ptr; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dpages *VAR_1,
    struct page **VAR_2, unsigned long *VAR_3, unsigned *VAR_4)
{
 unsigned VAR_5 = VAR_1->context_u;
 struct page_list *VAR_6 = (struct page_list *) VAR_1->context_ptr;

 *VAR_2 = VAR_6->page;
 *VAR_3 = VAR_0 - VAR_5;
 *VAR_4 = VAR_5;
}
