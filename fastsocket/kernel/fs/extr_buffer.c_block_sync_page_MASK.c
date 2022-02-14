
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int backing_dev_info; } ;


 int FUNC_0 (int ,struct page*) ;
 struct address_space* FUNC_1 (struct page*) ;
 int FUNC_2 () ;

void FUNC_3(struct page *VAR_0)
{
 struct address_space *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_1->backing_dev_info, VAR_0);
}
