
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {int dummy; } ;
struct dpages {unsigned int context_u; struct page_list* context_ptr; int next_page; int get_page; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct dpages *VAR_2, struct page_list *VAR_3, unsigned VAR_4)
{
 VAR_2->get_page = VAR_0;
 VAR_2->next_page = VAR_1;
 VAR_2->context_u = VAR_4;
 VAR_2->context_ptr = VAR_3;
}
