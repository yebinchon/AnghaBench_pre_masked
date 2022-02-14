
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page_list* next; } ;
struct dm_kcopyd_client {int nr_free_pages; struct page_list* pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page_list* FUNC_0 (int) ;
 int FUNC_1 (struct dm_kcopyd_client*,struct page_list*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dm_kcopyd_client *VAR_3,
       unsigned int VAR_4, struct page_list **VAR_5)
{
 struct page_list *VAR_6;

 *VAR_5 = ((void*)0);

 do {
  VAR_6 = FUNC_0(VAR_2 | VAR_1);
  if (FUNC_2(!VAR_6)) {

   VAR_6 = VAR_3->pages;
   if (FUNC_2(!VAR_6))
    goto out_of_memory;
   VAR_3->pages = VAR_6->next;
   VAR_3->nr_free_pages--;
  }
  VAR_6->next = *VAR_5;
  *VAR_5 = VAR_6;
 } while (--VAR_4);

 return 0;

out_of_memory:
 if (*VAR_5)
  FUNC_1(VAR_3, *VAR_5);
 return -VAR_0;
}
