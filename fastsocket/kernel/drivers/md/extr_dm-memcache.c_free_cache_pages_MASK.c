
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {int page; struct page_list* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page_list*) ;

__attribute__((used)) static void FUNC_3(struct page_list *VAR_0)
{
 while (VAR_0) {
  struct page_list *VAR_1 = VAR_0;

  VAR_0 = VAR_1->next;
  FUNC_0(!VAR_1->page);
  FUNC_1(VAR_1->page);
  FUNC_2(VAR_1);
 }
}
