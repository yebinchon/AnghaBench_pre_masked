
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page_list* next; } ;



__attribute__((used)) static inline struct page_list *FUNC_0(struct page_list *VAR_0, unsigned VAR_1)
{
 while (VAR_0 && VAR_1--)
  VAR_0 = VAR_0->next;

 return VAR_0;
}
