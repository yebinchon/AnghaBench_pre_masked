
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {scalar_t__ index; } ;
struct mpage_da_data {scalar_t__ first_page; scalar_t__ next_page; struct inode* inode; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct pagevec*,struct address_space*,scalar_t__,int ) ;
 int FUNC_6 (struct pagevec*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static void FUNC_8(struct mpage_da_data *VAR_1)
{
 int VAR_2, VAR_3;
 pgoff_t VAR_4, VAR_5;
 struct pagevec VAR_6;
 struct inode *VAR_7 = VAR_1->inode;
 struct address_space *VAR_8 = VAR_7->i_mapping;

 VAR_4 = VAR_1->first_page;
 VAR_5 = VAR_1->next_page - 1;
 while (VAR_4 <= VAR_5) {
  VAR_2 = FUNC_5(&VAR_6, VAR_8, VAR_4, VAR_0);
  if (VAR_2 == 0)
   break;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   struct page *VAR_9 = VAR_6.pages[VAR_3];
   if (VAR_9->index > VAR_5)
    break;
   FUNC_0(!FUNC_2(VAR_9));
   FUNC_0(FUNC_3(VAR_9));
   FUNC_4(VAR_9, 0);
   FUNC_1(VAR_9);
   FUNC_7(VAR_9);
  }
  VAR_4 = VAR_6.pages[VAR_2 - 1]->index + 1;
  FUNC_6(&VAR_6);
 }
 return;
}
