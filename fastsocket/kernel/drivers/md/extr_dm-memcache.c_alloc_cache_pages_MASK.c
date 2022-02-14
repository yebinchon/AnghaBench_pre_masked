
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page_list* next; struct page* page; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct page_list*) ;
 struct page_list* FUNC_3 (int,int ) ;

__attribute__((used)) static struct page_list *FUNC_4(unsigned VAR_1)
{
 struct page_list *VAR_2, *VAR_3 = ((void*)0);
 struct page *VAR_4;

 while (VAR_1--) {
  VAR_4 = FUNC_1(VAR_0);
  if (!VAR_4)
   goto err;

  VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
  if (!VAR_2) {
   FUNC_0(VAR_4);
   goto err;
  }

  VAR_2->page = VAR_4;
  VAR_2->next = VAR_3;
  VAR_3 = VAR_2;
 }

 return VAR_3;

err:
 FUNC_2(VAR_3);
 return ((void*)0);
}
