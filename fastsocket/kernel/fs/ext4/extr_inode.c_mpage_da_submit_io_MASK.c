
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pagevec {struct page** pages; } ;
struct page {unsigned long index; } ;
struct mpage_da_data {unsigned long next_page; unsigned long first_page; int pages_written; TYPE_1__* wbc; struct inode* inode; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {long pages_skipped; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,TYPE_1__*) ;
 int FUNC_4 (struct pagevec*,int ) ;
 int FUNC_5 (struct pagevec*,struct address_space*,unsigned long,int ) ;
 int FUNC_6 (struct pagevec*) ;

__attribute__((used)) static int FUNC_7(struct mpage_da_data *VAR_1)
{
 long VAR_2;
 struct pagevec VAR_3;
 unsigned long VAR_4, VAR_5;
 int VAR_6 = 0, VAR_7, VAR_8, VAR_9;
 struct inode *VAR_10 = VAR_1->inode;
 struct address_space *VAR_11 = VAR_10->i_mapping;

 FUNC_0(VAR_1->next_page <= VAR_1->first_page);






 VAR_4 = VAR_1->first_page;
 VAR_5 = VAR_1->next_page - 1;

 FUNC_4(&VAR_3, 0);
 while (VAR_4 <= VAR_5) {
  VAR_8 = FUNC_5(&VAR_3, VAR_11, VAR_4, VAR_0);
  if (VAR_8 == 0)
   break;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   struct page *VAR_12 = VAR_3.pages[VAR_9];

   VAR_4 = VAR_12->index;
   if (VAR_4 > VAR_5)
    break;
   VAR_4++;

   FUNC_0(!FUNC_1(VAR_12));
   FUNC_0(FUNC_2(VAR_12));

   VAR_2 = VAR_1->wbc->pages_skipped;
   VAR_7 = FUNC_3(VAR_12, VAR_1->wbc);
   if (!VAR_7 && (VAR_2 == VAR_1->wbc->pages_skipped))




    VAR_1->pages_written++;





   if (VAR_6 == 0)
    VAR_6 = VAR_7;
  }
  FUNC_6(&VAR_3);
 }
 return VAR_6;
}
