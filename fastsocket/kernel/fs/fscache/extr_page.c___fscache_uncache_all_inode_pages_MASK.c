
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {scalar_t__ index; } ;
struct inode {struct address_space* i_mapping; } ;
struct fscache_cookie {int dummy; } ;
struct address_space {scalar_t__ nrpages; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct fscache_cookie*,struct page*) ;
 int FUNC_2 (struct fscache_cookie*,struct page*) ;
 int FUNC_3 (char*,struct fscache_cookie*,struct inode*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct pagevec*) ;
 int FUNC_7 (struct pagevec*,int ) ;
 int FUNC_8 (struct pagevec*,struct address_space*,scalar_t__,int ) ;
 int FUNC_9 (struct pagevec*) ;

void FUNC_10(struct fscache_cookie *VAR_1,
           struct inode *VAR_2)
{
 struct address_space *VAR_3 = VAR_2->i_mapping;
 struct pagevec VAR_4;
 pgoff_t VAR_5;
 int VAR_6;

 FUNC_3("%p,%p", VAR_1, VAR_2);

 if (!VAR_3 || VAR_3->nrpages == 0) {
  FUNC_4(" [no pages]");
  return;
 }

 FUNC_7(&VAR_4, 0);
 VAR_5 = 0;
 do {
  if (!FUNC_8(&VAR_4, VAR_3, VAR_5, VAR_0))
   break;
  for (VAR_6 = 0; VAR_6 < FUNC_6(&VAR_4); VAR_6++) {
   struct page *VAR_7 = VAR_4.pages[VAR_6];
   VAR_5 = VAR_7->index;
   if (FUNC_0(VAR_7)) {
    FUNC_2(VAR_1, VAR_7);
    FUNC_1(VAR_1, VAR_7);
   }
  }
  FUNC_9(&VAR_4);
  FUNC_5();
 } while (++VAR_5);

 FUNC_4("");
}
