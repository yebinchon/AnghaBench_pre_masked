
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_buffer {struct page** mapped_pages; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page**) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct st_buffer *VAR_0,
    const unsigned int VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3=0; VAR_3 < VAR_1; VAR_3++) {
  struct page *VAR_4 = VAR_0->mapped_pages[VAR_3];

  if (VAR_2)
   FUNC_0(VAR_4);



  FUNC_2(VAR_4);
 }
 FUNC_1(VAR_0->mapped_pages);
 VAR_0->mapped_pages = ((void*)0);

 return 0;
}
