
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {scalar_t__ index; struct address_space* mapping; } ;
struct inode {struct address_space* i_mapping; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct page*) ;
 struct buffer_head* FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct pagevec*,int ) ;
 int FUNC_8 (struct pagevec*,struct address_space*,scalar_t__*,int ,scalar_t__) ;
 int FUNC_9 (struct pagevec*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static pgoff_t FUNC_12(struct inode *VAR_2, pgoff_t VAR_3,
        unsigned int VAR_4)
{
 struct address_space *VAR_5 = VAR_2->i_mapping;
 pgoff_t VAR_6;
 struct pagevec VAR_7;
 pgoff_t VAR_8 = 0;
 int VAR_9, VAR_10, VAR_11 = 0;

 if (VAR_4 == 0)
  return 0;
 FUNC_7(&VAR_7, 0);
 while (!VAR_11) {
  VAR_6 = VAR_3;
  VAR_10 = FUNC_8(&VAR_7, VAR_5, &VAR_6,
           VAR_0,
           (pgoff_t)VAR_1);
  if (VAR_10 == 0)
   break;
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   struct page *VAR_12 = VAR_7.pages[VAR_9];
   struct buffer_head *VAR_13, *VAR_14;

   FUNC_4(VAR_12);
   if (FUNC_10(VAR_12->mapping != VAR_5) ||
       !FUNC_0(VAR_12) ||
       FUNC_1(VAR_12) ||
       VAR_12->index != VAR_3) {
    VAR_11 = 1;
    FUNC_11(VAR_12);
    break;
   }
   if (FUNC_6(VAR_12)) {
    VAR_13 = VAR_14 = FUNC_5(VAR_12);
    do {
     if (!FUNC_2(VAR_13) &&
         !FUNC_3(VAR_13))
      VAR_11 = 1;
     VAR_13 = VAR_13->b_this_page;
    } while (!VAR_11 && (VAR_13 != VAR_14));
   }
   FUNC_11(VAR_12);
   if (VAR_11)
    break;
   VAR_3++;
   VAR_8++;
   if (VAR_8 >= VAR_4) {
    VAR_11 = 1;
    break;
   }
  }
  FUNC_9(&VAR_7);
 }
 return VAR_8;
}
