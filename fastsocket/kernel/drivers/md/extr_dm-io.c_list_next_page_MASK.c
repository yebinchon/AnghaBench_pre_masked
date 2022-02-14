
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {scalar_t__ next; } ;
struct dpages {scalar_t__ context_u; scalar_t__ context_ptr; } ;



__attribute__((used)) static void FUNC_0(struct dpages *VAR_0)
{
 struct page_list *VAR_1 = (struct page_list *) VAR_0->context_ptr;
 VAR_0->context_ptr = VAR_1->next;
 VAR_0->context_u = 0;
}
