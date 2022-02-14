
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;
struct address_space {int host; int tree_lock; int page_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct page*,struct address_space*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_2,
  struct address_space *VAR_3, int VAR_4)
{
 FUNC_6(&VAR_3->tree_lock);
 if (VAR_2->mapping) {
  FUNC_1(VAR_4 && !FUNC_0(VAR_2));
  FUNC_3(VAR_2, VAR_3);
  FUNC_5(&VAR_3->page_tree,
    FUNC_4(VAR_2), VAR_1);
 }
 FUNC_7(&VAR_3->tree_lock);
 FUNC_2(VAR_3->host, VAR_0);
}
