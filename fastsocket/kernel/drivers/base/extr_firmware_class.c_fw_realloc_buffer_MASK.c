
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct firmware_priv {int page_array_size; int nr_pages; struct page** pages; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct firmware_priv*) ;
 int FUNC_3 (struct page**) ;
 struct page** FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct page**,struct page**,int) ;
 int FUNC_7 (struct page**,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct firmware_priv *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_6, VAR_3) >> VAR_2;


 if (VAR_5->page_array_size < VAR_7) {
  int VAR_8 = FUNC_5(VAR_7,
      VAR_5->page_array_size * 2);
  struct page **VAR_9;

  VAR_9 = FUNC_4(VAR_8 * sizeof(void *),
        VAR_1);
  if (!VAR_9) {
   FUNC_2(VAR_5);
   return -VAR_0;
  }
  FUNC_6(VAR_9, VAR_5->pages,
         VAR_5->page_array_size * sizeof(void *));
  FUNC_7(&VAR_9[VAR_5->page_array_size], 0, sizeof(void *) *
         (VAR_8 - VAR_5->page_array_size));
  FUNC_3(VAR_5->pages);
  VAR_5->pages = VAR_9;
  VAR_5->page_array_size = VAR_8;
 }

 while (VAR_5->nr_pages < VAR_7) {
  VAR_5->pages[VAR_5->nr_pages] =
   FUNC_1(VAR_1 | VAR_4);

  if (!VAR_5->pages[VAR_5->nr_pages]) {
   FUNC_2(VAR_5);
   return -VAR_0;
  }
  VAR_5->nr_pages++;
 }
 return 0;
}
