
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int page_tree; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (int *,void**,int ,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct address_space *VAR_1, pgoff_t VAR_2)
{
 int VAR_3;
 struct page *VAR_4;

 FUNC_1();
 VAR_3 = FUNC_0(&VAR_1->page_tree,
    (void **)&VAR_4, VAR_2, 1, VAR_0);
 FUNC_2();
 return VAR_3;
}
