
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page_list* next; } ;
struct dm_kcopyd_client {unsigned int nr_reserved_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page_list* FUNC_0 (int ) ;
 int FUNC_1 (struct page_list*) ;
 int FUNC_2 (struct dm_kcopyd_client*,struct page_list*) ;

__attribute__((used)) static int FUNC_3(struct dm_kcopyd_client *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;
 struct page_list *VAR_5 = ((void*)0), *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_6 = FUNC_0(VAR_1);
  if (!VAR_6) {
   if (VAR_5)
    FUNC_1(VAR_5);
   return -VAR_0;
  }
  VAR_6->next = VAR_5;
  VAR_5 = VAR_6;
 }

 VAR_2->nr_reserved_pages += VAR_3;
 FUNC_2(VAR_2, VAR_5);

 return 0;
}
